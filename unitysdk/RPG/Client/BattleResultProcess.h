#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleResultProcess_RestartOption.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleResultProcess_ConfigItem; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_BATTLERESULTPROCESS_CLIENTPRERESULTPROCESS_OFFSET UNITYSDK_OFFSET(0x9E75A30)
#define RPG_CLIENT_BATTLERESULTPROCESS_GET_BATTLERESTARTOPTION_OFFSET UNITYSDK_OFFSET(0x9E66650)
#define RPG_CLIENT_BATTLERESULTPROCESS_HAVERESULTPAGEINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x9E754B0)
#define RPG_CLIENT_BATTLERESULTPROCESS_STARTRESULTPROCESS_OFFSET UNITYSDK_OFFSET(0x9E75A90)
#define RPG_CLIENT_BATTLERESULTPROCESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E76F90)
#define RPG_CLIENT_BATTLERESULTPROCESS__GETCURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0x9E755C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9E75C60)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x9E75D10)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9E75AF0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINFARMWEEKLY_OFFSET UNITYSDK_OFFSET(0x9E761B0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x9E75D70)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x9E75DB0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINROUGETOURNBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9E76120)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISNOTFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9E75B50)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISSTORYCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9E75BB0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAIDFORBIDEDITTEAM_OFFSET UNITYSDK_OFFSET(0x9E75F20)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAID_OFFSET UNITYSDK_OFFSET(0x9E75E40)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x9E76090)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_AETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x9E767E0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_BATTLECOLLEGE_OFFSET UNITYSDK_OFFSET(0x9E76900)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_DEFAULT_OFFSET UNITYSDK_OFFSET(0x9E76330)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ELATIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76E80)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_EVOLVEBUILDACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76C60)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FANTASTICSTORY_OFFSET UNITYSDK_OFFSET(0x9E76870)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_OFFSET UNITYSDK_OFFSET(0x9E766C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_WEEKLY_OFFSET UNITYSDK_OFFSET(0x9E76630)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FATEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76D70)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FEVERTIMEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76A20)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76750)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9E76BD0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_GRIDFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76E00)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_LOCALLEGEND_OFFSET UNITYSDK_OFFSET(0x9E76F00)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_POST_OFFSET UNITYSDK_OFFSET(0x9E762C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_PRE_OFFSET UNITYSDK_OFFSET(0x9E76250)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUECHALLENGEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76420)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUEENDLESSACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E764B0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUERELIC_OFFSET UNITYSDK_OFFSET(0x9E765A0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUETOURNBOSS_OFFSET UNITYSDK_OFFSET(0x9E76540)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_STARFIGHT_OFFSET UNITYSDK_OFFSET(0x9E76B40)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_SUMMONACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76CF0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_SWORDTRAININGACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76AB0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_TELEVISIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x9E76990)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_VERSESIMULATION_OFFSET UNITYSDK_OFFSET(0x9E76390)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess_TypeDefinitionIndex = 56256;

	class BattleResultProcess : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::BattleResultProcess_ConfigItem*>** StaticGet__AllConfigs()
		{
			return (::Il2CppArray<::RPG::Client::BattleResultProcess_ConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(BattleResultProcess_TypeDefinitionIndex)->GetStaticField(0x40170);
		}
		static ::RPG::Client::BattleResultProcess_ConfigItem** StaticGet__DefaultConfig()
		{
			return (::RPG::Client::BattleResultProcess_ConfigItem**)Il2CppClass::FromTypeDefinitionIndex(BattleResultProcess_TypeDefinitionIndex)->GetStaticField(0x40178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CCTOR_OFFSET))();
		}

		static ::System::Boolean HaveResultPageInBattlePhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_HAVERESULTPAGEINBATTLEPHASE_OFFSET))();
		}

		static ::RPG::Client::BattleResultProcess_RestartOption get_BattleRestartOption()
		{
			return ((::RPG::Client::BattleResultProcess_RestartOption(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_GET_BATTLERESTARTOPTION_OFFSET))();
		}

		static ::System::Collections::IEnumerator* ClientPreResultProcess(::System::Boolean bWin)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_CLIENTPRERESULTPROCESS_OFFSET))(bWin);
		}

		static ::System::Collections::IEnumerator* StartResultProcess(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_STARTRESULTPROCESS_OFFSET))(state);
		}

		static ::System::Boolean _IsFightFestChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISFIGHTFESTCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsNotFightFestChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISNOTFIGHTFESTCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsStoryChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISSTORYCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsBossChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISBOSSCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsChallengePeak()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISCHALLENGEPEAK_OFFSET))();
		}

		static ::System::Boolean _IsInFightActivityEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean _IsInRogueEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINROGUEENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean _IsTriggerBattleInRaid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAID_OFFSET))();
		}

		static ::System::Boolean _IsTriggerBattleInRaidForbidEditTeam()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAIDFORBIDEDITTEAM_OFFSET))();
		}

		static ::System::Boolean _IsTriggerBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLE_OFFSET))();
		}

		static ::System::Boolean _IsInRougeTournBossChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINROUGETOURNBOSSCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsInFarmWeekly()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINFARMWEEKLY_OFFSET))();
		}

		static ::System::Collections::IEnumerator* _RP_Pre(::RPG::GameCore::BattleResultState state, ::RPG::Client::BattleResultProcess_ConfigItem* config)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState, ::RPG::Client::BattleResultProcess_ConfigItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_PRE_OFFSET))(state, config);
		}

		static ::System::Collections::IEnumerator* _RP_Post(::RPG::GameCore::BattleResultState state, ::RPG::Client::BattleResultProcess_ConfigItem* config)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState, ::RPG::Client::BattleResultProcess_ConfigItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_POST_OFFSET))(state, config);
		}

		static ::System::Collections::IEnumerator* _RP_Default(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_DEFAULT_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_VerseSimulation(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_VERSESIMULATION_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_RogueChallengeActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUECHALLENGEACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_RogueEndlessActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUEENDLESSACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_RogueTournBoss(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUETOURNBOSS_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_RogueRelic(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUERELIC_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_Farm_Weekly(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_WEEKLY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_Farm(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_FightActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_AetherDivide(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_AETHERDIVIDE_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_FantasticStory(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FANTASTICSTORY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_BattleCollege(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_BATTLECOLLEGE_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_TelevisionActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_TELEVISIONACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_FeverTimeActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FEVERTIMEACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_SwordTrainingActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_SWORDTRAININGACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_StarFight(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_STARFIGHT_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_FightFestChallenge(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTFESTCHALLENGE_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_EvolveBuildActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_EVOLVEBUILDACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_SummonActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_SUMMONACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_FateActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FATEACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_GridFightActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_GRIDFIGHTACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_ElationActivity(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ELATIONACTIVITY_OFFSET))(state);
		}

		static ::System::Collections::IEnumerator* _RP_LocalLegend(::RPG::GameCore::BattleResultState state)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_LOCALLEGEND_OFFSET))(state);
		}

		static ::RPG::Client::BattleResultProcess_ConfigItem* _GetCurrentConfig()
		{
			return ((::RPG::Client::BattleResultProcess_ConfigItem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__GETCURRENTCONFIG_OFFSET))();
		}
	};
}
