#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityGhostLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityStandingSteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCDitherStateFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCGameplayTagActionRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshData.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCPathMaskTagRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityTransformAdaptor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_CREATEBUFFER_OFFSET UNITYSDK_OFFSET(0xFF8E240)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GETOBSTACLEGRID_OFFSET UNITYSDK_OFFSET(0xFF8E000)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_ENTITYMAP_OFFSET UNITYSDK_OFFSET(0xFF8E130)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_OBSTACLEGRID_OFFSET UNITYSDK_OFFSET(0xFF8E090)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INITENTITY_OFFSET UNITYSDK_OFFSET(0xFF8EC50)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xFF8E1D0)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0xFF90780)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_SWITCHANDREMOVELAST_OFFSET UNITYSDK_OFFSET(0xFF8F940)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFF90F40)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityRuntimeData_TypeDefinitionIndex = 86692;

	class NPCAbilityRuntimeData : public ::System::Object
	{
	public:
		static ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>* StaticGet_DummyData()
		{
			return (::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityRuntimeData_TypeDefinitionIndex)->GetStaticField(0xD370);
		}
		static ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>* StaticGet_Dummy()
		{
			return (::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityRuntimeData_TypeDefinitionIndex)->GetStaticField(0xD390);
		}
		::NPCCrowd::Ability::NPCAbilityTransformAdaptor* transformAdaptor; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>* handles; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::FNPCNavmeshData>* navmeshDatas; // 0x20
		::NPCCrowd::Ability::NPCAbilityParameters* parameters; // 0x28
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment> pathFollow; // 0x30
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment> gameplayTagActionRuntime; // 0x40
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> animatorBufferData; // 0x50
		::Unity::Collections::NativeArray_1<::System::Boolean> bIsUsing; // 0x60
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackBoard; // 0x70
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> movement; // 0x80
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowV2; // 0x90
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorControlData; // 0xA0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> moveTarget; // 0xB0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityStandingSteeringFragment> standingSteering; // 0xC0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> ObstacleLocation; // 0xD0
		::System::Int32 Count; // 0xE0
		::System::Int32 capcity; // 0xE4
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment> navmeshQueryData; // 0xE8
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCDitherStateFragment> DitherState; // 0xF8
		::Unity::Collections::NativeArray_1<::Foundation::Container::NativeHashSetElementId> EntityMapIds; // 0x108
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment> montageData; // 0x118
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityGhostLocationFragment> ghost; // 0x128
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment> pathMaskTagRuntime; // 0x138
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> transform; // 0x148
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> splineFollow; // 0x158
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment> steering; // 0x168
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> stateTreeInstances; // 0x178
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmesh; // 0x188
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> lastFrameTransform; // 0x198
		::Unity::Collections::NativeArray_1<::System::Int32> stateTreeIndices; // 0x1A8
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x1B8
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCBaseDataFragment> baseData; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		static ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>& GetObstacleGrid()
		{
			return ((::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>&(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GETOBSTACLEGRID_OFFSET))();
		}

		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>& get_ObstacleGrid()
		{
			return ((::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_OBSTACLEGRID_OFFSET))(this);
		}

		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>& get_EntityMap()
		{
			return ((::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_ENTITYMAP_OFFSET))(this);
		}

		::System::Void Init(::NPCCrowd::Ability::NPCAbilityParameters* inParameters, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INIT_OFFSET))(this, inParameters, size);
		}

		::System::Void CreateBuffer(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_CREATEBUFFER_OFFSET))(this, size);
		}

		::NPCCrowd::Ability::NPCAbility* InitEntity(::System::UInt32 entityId, ::System::Int32 tagID, ::UnityEngine::Transform* goTransform)
		{
			return ((::NPCCrowd::Ability::NPCAbility*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INITENTITY_OFFSET))(this, entityId, tagID, goTransform);
		}

		::System::Void SwitchAndRemoveLast(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_SWITCHANDREMOVELAST_OFFSET))(this, ability);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_RELEASE_OFFSET))(this);
		}
	};
}
