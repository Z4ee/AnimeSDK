#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
#include "unitysdk/RPG/Client/ChallengePeakGamePhase.h"

class Class_0_16E4307DCC419505_651;
class Class_1_43BD383C98B4C0C5_144;
class Class_1_43BD383C98B4C0C5_145;
class Class_1_43BD383C98B4C0C5_146;
class Class_1_43BD383C98B4C0C5_147;
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

#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xB5638F0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xB563810)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURCHALLENGEPEAKMONSTER_OFFSET UNITYSDK_OFFSET(0xB5637F0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0xB5637D0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_CURRENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xB563890)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_IGNORERECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0xB5638D0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0xB563830)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xB5638B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RECOVER_OFFSET UNITYSDK_OFFSET(0xB564210)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0xB564450)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB5643E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xB563820)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURCHALLENGEPEAKMONSTER_OFFSET UNITYSDK_OFFSET(0xB563800)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0xB5637E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_CURRENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xB5638A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_IGNORERECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0xB5638E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xB5638C0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGEBOSS_OFFSET UNITYSDK_OFFSET(0xB563E10)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_STARTCHALLENGENORMALLEVEL_OFFSET UNITYSDK_OFFSET(0xB564100)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CHECKENVIRONMENTHINTHASSHOWN_OFFSET UNITYSDK_OFFSET(0xB564610)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB563970)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEAUTOSHOWADVENTUREUI_OFFSET UNITYSDK_OFFSET(0xB5647A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEMAPCREATESTARTED_OFFSET UNITYSDK_OFFSET(0xB5646B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__LEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB564C10)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__MARKENVIRONMENTHINTHASSHOWN_OFFSET UNITYSDK_OFFSET(0xB5642D0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONCHALLENGEPEAKSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xB564E50)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xB564370)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB5644B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0xB564DC0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONLEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB564BC0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0xB564940)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONRESTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB5649A0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0xB564E10)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__RESTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB564A10)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__SETLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0xB564700)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__STARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB563EF0)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__TRYRECOVERENTRANCE_OFFSET UNITYSDK_OFFSET(0xB564810)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xB565490)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_0_OFFSET UNITYSDK_OFFSET(0xB565410)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___STARTCHALLENGE_B__46_1_OFFSET UNITYSDK_OFFSET(0xB565420)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameContext_TypeDefinitionIndex = 59113;

	class ChallengePeakGameContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::RPG::Client::ChallengePeakBoss* _CurChallengePeakBoss_k__BackingField; // 0x20
		::RPG::Client::ChallengePeak* _CurChallengePeakMonster_k__BackingField; // 0x28
		::Class_1_93CCFC46DF4C9BD2* _EventRegistry; // 0x30
		::Class_1_4CFEF021C34E7902* _MessageRegistry; // 0x38
		::RPG::GameCore::MazeBuffRow* _CurrentMazeBuff_k__BackingField; // 0x40
		::RPG::Client::ChallengePeakGroup* _CurrentGroup_k__BackingField; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasShowEnvironmentHintChallenges; // 0x50
		::System::Boolean _IgnoreRecoverEntrance_k__BackingField; // 0x58
		::RPG::Client::ChallengePeakGamePhase _Phase_k__BackingField; // 0x5C

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

		::System::Void RPG_Client_IGameFlowEventReceiver_ReceiveEvent(::Class_0_16E4307DCC419505_651* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_651*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::Class_1_43BD383C98B4C0C5_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_144*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _HandleMapCreateStarted(::Class_1_43BD383C98B4C0C5_145* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_145*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEMAPCREATESTARTED_OFFSET))(this, a1);
		}

		::System::Void _HandleAutoShowAdventureUI(::Class_1_43BD383C98B4C0C5_146* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_146*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__HANDLEAUTOSHOWADVENTUREUI_OFFSET))(this, a1);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_147* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_147*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT__ONNETWORKRECONNECTED_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy__OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
		}
	};
}
