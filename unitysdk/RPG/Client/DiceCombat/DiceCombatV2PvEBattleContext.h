#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleContext.h"

class Class_1_877AA22B04AFB81F_1;
class Class_1_9BBB3EBE2028834A_1;
class Class_1_B1B8D38711757224;
class Class_3_57ACCC113D2215C7;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x1A442F70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1A443120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_EXITBATTLE_OFFSET UNITYSDK_OFFSET(0x1A4434A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A443080)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A443370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEPLAYER_OFFSET UNITYSDK_OFFSET(0x19FE27D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATESTARTINFO_OFFSET UNITYSDK_OFFSET(0x1A443650)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATETEAMMATE_OFFSET UNITYSDK_OFFSET(0x19FE2DA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__ONFINISHPVEBATTLE_OFFSET UNITYSDK_OFFSET(0x1A443530)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__SHOULDDISABLETACTICSSYSTEM_OFFSET UNITYSDK_OFFSET(0x1A443710)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvEBattleContext_TypeDefinitionIndex = 72255;

	class DiceCombatV2PvEBattleContext : public ::RPG::Client::DiceCombat::DiceCombatV2BattleContext
	{
	public:
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvEBattleContext* Create(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEBattleContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* EnterBattle(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_ENTERBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Void ExitBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_EXITBATTLE_OFFSET))(this);
		}

		::System::Void _OnFinishPvEBattle(::Class_1_9BBB3EBE2028834A_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BBB3EBE2028834A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__ONFINISHPVEBATTLE_OFFSET))(this, a1);
		}

		::Class_3_57ACCC113D2215C7* _GenerateBattleInitParams(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::Class_3_57ACCC113D2215C7*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEBATTLEINITPARAMS_OFFSET))(this, a1, a2);
		}

		::Class_1_877AA22B04AFB81F_1* _GenerateStartInfo(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::Class_1_877AA22B04AFB81F_1*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATESTARTINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldDisableTacticsSystem(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__SHOULDDISABLETACTICSSYSTEM_OFFSET))(this, a1);
		}

		::Class_1_B1B8D38711757224* _GeneratePlayer(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::Class_1_B1B8D38711757224*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEPLAYER_OFFSET))(this, a1);
		}

		::Class_1_B1B8D38711757224* _GenerateTeammate(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1)
		{
			return ((::Class_1_B1B8D38711757224*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATETEAMMATE_OFFSET))(this, a1);
		}
	};
}
