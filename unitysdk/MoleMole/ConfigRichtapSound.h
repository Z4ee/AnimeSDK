#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigRichtapResource_RichTapResourceType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGRICHTAPSOUND_GETBASEAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x16B53920)
#define MOLEMOLE_CONFIGRICHTAPSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x16B539A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRichtapSound_TypeDefinitionIndex = 70810;

	class ConfigRichtapSound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* xboxResourcePath; // 0x58
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* dualSenseResourcePath; // 0x60
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* googleResourcePath; // 0x68
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* mobileResourcePath; // 0x70
		::System::Single baseCombatAmplitude; // 0x78
		::System::Single baseCutsceneAmplitude; // 0x7C
		::System::Single baseAmplitudeOther; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPSOUND__CTOR_OFFSET))(this);
		}

		::System::Single GetBaseAmplitude(::MoleMole::ConfigRichtapResource_RichTapResourceType type)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::ConfigRichtapResource_RichTapResourceType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPSOUND_GETBASEAMPLITUDE_OFFSET))(this, type);
		}
	};
}
