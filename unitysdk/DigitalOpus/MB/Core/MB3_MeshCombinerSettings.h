#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSettingsData; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGS_GETMESHBAKERSETTINGSASSERIALIZEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C4E2960)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGS_GETMESHBAKERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C4E2950)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E29B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSettings_TypeDefinitionIndex = 85054;

	class MB3_MeshCombinerSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGS__CTOR_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB_IMeshBakerSettings* GetMeshBakerSettings()
		{
			return ((::DigitalOpus::MB::Core::MB_IMeshBakerSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGS_GETMESHBAKERSETTINGS_OFFSET))(this);
		}

		::System::Void GetMeshBakerSettingsAsSerializedProperty(::System::String*& propertyName, ::UnityEngine::Object*& targetObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSETTINGS_GETMESHBAKERSETTINGSASSERIALIZEDPROPERTY_OFFSET))(this, propertyName, targetObj);
		}
	};
}
