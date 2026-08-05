#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD89CB90)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD89CE40)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0xD89CCE0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATEAVATARDITHERCALLBACK_OFFSET UNITYSDK_OFFSET(0xD89D4B0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATEAVATARDITHER_OFFSET UNITYSDK_OFFSET(0xD89D5E0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xD89D290)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xD89DB10)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD89DAF0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD89DB70)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD89DC90)

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int NPCPhysicsSubSystem_TypeDefinitionIndex = 77137;

	class NPCPhysicsSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet_s_updateAvatarDitherCallback()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem_TypeDefinitionIndex)->GetStaticField(0x51C20);
		}
		static ::UnityEngine::Vector3* StaticGet__localAvatarPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem_TypeDefinitionIndex)->GetStaticField(0x12EB0);
		}
		static ::UnityEngine::Vector3* StaticGet__avatarPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem_TypeDefinitionIndex)->GetStaticField(0x12EBC);
		}
		static ::System::Boolean* StaticGet__hasLocalAvatarPosition()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem_TypeDefinitionIndex)->GetStaticField(0x12EC8);
		}
		// static const ::System::Single FadeInDistance; // 0x0
		// static const ::System::Single FadeOutDistance; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM__CCTOR_OFFSET))();
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

		static ::System::Void UpdateAvatarDitherCallback(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATEAVATARDITHERCALLBACK_OFFSET))(npcComponent);
		}

		static ::System::Void UpdateAvatarDither(::Class_3_F2DAD7F45F518868* npcComponent, ::UnityEngine::Vector3 mainControlPosition, ::System::Boolean hasLocalAvatarPosition, ::UnityEngine::Vector3 localAvatarPosition)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM_UPDATEAVATARDITHER_OFFSET))(npcComponent, mainControlPosition, hasLocalAvatarPosition, localAvatarPosition);
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
