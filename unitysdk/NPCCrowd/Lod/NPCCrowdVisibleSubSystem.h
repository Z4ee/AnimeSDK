#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdVisibleSubSystem_RendererVisibilityRange.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

class Class_3_F2DAD7F45F518868;
class NapRenderEntity;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ADDPENDINGRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xF886530)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_APPLYRENDERERVISIBILITYRESULT_OFFSET UNITYSDK_OFFSET(0xF885DB0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET UNITYSDK_OFFSET(0xF8866C0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET UNITYSDK_OFFSET(0xF886D80)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF884870)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET UNITYSDK_OFFSET(0xF885BD0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETLASTVISIBILITYRANGEINDEXBYCOUNT_OFFSET UNITYSDK_OFFSET(0xF887140)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETVISIBILITYENTITYID_OFFSET UNITYSDK_OFFSET(0xF886340)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0xF884820)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYDATARANGE_OFFSET UNITYSDK_OFFSET(0xF8879E0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYRANGEINDEX_OFFSET UNITYSDK_OFFSET(0xF886FA0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYADD_OFFSET UNITYSDK_OFFSET(0xF884D20)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYREMOVE_OFFSET UNITYSDK_OFFSET(0xF885030)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF885190)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xF884A90)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xF884EB0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREPARERENDERERVISIBILITYQUERY_OFFSET UNITYSDK_OFFSET(0xF885A00)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF885380)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PROCESSPENDINGRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xF885F30)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REBUILDVISIBILITYINDICES_OFFSET UNITYSDK_OFFSET(0xF887020)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEPENDINGRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xF885610)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYDATARANGE_OFFSET UNITYSDK_OFFSET(0xF887820)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGEANDSHIFTFOLLOWING_OFFSET UNITYSDK_OFFSET(0xF887420)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGE_OFFSET UNITYSDK_OFFSET(0xF885670)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEVISIBILITYRANGEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xF887710)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SAMECOUNTSWAP_OFFSET UNITYSDK_OFFSET(0xF8871D0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SHIFTVISIBILITYRANGESTARTINDEXAFTERDATAREMOVE_OFFSET UNITYSDK_OFFSET(0xF8878F0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SWAPRENDERERVISIBILITYDATARANGE_OFFSET UNITYSDK_OFFSET(0xF8874C0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_TRYADDRENDERERVISIBILITYRANGE_OFFSET UNITYSDK_OFFSET(0xF886390)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0xF885970)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF884610)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF887A50)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF887A60)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF887AF0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdVisibleSubSystem_TypeDefinitionIndex = 47199;

	class NPCCrowdVisibleSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::Lod::NPCCrowdVisibleSubSystem** StaticGet__instance()
		{
			return (::NPCCrowd::Lod::NPCCrowdVisibleSubSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVisibleSubSystem_TypeDefinitionIndex)->GetStaticField(0x41050);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdVisibleSubSystem_RendererVisibilityRange>* visibilityQueryRanges; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* tmpSet; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* delayRemovedEntityIDs; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_F2DAD7F45F518868*>* pendingVisibilityCollectIndexByEntityId; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* visibilityRangeIndexByEntityId; // 0x48
		::System::Boolean previousFrameVisibilityControlEnabled; // 0x50
		::Unity::Collections::NativeList_1<::System::Boolean> visibilityQueryResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Lod::NPCCrowdVisibleSubSystem* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdVisibleSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GET_OFFSET))();
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREMOVE_OFFSET))(entity);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateRendererVisibilityBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET))(this);
		}

		::System::Boolean PrepareRendererVisibilityQuery(::System::Int32& queryCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREPARERENDERERVISIBILITYQUERY_OFFSET))(this, queryCount);
		}

		::System::Void ApplyRendererVisibilityResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_APPLYRENDERERVISIBILITYRESULT_OFFSET))(this);
		}

		::System::Void OnCrowdEntityVisibilityAdd(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYADD_OFFSET))(this, npcComp);
		}

		::System::Void OnCrowdEntityVisibilityRemove(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYREMOVE_OFFSET))(this, npcComp);
		}

		::System::Void ProcessPendingRendererVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PROCESSPENDINGRENDERERVISIBILITY_OFFSET))(this);
		}

		::System::Boolean TryAddRendererVisibilityRange(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_TRYADDRENDERERVISIBILITYRANGE_OFFSET))(this, npcComp);
		}

		::System::Void CollectRendererVisibilityFromRenderEntity(::NapRenderEntity* renderEntity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET))(this, renderEntity);
		}

		::System::Void CollectRendererVisibilityFromLODRenderers(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET))(this, npcComp);
		}

		::System::Void RemoveRendererVisibilityRange(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGE_OFFSET))(this, entityId);
		}

		::System::Void SameCountSwap(::System::Int32 rangeIndex, ::System::Int32 sameCountLastRangeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SAMECOUNTSWAP_OFFSET))(this, rangeIndex, sameCountLastRangeIndex);
		}

		::System::Void RemoveRendererVisibilityRangeAndShiftFollowing(::System::Int32 rangeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGEANDSHIFTFOLLOWING_OFFSET))(this, rangeIndex);
		}

		::System::Boolean SwapRendererVisibilityDataRange(::System::Int32 firstStartIndex, ::System::Int32 secondStartIndex, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SWAPRENDERERVISIBILITYDATARANGE_OFFSET))(this, firstStartIndex, secondStartIndex, count);
		}

		::System::Void RemoveVisibilityRangeAtSwapBack(::System::Int32 rangeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEVISIBILITYRANGEATSWAPBACK_OFFSET))(this, rangeIndex);
		}

		::System::Void RemoveRendererVisibilityDataRange(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYDATARANGE_OFFSET))(this, startIndex, count);
		}

		::System::Void ShiftVisibilityRangeStartIndexAfterDataRemove(::System::Int32 removedStartIndex, ::System::Int32 removedCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SHIFTVISIBILITYRANGESTARTINDEXAFTERDATAREMOVE_OFFSET))(this, removedStartIndex, removedCount);
		}

		::System::Int32 GetLastVisibilityRangeIndexByCount(::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETLASTVISIBILITYRANGEINDEXBYCOUNT_OFFSET))(this, count);
		}

		::System::Boolean IsValidVisibilityRangeIndex(::System::UInt32 entityId, ::System::Int32 rangeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYRANGEINDEX_OFFSET))(this, entityId, rangeIndex);
		}

		::System::Void RebuildVisibilityIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REBUILDVISIBILITYINDICES_OFFSET))(this);
		}

		::System::Boolean IsValidVisibilityDataRange(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYDATARANGE_OFFSET))(this, startIndex, count);
		}

		::System::Void AddPendingRendererVisibility(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ADDPENDINGRENDERERVISIBILITY_OFFSET))(this, npcComp);
		}

		::System::Void RemovePendingRendererVisibility(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEPENDINGRENDERERVISIBILITY_OFFSET))(this, entityId);
		}

		static ::System::UInt32 GetVisibilityEntityId(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::UInt32(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETVISIBILITYENTITYID_OFFSET))(npcComp);
		}

		::System::Void EnsureVisibilityQueryResult(::System::Int32 queryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET))(this, queryCount);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_PREUPDATE_OFFSET))(this, P0);
		}
	};
}
