#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigActivityLiveHouseFeverScene; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSELEVELSCENE_GETFLOORMATERIAL_OFFSET UNITYSDK_OFFSET(0x177D4520)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSELEVELSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x177D46F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseLevelScene_TypeDefinitionIndex = 57828;

	class ConfigActivityLiveHouseLevelScene : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* decoLightEffectList; // 0x58
		::UnityEngine::Material* floorMaterial; // 0x60
		::System::String* floorMaterialAnim; // 0x68
		::System::String* normalLightKey; // 0x70
		::System::String* enterLightKey; // 0x78
		::System::String* endLightKey; // 0x80
		::System::String* normalScreenTextureKey; // 0x88
		::System::String* feverScreenTextureKey; // 0x90
		::System::String* endScreenTextureKey; // 0x98
		::MoleMole::Config::ConfigActivityLiveHouseFeverScene* feverSceneConfig; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSELEVELSCENE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* GetFloorMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSELEVELSCENE_GETFLOORMATERIAL_OFFSET))(this);
		}
	};
}
