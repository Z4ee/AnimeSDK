#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/NPCCrowd/Lod/CrowdLODDistanceSetting.h"
#include "unitysdk/NPCCrowd/Lod/LODItem.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_1_OFFSET UNITYSDK_OFFSET(0xD89F6D0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_OFFSET UNITYSDK_OFFSET(0xD89F5E0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DELAYUNREGISTERLODREFPOINT_OFFSET UNITYSDK_OFFSET(0xD8A1CA0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTFROMPOOL_OFFSET UNITYSDK_OFFSET(0xD8A0C10)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTTOPOOL_OFFSET UNITYSDK_OFFSET(0xD8A1BA0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0xD8A1F80)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETLODINDEX_OFFSET UNITYSDK_OFFSET(0xD8A2400)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETPARAMSETTING_OFFSET UNITYSDK_OFFSET(0xD8A0760)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_1_OFFSET UNITYSDK_OFFSET(0xD89FF70)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_OFFSET UNITYSDK_OFFSET(0xD89F7C0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHREGISTRY_OFFSET UNITYSDK_OFFSET(0xD89FC30)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERDISTANCEPAIR_OFFSET UNITYSDK_OFFSET(0xD8A0D00)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODITEM_OFFSET UNITYSDK_OFFSET(0xD8A09A0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODREFPOINT_OFFSET UNITYSDK_OFFSET(0xD8A15C0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODITEMPARAMKEY_OFFSET UNITYSDK_OFFSET(0xD8A1230)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODPARAMENABLE_OFFSET UNITYSDK_OFFSET(0xD89F760)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODITEM_OFFSET UNITYSDK_OFFSET(0xD8A18A0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODREFPOINT_OFFSET UNITYSDK_OFFSET(0xD8A1D20)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UPDATELODITEMBIAS_OFFSET UNITYSDK_OFFSET(0xD8A03E0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD89F2C0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLODInstance_TypeDefinitionIndex = 58063;

	class NPCCrowdLODInstance : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidParamKey = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::HashSet_1<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*>* lodRefPoints; // 0x10
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*>* dictPool; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>>*>* entity2Handlers; // 0x20
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>>*>* listCache; // 0x28
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::LODItem>* lodItems; // 0x30
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* callback; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Lod::CrowdLODDistanceSetting>* lodParams; // 0x40
		::System::Int32 curValidParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void AddLODParams(::Il2CppArray<::System::Single>* lodDis, ::System::Single lodBias, ::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_OFFSET))(this, lodDis, lodBias, key);
		}

		::System::Void AddLODParams_1(::NPCCrowd::Lod::CrowdLODDistanceSetting setting, ::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::CrowdLODDistanceSetting, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_1_OFFSET))(this, setting, key);
		}

		::System::Void SetLODParamEnable(::System::Int32 paramKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODPARAMENABLE_OFFSET))(this, paramKey);
		}

		::System::Void RefreshLODParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_OFFSET))(this);
		}

		::System::Void RefreshLODParams_1(::System::Single softArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_1_OFFSET))(this, softArea);
		}

		::System::Void UpdateLODItemBias(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Single bias)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UPDATELODITEMBIAS_OFFSET))(this, i, bias);
		}

		::NPCCrowd::Lod::CrowdLODDistanceSetting GetParamSetting(::NPCCrowd::Lod::LODItem item)
		{
			return ((::NPCCrowd::Lod::CrowdLODDistanceSetting(*)(::PVOID, ::NPCCrowd::Lod::LODItem))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETPARAMSETTING_OFFSET))(this, item);
		}

		::System::Void RefreshRegistry(::System::Int32 registry, ::NPCCrowd::Lod::LODItem item, ::System::Single softArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::LODItem, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHREGISTRY_OFFSET))(this, registry, item, softArea);
		}

		::System::Void RegisterLODItem(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Single bias, ::System::Int32 paramKey)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODITEM_OFFSET))(this, i, bias, paramKey);
		}

		::System::Void SetLODItemParamKey(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Int32 paramKey)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODITEMPARAMKEY_OFFSET))(this, i, paramKey);
		}

		::System::Void RegisterLODRefPoint(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint, ::System::Boolean forceComplete)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODREFPOINT_OFFSET))(this, refPoint, forceComplete);
		}

		::System::Void UnRegisterLODItem(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODITEM_OFFSET))(this, i);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid DelayUnRegisterLODRefPoint(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DELAYUNREGISTERLODREFPOINT_OFFSET))(this, refPoint);
		}

		::System::Void UnRegisterLODRefPoint(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODREFPOINT_OFFSET))(this, refPoint);
		}

		::System::Void RegisterDistancePair(::NPCCrowd::Lod::LODItem p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::LODItem, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERDISTANCEPAIR_OFFSET))(this, p1, p2);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Int32 GetLODIndex(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETLODINDEX_OFFSET))(this, i);
		}

		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>* DictFromPool()
		{
			return ((::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTFROMPOOL_OFFSET))(this);
		}

		::System::Void DictToPool(::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>* dict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTTOPOOL_OFFSET))(this, dict);
		}
	};
}
