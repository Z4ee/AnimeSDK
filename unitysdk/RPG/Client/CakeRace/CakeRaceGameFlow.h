#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceGameFlow_InitParameters.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/CakeRaceGameFlowMessage.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_2594562E2DDF2BC6;
class Class_1_43BD383C98B4C0C5_147;
class Class_1_7E879E2723D836B1;
class Class_1_A9010BD7FDF68FFC;
class Class_1_C6871D0DAD2A840E;
class Class_2_9656056B501DC5E8;
class Class_2_A8371512CE517879;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceLobby; }
namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::CakeRace { class CakeRaceCatUI3DPerformancePrepareData; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0xB47AEE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xB47C040)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xB47AEC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0xB47AE00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0xB47AE60)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0xB47AE40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0xB480160)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB47ADF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0xB47AE20)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0xB47C2F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0xB47B500)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xB47AED0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0xB47AE10)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0xB47AE50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0xB480170)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0xB47AE30)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xB47C0C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xB47BEF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0xB480090)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB47AFE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0xB47F560)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET UNITYSDK_OFFSET(0xB47E640)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0xB47ED70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB47C980)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET UNITYSDK_OFFSET(0xB47E150)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET UNITYSDK_OFFSET(0xB480560)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0xB47D6B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB480890)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0xB47D160)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0xB47D840)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0xB47D340)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xB47D480)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0xB47D3E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0xB47DF40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xB47D960)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET UNITYSDK_OFFSET(0xB47DC10)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xB47D610)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB47F100)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET UNITYSDK_OFFSET(0xB47CF90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET UNITYSDK_OFFSET(0xB47E370)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB47C860)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xB47F860)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET UNITYSDK_OFFSET(0xB480E60)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0xB47F5C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xB480310)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0xB480680)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET UNITYSDK_OFFSET(0xB480260)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0xB47F490)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET UNITYSDK_OFFSET(0xB480510)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0xB47FF90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB480840)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0xB47F9B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0xB47FFE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0xB47FA00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xB47FBA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0xB47FAD0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0xB480200)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xB480030)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET UNITYSDK_OFFSET(0xB480180)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xB47FEC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB480D90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET UNITYSDK_OFFSET(0xB47F960)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET UNITYSDK_OFFSET(0xB4802B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0xB47B090)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0xB47BD70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0xB480470)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET UNITYSDK_OFFSET(0xB47C510)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET UNITYSDK_OFFSET(0xB481250)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET UNITYSDK_OFFSET(0xB4811E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET UNITYSDK_OFFSET(0xB481080)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET UNITYSDK_OFFSET(0xB4810F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET UNITYSDK_OFFSET(0xB481170)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0xB481490)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0xB481430)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xB481580)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0xB481520)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow_TypeDefinitionIndex = 71016;

	class CakeRaceGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _InitParams; // 0x40
		::Class_1_2594562E2DDF2BC6* _GameplayManager_k__BackingField; // 0x50
		::Class_1_7E879E2723D836B1* _UIManager_k__BackingField; // 0x58
		::Class_1_A9010BD7FDF68FFC* _CommandBuilder_k__BackingField; // 0x60
		::Class_2_9656056B501DC5E8* _BubbleGuessPerformance; // 0x68
		::RPG::Client::Promises::Promise* _RequestCakeRaceDataPromise; // 0x70
		::Class_1_C6871D0DAD2A840E* _BGMState_k__BackingField; // 0x78
		::Class_2_A8371512CE517879* _LoanConfirmContext; // 0x80
		::System::Boolean _IsForcePvp_k__BackingField; // 0x88

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::Class_1_A9010BD7FDF68FFC* get_CommandBuilder()
		{
			return ((::Class_1_A9010BD7FDF68FFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET))(this);
		}

		::System::Void set_CommandBuilder(::Class_1_A9010BD7FDF68FFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9010BD7FDF68FFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET))(this, a1);
		}

		::Class_1_7E879E2723D836B1* get_UIManager()
		{
			return ((::Class_1_7E879E2723D836B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET))(this);
		}

		::System::Void set_UIManager(::Class_1_7E879E2723D836B1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E879E2723D836B1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET))(this, a1);
		}

		::Class_1_2594562E2DDF2BC6* get_GameplayManager()
		{
			return ((::Class_1_2594562E2DDF2BC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET))(this);
		}

		::System::Void set_GameplayManager(::Class_1_2594562E2DDF2BC6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2594562E2DDF2BC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::Class_1_C6871D0DAD2A840E* get_BGMState()
		{
			return ((::Class_1_C6871D0DAD2A840E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::Class_1_C6871D0DAD2A840E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C6871D0DAD2A840E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET))(a1);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _ParseParameters()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET))(this);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* TryGetGameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* GetGameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET))();
		}

		static ::System::Void TryGetGameFlowAndSendMessage(::RPG::Client::CakeRaceGameFlowMessage a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::CakeRaceGameFlowMessage, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRequestCakeRaceData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET))(this);
		}

		::System::Void _OnCakeRaceGetDataScRsp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_147* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_147*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, a1);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnShowUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowUI(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET))(this, a1);
		}

		::System::Void _OnShowEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowEntrance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET))(this);
		}

		::System::Void _OnShowFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldSelect()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET))(this);
		}

		::System::Void _OnShowGuessTicketShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowGuessTicketShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET))(this);
		}

		::System::Void _OnShowFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFriendRank()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET))(this);
		}

		::System::Void _OnShowResidentReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowResidentReward()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET))(this);
		}

		::System::Void _OnShowCatHandbook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowCatHandbook()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET))(this);
		}

		::System::Void _OnShowFieldInfo(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldInfo(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET))(this, a1);
		}

		::System::Void _OnShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET))(this, a1);
		}

		::System::Void _CreateLoanConfirmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET))(this);
		}

		::System::Void _DestroyLoanConfirmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsForcePvp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET))(this);
		}

		::System::Void set_IsForcePvp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET))(this, a1);
		}

		::System::Void _OnShowMatch(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowMatch(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET))(this, a1);
		}

		::System::Void _OnShowInviteFriend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowInviteFriend()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET))(this);
		}

		::System::Void _OnJoinLobby(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleJoinLobby(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET))(this, a1);
		}

		::System::Void _OnStartGame(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleStartGame(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET))(this, a1);
		}

		::System::Void _OnExitGame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleExitGame(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _TryQuitLobby(::RPG::Client::CakeRaceLobby* a1, ::RPG::Client::CakeRace::CakeRaceUIType a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceLobby*, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandlePauseGame(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET))(this, a1);
		}

		::System::Void _OnGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET))(this, a1);
		}

		::System::Void _OnShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _OnShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _OnEntered_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowEntrance_b__42_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET))(this);
		}

		::System::Void __HandleShowEntrance_b__42_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowFriendRank_b__48_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowCatHandbook_b__52_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleJoinLobby_b__68_0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}
	};
}
