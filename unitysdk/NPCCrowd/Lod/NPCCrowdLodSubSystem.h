#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodSubSystem_RendererVisibilityRange.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

class Class_3_F2DAD7F45F518868;
class NapRenderEntity;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET UNITYSDK_OFFSET(0x102C7660)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET UNITYSDK_OFFSET(0x102C86D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x102C83C0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x102C82B0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x102C5C00)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x102C80D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x102C5B80)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x102C6530)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x102C6630)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x102C5E20)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x102C6290)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x102C8020)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x102C7CD0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x102C6B10)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REALPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x102C7D80)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET UNITYSDK_OFFSET(0x102C6460)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET UNITYSDK_OFFSET(0x102C7740)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET UNITYSDK_OFFSET(0x102C7090)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0x102C6C10)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x102C6840)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x102C89F0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x102C5A20)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x102C8B30)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x102C8B40)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x102C8BD0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x102C8C60)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x102C8D00)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x102C8DA0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x102C8E40)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem_TypeDefinitionIndex = 58302;

	class NPCCrowdLodSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem** StaticGet__instance()
		{
			return (::NPCCrowd::Lod::NPCCrowdLodSubSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x33BB0);
		}
		static ::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>** StaticGet_AllTickControlInstances()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x33BB8);
		}
		static ::NPCCrowd::CrowdTickControlInstance** StaticGet_LODTickControlInstance()
		{
			return (::NPCCrowd::CrowdTickControlInstance**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x33BC0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x33BC8);
		}
		static ::System::Action_2<::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>** StaticGet__collectRendererVisibilityCallback()
		{
			return (::System::Action_2<::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x33BD0);
		}
		static ::System::Single* StaticGet_UpdateDirectionalMeshIntervalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xBF70);
		}
		static ::System::Single* StaticGet_lastUpdateDirectionalMeshTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xBF74);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdLodSubSystem_RendererVisibilityRange>* visibilityQueryRanges; // 0x28
		::Unity::Collections::NativeList_1<::System::Boolean> visibilityQueryResult; // 0x30
		::System::Boolean previousFrameVisibilityControlEnabled; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_GET_OFFSET))();
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET))(entity);
		}

		static ::System::Int32 RegisterTickControlInstance(::NPCCrowd::CrowdTickControlInstance* instance)
		{
			return ((::System::Int32(*)(::NPCCrowd::CrowdTickControlInstance*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET))(instance);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_PREUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void UpdateNPCLOD(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET))(npcComp);
		}

		::System::Void PostSimulationUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTSIMULATIONUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RealPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REALPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateRendererVisibilityBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET))(this);
		}

		::System::Void EnsureVisibilityQueryResult(::System::Int32 queryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET))(this, queryCount);
		}

		static ::System::Void CollectRendererVisibility(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Lod::NPCCrowdLodSubSystem* self)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITY_OFFSET))(npcComp, self);
		}

		static ::System::Void CollectRendererVisibilityFromRenderEntity(::NPCCrowd::Animation::NPCUnionAnimator* animator, ::NapRenderEntity* renderEntity, ::NPCCrowd::Lod::NPCCrowdLodSubSystem* self)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCUnionAnimator*, ::NapRenderEntity*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET))(animator, renderEntity, self);
		}

		static ::System::Void CollectRendererVisibilityFromLODRenderers(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::NPCUnionAnimator* animator, ::NPCCrowd::Lod::NPCCrowdLodSubSystem* self)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::NPCUnionAnimator*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET))(npcComp, animator, self);
		}

		static ::System::Void SetNPCLOD(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Lod::ELODLevel oldLOD, ::NPCCrowd::Lod::ELODLevel newLOD, ::System::Boolean forceNoFade)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET))(npcComp, oldLOD, newLOD, forceNoFade);
		}

		static ::System::Void CheckLOD(::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean forceNoFade)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET))(npcComp, forceNoFade);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PostSimulationUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTSIMULATIONUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
