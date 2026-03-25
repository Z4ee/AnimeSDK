#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
#include "unitysdk/RPG/Client/ChallengePeakGamePhase.h"

class Class_0_16E4307DCC419505_539;
class Class_1_3B36CE63D36E9917;
class Class_1_43BD383C98B4C0C5_127;
class Class_1_43BD383C98B4C0C5_128;
class Class_1_43BD383C98B4C0C5_129;
class Class_1_43BD383C98B4C0C5_130;
class Class_1_4B24D105CCEA2C22;
class Class_1_BA520BA0030C648C;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x92E0F70)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x92E0E90)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKMONSTER_OFFSET UNITYSDK_OFFSET(0x92E0E70)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x92E0E50)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x92E0F10)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_IGNORERECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0x92E0F50)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0x92E0EB0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x92E0F30)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RECOVER_OFFSET UNITYSDK_OFFSET(0x92E17E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x92E1A20)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x92E19B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x92E0EA0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKMONSTER_OFFSET UNITYSDK_OFFSET(0x92E0E80)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x92E0E60)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x92E0F20)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_IGNORERECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0x92E0F60)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x92E0F40)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGEBOSS_OFFSET UNITYSDK_OFFSET(0x92E1410)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGENORMALLEVEL_OFFSET UNITYSDK_OFFSET(0x92E16D0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CHECKENVIRONMENTHINTHASSHOWN_OFFSET UNITYSDK_OFFSET(0x92E1BE0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x92E0FF0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEAUTOSHOWADVENTUREUI_OFFSET UNITYSDK_OFFSET(0x92E1D70)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEMAPCREATESTARTED_OFFSET UNITYSDK_OFFSET(0x92E1C80)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__LEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92E2210)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__MARKENVIRONMENTHINTHASSHOWN_OFFSET UNITYSDK_OFFSET(0x92E18A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONCHALLENGEPEAKSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x92E2430)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x92E1940)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x92E1A80)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x92E23A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92E21C0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x92E1F60)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONRESTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92E1FC0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x92E23F0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__RESTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92E2030)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__SETLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x92E1CD0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__STARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92E14F0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__TRYRECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0x92E1DE0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x92E2A60)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_0_OFFSET UNITYSDK_OFFSET(0x92E29E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_1_OFFSET UNITYSDK_OFFSET(0x92E29F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameContext_TypeDefinitionIndex = 51259;

	class ChallengePeakGameContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::RPG::Client::ChallengePeakGroup* _CurrentGroup_k__BackingField; // 0x20
		::RPG::Client::ChallengePeak* _CurChallengePeakMonster_k__BackingField; // 0x28
		::Class_1_3B36CE63D36E9917* _EventRegistry; // 0x30
		::Class_1_4B24D105CCEA2C22* _MessageRegistry; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasShowEnvironmentHintChallenges; // 0x40
		::RPG::GameCore::MazeBuffRow* _CurrentMazeBuff_k__BackingField; // 0x48
		::RPG::Client::ChallengePeakBoss* _CurChallengePeakBoss_k__BackingField; // 0x50
		::System::Boolean _IgnoreRecoverEntrance_k__BackingField; // 0x58
		::RPG::Client::ChallengePeakGamePhase _Phase_k__BackingField; // 0x5C

		::System::Void _ctor(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CTOR_OFFSET))(this, gameFlow);
		}

		::RPG::Client::ChallengePeakGroup* get_CurrentGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTGROUP_OFFSET))(this);
		}

		::System::Void set_CurrentGroup(::RPG::Client::ChallengePeakGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTGROUP_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeak* get_CurChallengePeakMonster()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKMONSTER_OFFSET))(this);
		}

		::System::Void set_CurChallengePeakMonster(::RPG::Client::ChallengePeak* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKMONSTER_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakBoss* get_CurChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Void set_CurChallengePeakBoss(::RPG::Client::ChallengePeakBoss* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKBOSS_OFFSET))(this, value);
		}

		::System::Boolean get_IsHardBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_ISHARDBOSS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_CurrentMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTMAZEBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentMazeBuff(::RPG::GameCore::MazeBuffRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTMAZEBUFF_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakGamePhase get_Phase()
		{
			return ((::RPG::Client::ChallengePeakGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::ChallengePeakGamePhase value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGamePhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_PHASE_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreRecoverEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_IGNORERECOVERENTRANCE_OFFSET))(this);
		}

		::System::Void set_IgnoreRecoverEntrance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_IGNORERECOVERENTRANCE_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakGameContext* Create(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_CREATE_OFFSET))(gameFlow);
		}

		::System::Void StartChallengeBoss(::RPG::Client::ChallengePeakBoss* boss, ::RPG::GameCore::MazeBuffRow* mazeBuff, ::System::Collections::Generic::List_1<::System::UInt32>* lineupAvatarList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*, ::RPG::GameCore::MazeBuffRow*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGEBOSS_OFFSET))(this, boss, mazeBuff, lineupAvatarList);
		}

		::System::Void StartChallengeNormalLevel(::RPG::Client::ChallengePeak* peak)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGENORMALLEVEL_OFFSET))(this, peak);
		}

		::System::Void Recover(::Class_1_BA520BA0030C648C* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA520BA0030C648C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RECOVER_OFFSET))(this, snapshot);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONDESTROYED_OFFSET))(this);
		}

		::System::Void RPG_Client_IGameFlowMessageReceiver_ReceiveMessage(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET))(this, message, obj);
		}

		::System::Void RPG_Client_IGameFlowEventReceiver_ReceiveEvent(::Class_0_16E4307DCC419505_539* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnHideLoadingPage(::Class_1_43BD383C98B4C0C5_127* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_127*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONHIDELOADINGPAGE_OFFSET))(this, evt);
		}

		::System::Void _HandleMapCreateStarted(::Class_1_43BD383C98B4C0C5_128* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_128*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEMAPCREATESTARTED_OFFSET))(this, evt);
		}

		::System::Void _HandleAutoShowAdventureUI(::Class_1_43BD383C98B4C0C5_129* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_129*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEAUTOSHOWADVENTUREUI_OFFSET))(this, evt);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_130* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_130*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONNETWORKRECONNECTED_OFFSET))(this, evt);
		}

		::System::Void _OnRestartChallenge(::System::Action* afterRestartAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONRESTARTCHALLENGE_OFFSET))(this, afterRestartAction);
		}

		::System::Void _OnLeaveChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVECHALLENGE_OFFSET))(this);
		}

		::System::Void _OnLeaveBattle(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVEBATTLE_OFFSET))(this, action);
		}

		::System::Void _OnShowEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONSHOWENTRANCE_OFFSET))(this);
		}

		::System::Void _OnChallengePeakSettlement(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONCHALLENGEPEAKSETTLEMENT_OFFSET))(this, obj);
		}

		::System::Void _StartChallenge(::System::UInt32 peakID, ::System::UInt32 bossBuffID, ::System::Collections::Generic::List_1<::System::UInt32>* lineupAvatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__STARTCHALLENGE_OFFSET))(this, peakID, bossBuffID, lineupAvatarList);
		}

		::System::Void _RestartChallenge(::System::Action* afterRestartAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__RESTARTCHALLENGE_OFFSET))(this, afterRestartAction);
		}

		::System::Void _LeaveChallenge(::System::Action* afterLeaveAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__LEAVECHALLENGE_OFFSET))(this, afterLeaveAction);
		}

		::System::Boolean _CheckEnvironmentHintHasShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CHECKENVIRONMENTHINTHASSHOWN_OFFSET))(this);
		}

		::System::Void _MarkEnvironmentHintHasShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__MARKENVIRONMENTHINTHASSHOWN_OFFSET))(this);
		}

		::System::Boolean _TryRecoverEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__TRYRECOVERENTRANCE_OFFSET))(this);
		}

		::System::Void _SetLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__SETLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void __StartChallenge_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_0_OFFSET))(this);
		}

		::System::Void __StartChallenge_b__46_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_1_OFFSET))(this, ex);
		}

		::System::Void __iFixBaseProxy__OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
		}
	};
}
