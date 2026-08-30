#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_24961A8C7587026B_LightSystemOption.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class SceneLightStageData;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_SCENELIGHTMANAGERCONFIGDATANEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF45FB0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int SceneLightManagerConfigDataNew_TypeDefinitionIndex = 49556;

	class SceneLightManagerConfigDataNew : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean enbaleLightMangerV2; // 0x18
		::Class_1_24961A8C7587026B_LightSystemOption useLightSystemOption; // 0x1C
		::System::Boolean enableOutput; // 0x20
		::System::Int32 maxSceneManagedLightGameObjectPoolCount; // 0x24
		::System::Int32 maxSceneManagedLightPoolCount; // 0x28
		::System::Int32 maxLoadBlockLRUCount; // 0x2C
		::System::Int32 maxLightweightDisableLightCount; // 0x30
		::System::Int32 maxLightCommandPoolCount; // 0x34
		::System::Single loadingDelaySeconds; // 0x38
		::System::Single loadingDelaySecondsChangeRange; // 0x3C
		::System::Single loadingDelaySecondsChangeSpeed; // 0x40
		::System::Single loadingDelayUpdateSpeed; // 0x44
		::System::Boolean enablePVS; // 0x48
		::System::Boolean enableNewLightVolume; // 0x49
		::System::Collections::Generic::List_1<::SceneLightStageData*>* enableV2WhiteList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENELIGHTMANAGERCONFIGDATANEW__CTOR_OFFSET))(this);
		}
	};
}
