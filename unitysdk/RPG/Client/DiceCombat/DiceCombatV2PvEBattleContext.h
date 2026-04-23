#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleContext.h"

class Class_1_11A36D831F393097_2;
class Class_1_877AA22B04AFB81F_1;
class Class_1_D4C1FF8F0F0862AF;
class Class_3_57ACCC113D2215C7;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xA154930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA154AC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_EXITBATTLE_OFFSET UNITYSDK_OFFSET(0xA154D00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA154A30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xA155470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEPLAYER_OFFSET UNITYSDK_OFFSET(0xA155660)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATESTARTINFO_OFFSET UNITYSDK_OFFSET(0xA1555A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATETEAMMATE_OFFSET UNITYSDK_OFFSET(0xA155A60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__ONFINISHPVEBATTLE_OFFSET UNITYSDK_OFFSET(0xA154D90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__SHOULDDISABLETACTICSSYSTEM_OFFSET UNITYSDK_OFFSET(0xA155CF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT___IFIXBASEPROXY_EXITBATTLE_OFFSET UNITYSDK_OFFSET(0xA156000)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvEBattleContext_TypeDefinitionIndex = 69930;

	class DiceCombatV2PvEBattleContext : public ::RPG::Client::DiceCombat::DiceCombatV2BattleContext
	{
	public:
		::System::Void _ctor(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__CTOR_OFFSET))(this, gameFlow);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvEBattleContext* Create(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEBattleContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CREATE_OFFSET))(gameFlow);
		}

		::RPG::Client::Promises::IPromise* EnterBattle(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* stage, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* playerAvatar)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_ENTERBATTLE_OFFSET))(this, stage, playerAvatar);
		}

		::System::Void ExitBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_EXITBATTLE_OFFSET))(this);
		}

		::System::Void _OnFinishPvEBattle(::Class_1_11A36D831F393097_2* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11A36D831F393097_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__ONFINISHPVEBATTLE_OFFSET))(this, rsp);
		}

		::Class_3_57ACCC113D2215C7* _GenerateBattleInitParams(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* stage, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* playerAvatar)
		{
			return ((::Class_3_57ACCC113D2215C7*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEBATTLEINITPARAMS_OFFSET))(this, stage, playerAvatar);
		}

		::Class_1_877AA22B04AFB81F_1* _GenerateStartInfo(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* stage, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* playerAvatar)
		{
			return ((::Class_1_877AA22B04AFB81F_1*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATESTARTINFO_OFFSET))(this, stage, playerAvatar);
		}

		::System::Boolean _ShouldDisableTacticsSystem(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* stage)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__SHOULDDISABLETACTICSSYSTEM_OFFSET))(this, stage);
		}

		::Class_1_D4C1FF8F0F0862AF* _GeneratePlayer(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* playerAvatar)
		{
			return ((::Class_1_D4C1FF8F0F0862AF*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEPLAYER_OFFSET))(this, playerAvatar);
		}

		::Class_1_D4C1FF8F0F0862AF* _GenerateTeammate(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* stage)
		{
			return ((::Class_1_D4C1FF8F0F0862AF*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATETEAMMATE_OFFSET))(this, stage);
		}

		::System::Void __iFixBaseProxy_ExitBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT___IFIXBASEPROXY_EXITBATTLE_OFFSET))(this);
		}
	};
}
