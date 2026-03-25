#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleResultProcess_RestartOption.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleResultProcess_ConfigItem; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_BATTLERESULTPROCESS_CLIENTPRERESULTPROCESS_OFFSET UNITYSDK_OFFSET(0x91CD620)
#define RPG_CLIENT_BATTLERESULTPROCESS_GET_BATTLERESTARTOPTION_OFFSET UNITYSDK_OFFSET(0x91A6930)
#define RPG_CLIENT_BATTLERESULTPROCESS_HAVERESULTPAGEINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x919CC80)
#define RPG_CLIENT_BATTLERESULTPROCESS_STARTRESULTPROCESS_OFFSET UNITYSDK_OFFSET(0x91CD670)
#define RPG_CLIENT_BATTLERESULTPROCESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x91CEFF0)
#define RPG_CLIENT_BATTLERESULTPROCESS__GETCURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0x91CEB90)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x91CD830)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x91CD8E0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x91CD6C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINFARMWEEKLY_OFFSET UNITYSDK_OFFSET(0x91CDD70)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x91CD940)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x91CD980)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINROUGETOURNBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x91CDCE0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISNOTFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x91CD720)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISSTORYCHALLENGE_OFFSET UNITYSDK_OFFSET(0x91CD780)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAIDFORBIDEDITTEAM_OFFSET UNITYSDK_OFFSET(0x91CDAF0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAID_OFFSET UNITYSDK_OFFSET(0x91CDA10)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x91CDC50)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_AETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x91CE3E0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_BATTLECOLLEGE_OFFSET UNITYSDK_OFFSET(0x91CE500)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_DEFAULT_OFFSET UNITYSDK_OFFSET(0x91CDED0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ELATIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CEA80)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_EVOLVEBUILDACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE860)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FANTASTICSTORY_OFFSET UNITYSDK_OFFSET(0x91CE470)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_OFFSET UNITYSDK_OFFSET(0x91CE2C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_WEEKLY_OFFSET UNITYSDK_OFFSET(0x91CE170)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FATEACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE970)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FEVERTIMEACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE620)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE350)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x91CE7D0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_GRIDFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CEA00)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_LOCALLEGEND_OFFSET UNITYSDK_OFFSET(0x91CEB00)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_POST_OFFSET UNITYSDK_OFFSET(0x91CDE70)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_PRE_OFFSET UNITYSDK_OFFSET(0x91CDE10)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUECHALLENGEACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CDFA0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUEENDLESSACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE020)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUERELIC_OFFSET UNITYSDK_OFFSET(0x91CE0F0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUETOURNBOSS_OFFSET UNITYSDK_OFFSET(0x91CE0A0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_STARFIGHT_OFFSET UNITYSDK_OFFSET(0x91CE740)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_SUMMONACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE8F0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_SWORDTRAININGACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE6B0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_TELEVISIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x91CE590)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_VERSESIMULATION_OFFSET UNITYSDK_OFFSET(0x91CDF20)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess_TypeDefinitionIndex = 49459;

	class BattleResultProcess : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::BattleResultProcess_ConfigItem*>** StaticGet__AllConfigs()
		{
			return (::Il2CppArray<::RPG::Client::BattleResultProcess_ConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(BattleResultProcess_TypeDefinitionIndex)->GetStaticField(0x40EB0);
		}
		static ::RPG::Client::BattleResultProcess_ConfigItem** StaticGet__DefaultConfig()
		{
			return (::RPG::Client::BattleResultProcess_ConfigItem**)Il2CppClass::FromTypeDefinitionIndex(BattleResultProcess_TypeDefinitionIndex)->GetStaticField(0x40EB8);
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
