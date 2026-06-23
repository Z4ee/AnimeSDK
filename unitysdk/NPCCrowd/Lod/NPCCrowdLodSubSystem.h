#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodSubSystem_RendererVisibilityRange.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET UNITYSDK_OFFSET(0x10D91570)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x10D92530)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10D8FC40)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x10D92360)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x10D90570)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D90670)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x10D8FE60)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x10D902D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10D92070)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10D90A70)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET UNITYSDK_OFFSET(0x10D904A0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET UNITYSDK_OFFSET(0x10D91650)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET UNITYSDK_OFFSET(0x10D90FA0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0x10D90B00)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D907A0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D92990)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D92860)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10D92AE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x10D92AF0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D92B80)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10D92C10)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10D92CB0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D92D50)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem_TypeDefinitionIndex = 61127;

	class NPCCrowdLodSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>** StaticGet_AllTickControlInstances()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x31A30);
		}
		static ::NPCCrowd::CrowdTickControlInstance** StaticGet_LODTickControlInstance()
		{
			return (::NPCCrowd::CrowdTickControlInstance**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x31A38);
		}
		static ::System::Action_2<::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>** StaticGet__collectRendererVisibilityCallback()
		{
			return (::System::Action_2<::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x31A40);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x31A48);
		}
		static ::System::String** StaticGet_LOD0TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x31A50);
		}
		static ::System::Single* StaticGet_lastUpdateDirectionalMeshTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xBD70);
		}
		static ::System::Single* StaticGet_UpdateDirectionalMeshIntervalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xBD74);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdLodSubSystem_RendererVisibilityRange>* visibilityQueryRanges; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x28
		::System::Boolean previousFrameVisibilityControlEnabled; // 0x30
		::Unity::Collections::NativeList_1<::System::Boolean> visibilityQueryResult; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET))();
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

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET))(this, deltaTime);
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
