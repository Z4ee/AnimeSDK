#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/CrowdLODDistanceSetting.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::GPUPrefab { class MonoNPCCrowdGPUGroupController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x12747700)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_GETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x12747280)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_GETLODDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x12747570)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12746760)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12747950)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_REFRESH_OFFSET UNITYSDK_OFFSET(0x12746E20)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x12746990)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_UNREGISTERIFEXISTS_OFFSET UNITYSDK_OFFSET(0x12746C90)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x12746B10)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x12746FF0)
#define NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12747B60)

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int NPCCrowdGPUPrefabSystem_TypeDefinitionIndex = 43641;

	class NPCCrowdGPUPrefabSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::NPCCrowd::GPUPrefab::NPCCrowdGPUPrefabSystem** StaticGet__instance()
		{
			return (::NPCCrowd::GPUPrefab::NPCCrowdGPUPrefabSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdGPUPrefabSystem_TypeDefinitionIndex)->GetStaticField(0x4CF70);
		}
		static ::NPCCrowd::Lod::CrowdLODDistanceSetting* StaticGet__cachedDefaultLodSetting()
		{
			return (::NPCCrowd::Lod::CrowdLODDistanceSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdGPUPrefabSystem_TypeDefinitionIndex)->GetStaticField(0x4CF78);
		}
		static ::System::Boolean* StaticGet__bDefaultLodSettingCached()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdGPUPrefabSystem_TypeDefinitionIndex)->GetStaticField(0x12790);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController*>* _currentList; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController*>* _delayAddList; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController*>* _delayRemoveList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::GPUPrefab::NPCCrowdGPUPrefabSystem* get_Instance()
		{
			return ((::NPCCrowd::GPUPrefab::NPCCrowdGPUPrefabSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_GET_INSTANCE_OFFSET))();
		}

		::System::Void Register(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController*))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_REGISTER_OFFSET))(this, controller);
		}

		::System::Void Unregister(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController*))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_UNREGISTER_OFFSET))(this, controller);
		}

		static ::System::Void UnregisterIfExists(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController* controller)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController*))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_UNREGISTERIFEXISTS_OFFSET))(controller);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_UPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_GETCAMERAPOSITION_OFFSET))();
		}

		static ::NPCCrowd::Lod::CrowdLODDistanceSetting GetLODDistanceSetting()
		{
			return ((::NPCCrowd::Lod::CrowdLODDistanceSetting(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_GETLODDISTANCESETTING_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_NPCCROWDGPUPREFABSYSTEM_ONDESTROY_OFFSET))(this);
		}
	};
}
