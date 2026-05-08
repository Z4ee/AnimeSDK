#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/NPCAvatarSubSystem___c__DisplayClass8_0.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class Class_3_3A3A95CA33F5CFBC;
class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
class NPCAvatarRuntimeData;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xCE62650)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0xCE63040)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET UNITYSDK_OFFSET(0xCE631F0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET UNITYSDK_OFFSET(0xCE63180)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET UNITYSDK_OFFSET(0xCE64BE0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xCE625A0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0xCE62840)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xCE63AA0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xCE65080)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET UNITYSDK_OFFSET(0xCE65760)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0xCE66810)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET UNITYSDK_OFFSET(0xCE66620)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE662C0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCE66FB0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_8_0_OFFSET UNITYSDK_OFFSET(0xCE66440)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xCE66FC0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xCE66FD0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE67060)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem_TypeDefinitionIndex = 49907;

	class NPCAvatarSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::NPCIDGeneratorInt** StaticGet_IDGen()
		{
			return (::NPCCrowd::NPCIDGeneratorInt**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem_TypeDefinitionIndex)->GetStaticField(0x49710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityAdd(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET))(ecsEntity);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET))(ecsEntity);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void InitAccessoryInfo(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET))(npcComp);
		}

		static ::System::Void InitAnimation(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET))(npcComp);
		}

		static ::System::Boolean InitLookAtIK(::Class_3_3A3A95CA33F5CFBC* baseDataComp, ::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Boolean(*)(::Class_3_3A3A95CA33F5CFBC*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET))(baseDataComp, npcComp);
		}

		static ::System::Void InitAudio(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET))(npcComp);
		}

		static ::System::Void ReleaseAudio(::MoleMole::Battle::Entity* entity, ::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET))(entity, npcComp);
		}

		static ::System::Void UpdateDitherState(::NPCCrowd::Ability::NPCAbility* ability, ::NPCAvatarRuntimeData* avatarRuntimeData, ::Class_3_FFD0045B4597F294* materialComponent)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCAvatarRuntimeData*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET))(ability, avatarRuntimeData, materialComponent);
		}

		static ::System::Void UpdateAudio(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET))(npcComp);
		}

		static ::System::Boolean _InitAnimation_g__PlayAnimation_8_0(::System::Int32 animID, ::System::Int32 upperID, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass8_0& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass8_0&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_8_0_OFFSET))(animID, upperID, a3);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
