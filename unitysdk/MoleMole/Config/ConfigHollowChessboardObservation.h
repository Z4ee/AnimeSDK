#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDOBSERVATION__CTOR_OFFSET UNITYSDK_OFFSET(0x158A92A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardObservation_TypeDefinitionIndex = 55692;

	class ConfigHollowChessboardObservation : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* FadeOutUIPageAnimKey; // 0x58
		::System::String* FadeInUIPageAnimKey; // 0x60
		::System::String* ModifyCameraTargetSectionBeginPerformKey; // 0x68
		::System::String* ModifyCameraTargetSectionEndPerformKey; // 0x70
		::System::String* ModifyCameraTargetSectionStretchKey; // 0x78
		::System::String* CameraBackBeginPerformKey; // 0x80
		::System::String* CameraBackEndPerformKey; // 0x88
		::System::String* CameraBackStretchKey; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDOBSERVATION__CTOR_OFFSET))(this);
		}
	};
}
