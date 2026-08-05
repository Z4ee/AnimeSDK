#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_443A885B4E84B185.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD89E270)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xD89E140)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_POPLOOKIKTYPE_OFFSET UNITYSDK_OFFSET(0xD89F040)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_PUSHLOOKIKTYPE_OFFSET UNITYSDK_OFFSET(0xD89EFC0)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATEFILTERFUNC_OFFSET UNITYSDK_OFFSET(0xD89E470)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATELOOKATIK_OFFSET UNITYSDK_OFFSET(0xD89E7E0)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xD89E380)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xD89F150)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD89F140)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD89F210)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD89F220)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD89F260)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCAnimationSubSystem_TypeDefinitionIndex = 45622;

	class NPCAnimationSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationSubSystem_TypeDefinitionIndex)->GetStaticField(0x51C30);
		}
		::NPCCrowd::CrowdTickControlInstance* UpdateControl; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void UpdateFilterFunc(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Lod::NPCAnimationSubSystem* system)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::NPCAnimationSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATEFILTERFUNC_OFFSET))(npcComp, system);
		}

		static ::System::Void UpdateLookAtIK(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATELOOKATIK_OFFSET))(npcComp);
		}

		static ::System::Void PushLookIKType(::Class_3_F2DAD7F45F518868* component, ::Enum_3_443A885B4E84B185 ikType, ::System::Int32 ikParam)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Enum_3_443A885B4E84B185, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_PUSHLOOKIKTYPE_OFFSET))(component, ikType, ikParam);
		}

		static ::System::Boolean PopLookIKType(::Class_3_F2DAD7F45F518868* component, ::Enum_3_443A885B4E84B185 ikType)
		{
			return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*, ::Enum_3_443A885B4E84B185))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_POPLOOKIKTYPE_OFFSET))(component, ikType);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
