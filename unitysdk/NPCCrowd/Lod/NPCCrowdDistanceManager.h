#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdDistanceProcessor_TaskRuntime.h"
#include "unitysdk/NPCCrowd/Lod/RegisterData.h"
#include "unitysdk/NPCCrowd/Lod/Registry.h"
#include "unitysdk/NPCCrowd/Lod/TargetPairInt.h"
#include "unitysdk/NPCCrowd/Lod/UpdateMode.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdCameraAgent; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace NPCCrowd::Lod { class NPCCrowdPlayerAgent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_CHECK_OFFSET UNITYSDK_OFFSET(0xF9BED20)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_COMMONREGISTERUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BCB20)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_DISPOSECOMMONAGENTS_OFFSET UNITYSDK_OFFSET(0xF9C0480)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xF9BC2F0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_INITCOMMONAGENTS_OFFSET UNITYSDK_OFFSET(0xF9BC640)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xF9BC470)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_INTERNALUNREGISTERUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BDCB0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BF570)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF9C02F0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BF6B0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BF2C0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_REGISTERTARGET_OFFSET UNITYSDK_OFFSET(0xF9BD330)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_REGISTERUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BCD10)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYGETREGISTRYHANDLERSBYTASKIDX_OFFSET UNITYSDK_OFFSET(0xF9BC7E0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYGETREGISTRY_OFFSET UNITYSDK_OFFSET(0xF9BC8F0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYGETTARGET_OFFSET UNITYSDK_OFFSET(0xF9BC6D0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYSETREGISTRY_OFFSET UNITYSDK_OFFSET(0xF9BCA00)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_UNREGISTERUPDATE_OFFSET UNITYSDK_OFFSET(0xF9BDC20)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_UPDATEREGISTRYCONDITION_OFFSET UNITYSDK_OFFSET(0xF9BD9D0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0xF9BD6A0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0xF9BD2D0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C04D0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xF9C06D0)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9C0760)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF9C0800)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9C0890)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9C0930)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdDistanceManager_TypeDefinitionIndex = 47738;

	class NPCCrowdDistanceManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		// static const ::System::Int32 MAX_TARGET_CNT = 0xDAC; // 0x0
		// static const ::System::Int32 MAX_REGISTYR_CNT = 0x88B8; // 0x0
		// static const ::System::Int32 MAX_TASK_CNT = 0x88B8; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _taskIdx2handlers; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::TargetPairInt, ::System::Int32>* _taskIdxCache; // 0x20
		::Il2CppArray<::NPCCrowd::Lod::Registry>* _registries; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* _delayDeleteRegistry; // 0x30
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x38
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _targetIdxCache; // 0x40
		::System::Collections::Generic::Stack_1<::System::Int32>* _availiableTargetIdx; // 0x48
		::NPCCrowd::Lod::NPCCrowdCameraAgent* cameraAgent; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _registryHandlers; // 0x58
		::NPCCrowd::Lod::NPCCrowdPlayerAgent* playerAgent; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*>* _idxTargetCache; // 0x68
		::Unity::Collections::NativeArray_1<::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime> tasks; // 0x70
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions; // 0x80
		::System::Int32 taskCount; // 0x90
		::System::Int32 registryCount; // 0x94
		::Unity::Jobs::JobHandle _jobHandle; // 0x98
		::Unity::Collections::NativeArray_1<::System::Single> movements; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Lod::NPCCrowdDistanceManager* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdDistanceManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean TryGetTarget(::System::Int32 idx, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*& target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYGETTARGET_OFFSET))(this, idx, target);
		}

		::System::Boolean TryGetRegistryHandlersByTaskIdx(::System::Int32 taskIdx, ::System::Collections::Generic::List_1<::System::Int32>*& handlers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYGETREGISTRYHANDLERSBYTASKIDX_OFFSET))(this, taskIdx, handlers);
		}

		::System::Boolean TryGetRegistry(::System::Int32 handler, ::NPCCrowd::Lod::Registry& registry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::Registry&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYGETREGISTRY_OFFSET))(this, handler, registry);
		}

		::System::Boolean TrySetRegistry(::System::Int32 handler, ::NPCCrowd::Lod::Registry registry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::Registry))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_TRYSETREGISTRY_OFFSET))(this, handler, registry);
		}

		::System::Boolean CommonRegisterUpdate(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2, ::System::Single range, ::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* callback, ::System::Int32& distanceHandler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Single, ::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_COMMONREGISTERUPDATE_OFFSET))(this, p1, p2, range, callback, distanceHandler);
		}

		::System::Boolean RegisterUpdate(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2, ::NPCCrowd::Lod::UpdateMode mode, ::NPCCrowd::Lod::RegisterData data, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::UpdateMode, ::NPCCrowd::Lod::RegisterData, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_REGISTERUPDATE_OFFSET))(this, p1, p2, mode, data, handler);
		}

		::System::Boolean RegisterTarget(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_REGISTERTARGET_OFFSET))(this, p, index);
		}

		::System::Void UpdateRegistryCondition(::System::Int32 handler, ::Il2CppArray<::NPCCrowd::Lod::ConditionData>* conditions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::NPCCrowd::Lod::ConditionData>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_UPDATEREGISTRYCONDITION_OFFSET))(this, handler, conditions);
		}

		::System::Void UnRegisterUpdate(::System::Int32 handlerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_UNREGISTERUPDATE_OFFSET))(this, handlerIdx);
		}

		::System::Void InternalUnRegisterUpdate(::NPCCrowd::Lod::Registry registry, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::Registry, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_INTERNALUNREGISTERUPDATE_OFFSET))(this, registry, index);
		}

		::System::Void Check(::System::Int32 idx, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_CHECK_OFFSET))(this, idx, count);
		}

		::System::Void UpdateTarget(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_UPDATETARGET_OFFSET))(this, p, add);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitCommonAgents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_INITCOMMONAGENTS_OFFSET))(this);
		}

		::System::Void DisposeCommonAgents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_DISPOSECOMMONAGENTS_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}
	};
}
