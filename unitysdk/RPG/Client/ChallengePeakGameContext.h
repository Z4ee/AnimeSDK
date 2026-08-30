#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
#include "unitysdk/RPG/Client/ChallengePeakGamePhase.h"

class Class_0_16E4307DCC419505_725;
class Class_1_43BD383C98B4C0C5_163;
class Class_1_43BD383C98B4C0C5_164;
class Class_1_43BD383C98B4C0C5_165;
class Class_1_43BD383C98B4C0C5_166;
class Class_1_4CFEF021C34E7902;
class Class_1_93CCFC46DF4C9BD2;
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

#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD55860)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x1AD55780)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKMONSTER_OFFSET UNITYSDK_OFFSET(0x1AD55760)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x1AD55740)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1AD55800)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_IGNORERECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AD55840)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0x1AD557A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1AD55820)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RECOVER_OFFSET UNITYSDK_OFFSET(0x1AD56210)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1AD564E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AD56470)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x1AD55790)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKMONSTER_OFFSET UNITYSDK_OFFSET(0x1AD55770)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x1AD55750)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1AD55810)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_IGNORERECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AD55850)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1AD55830)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGEBOSS_OFFSET UNITYSDK_OFFSET(0x1AD55D80)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGENORMALLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD560B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CHECKENVIRONMENTHINTHASSHOWN_OFFSET UNITYSDK_OFFSET(0x1AD566A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD558E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEAUTOSHOWADVENTUREUI_OFFSET UNITYSDK_OFFSET(0x1AD568B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEMAPCREATESTARTED_OFFSET UNITYSDK_OFFSET(0x1AD567C0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__LEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AD56D20)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__MARKENVIRONMENTHINTHASSHOWN_OFFSET UNITYSDK_OFFSET(0x1AD562D0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONCHALLENGEPEAKSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x1AD56F60)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x1AD56400)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x1AD56540)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x1AD56ED0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AD56CD0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x1AD56A50)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONRESTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AD56AB0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AD56F20)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__RESTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AD56B20)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__SETLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1AD56810)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__STARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AD55EA0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__TRYRECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AD56920)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_0_OFFSET UNITYSDK_OFFSET(0x1AD57520)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_1_OFFSET UNITYSDK_OFFSET(0x1AD57530)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameContext_TypeDefinitionIndex = 63236;

	class ChallengePeakGameContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::RPG::Client::ChallengePeakBoss* _CurChallengePeakBoss_k__BackingField; // 0x20
		::Class_1_93CCFC46DF4C9BD2* _EventRegistry; // 0x28
		::RPG::Client::ChallengePeakGroup* _CurrentGroup_k__BackingField; // 0x30
		::RPG::GameCore::MazeBuffRow* _CurrentMazeBuff_k__BackingField; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasShowEnvironmentHintChallenges; // 0x40
		::Class_1_4CFEF021C34E7902* _MessageRegistry; // 0x48
		::RPG::Client::ChallengePeak* _CurChallengePeakMonster_k__BackingField; // 0x50
		::RPG::Client::ChallengePeakGamePhase _Phase_k__BackingField; // 0x58
		::System::Boolean _IgnoreRecoverEntrance_k__BackingField; // 0x5C

		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakGroup* get_CurrentGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTGROUP_OFFSET))(this);
		}

		::System::Void set_CurrentGroup(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* get_CurChallengePeakMonster()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKMONSTER_OFFSET))(this);
		}

		::System::Void set_CurChallengePeakMonster(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKMONSTER_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBoss* get_CurChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Void set_CurChallengePeakBoss(::RPG::Client::ChallengePeakBoss* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKBOSS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHardBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_ISHARDBOSS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_CurrentMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTMAZEBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentMazeBuff(::RPG::GameCore::MazeBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTMAZEBUFF_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakGamePhase get_Phase()
		{
			return ((::RPG::Client::ChallengePeakGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::ChallengePeakGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGamePhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_PHASE_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreRecoverEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_IGNORERECOVERENTRANCE_OFFSET))(this);
		}

		::System::Void set_IgnoreRecoverEntrance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_IGNORERECOVERENTRANCE_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakGameContext* Create(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_CREATE_OFFSET))(a1);
		}

		::System::Void StartChallengeBoss(::RPG::Client::ChallengePeakBoss* a1, ::RPG::GameCore::MazeBuffRow* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*, ::RPG::GameCore::MazeBuffRow*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGEBOSS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartChallengeNormalLevel(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGENORMALLEVEL_OFFSET))(this, a1);
		}

		::System::Void Recover(::Class_1_BA520BA0030C648C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA520BA0030C648C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RECOVER_OFFSET))(this, a1);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONDESTROYED_OFFSET))(this);
		}

		::System::Void RPG_Client_IGameFlowMessageReceiver_ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IGameFlowEventReceiver_ReceiveEvent(::Class_0_16E4307DCC419505_725* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_725*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::Class_1_43BD383C98B4C0C5_163* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_163*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _HandleMapCreateStarted(::Class_1_43BD383C98B4C0C5_164* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_164*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEMAPCREATESTARTED_OFFSET))(this, a1);
		}

		::System::Void _HandleAutoShowAdventureUI(::Class_1_43BD383C98B4C0C5_165* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_165*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEAUTOSHOWADVENTUREUI_OFFSET))(this, a1);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_166* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_166*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONNETWORKRECONNECTED_OFFSET))(this, a1);
		}

		::System::Void _OnRestartChallenge(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONRESTARTCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _OnLeaveChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVECHALLENGE_OFFSET))(this);
		}

		::System::Void _OnLeaveBattle(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVEBATTLE_OFFSET))(this, a1);
		}

		::System::Void _OnShowEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONSHOWENTRANCE_OFFSET))(this);
		}

		::System::Void _OnChallengePeakSettlement(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONCHALLENGEPEAKSETTLEMENT_OFFSET))(this, a1);
		}

		::System::Void _StartChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__STARTCHALLENGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RestartChallenge(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__RESTARTCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _LeaveChallenge(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__LEAVECHALLENGE_OFFSET))(this, a1);
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

		::System::Void __StartChallenge_b__46_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_1_OFFSET))(this, a1);
		}
	};
}
