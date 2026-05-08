#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xBDECB30)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xBDECDC0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0xBDECC80)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATEAVATARDITHER_OFFSET UNITYSDK_OFFSET(0xBDED5D0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xBDED210)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBDED9D0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xBDED9F0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xBDEDB10)

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int NPCPhysicsSubSystem_TypeDefinitionIndex = 80920;

	class NPCPhysicsSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::UnityEngine::Vector3* StaticGet__avatarPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem_TypeDefinitionIndex)->GetStaticField(0xE070);
		}
		// static const ::System::Single FadeInDistance; // 0x0
		// static const ::System::Single FadeOutDistance; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityAdd(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_ONENTITYADD_OFFSET))(ecsEntity);
		}

		static ::System::Void InitCollider(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_INITCOLLIDER_OFFSET))(npcComp);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void UpdateAvatarDither(::Class_3_F2DAD7F45F518868* npcComponent, ::UnityEngine::Vector3 avatarPosition)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATEAVATARDITHER_OFFSET))(npcComponent, avatarPosition);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
