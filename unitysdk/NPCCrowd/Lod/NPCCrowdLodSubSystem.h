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
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET UNITYSDK_OFFSET(0x112C68D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x112C60B0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF403E90)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x112C5EE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xF4046F0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF4047F0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xF4040B0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xF404460)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF4056F0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF404BF0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET UNITYSDK_OFFSET(0xF404620)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET UNITYSDK_OFFSET(0x112C63F0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET UNITYSDK_OFFSET(0xF405130)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0xF404C80)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xF404920)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x112C6AE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x112C69B0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x112C6C20)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x112C6C30)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x112C6CC0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112C6D50)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x112C6DF0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x112C6E90)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem_TypeDefinitionIndex = 70395;

	class NPCCrowdLodSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Action_2<::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>** StaticGet__collectRendererVisibilityCallback()
		{
			return (::System::Action_2<::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2F790);
		}
		static ::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>** StaticGet_AllTickControlInstances()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2F798);
		}
		static ::NPCCrowd::CrowdTickControlInstance** StaticGet_LODTickControlInstance()
		{
			return (::NPCCrowd::CrowdTickControlInstance**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2F7A0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2F7A8);
		}
		static ::System::Single* StaticGet_lastUpdateDirectionalMeshTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xB790);
		}
		static ::System::Single* StaticGet_UpdateDirectionalMeshIntervalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xB794);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdLodSubSystem_RendererVisibilityRange>* visibilityQueryRanges; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x28
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
