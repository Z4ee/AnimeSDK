#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceGameFlow_InitParameters.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/CakeRaceGameFlowMessage.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_0D4B763E40BF8CFF;
class Class_1_43BD383C98B4C0C5_130;
class Class_1_791CB467786D8BD6;
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

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x921B7F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x921C7C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x921B7D0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0x921B710)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x921B770)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x921B750)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0x9220360)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x921B700)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x921B730)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x921CA70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x921BE10)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x921B7E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0x921B720)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x921B760)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0x9220370)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x921B740)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x921C840)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x921C680)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0x9220240)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x921B8F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0x921F9F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET UNITYSDK_OFFSET(0x921EBB0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0x921F280)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x921D0B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET UNITYSDK_OFFSET(0x921E720)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x9220740)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0x921DD20)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9220900)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x921D830)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0x921DE80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x921D9E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x921DB20)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0x921DA80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x921E530)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x921DFB0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET UNITYSDK_OFFSET(0x921E200)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x921DC80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x921F610)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET UNITYSDK_OFFSET(0x921D690)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET UNITYSDK_OFFSET(0x921E910)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x921CF90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x921FCE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET UNITYSDK_OFFSET(0x9220CC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x921FA50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x92204F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0x9220860)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET UNITYSDK_OFFSET(0x9220440)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x921F930)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x92206F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0x9220140)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x92208B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x921FE30)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0x9220190)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x921FE80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x9220020)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0x921FF50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x92203E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x92201E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET UNITYSDK_OFFSET(0x9220380)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x9220070)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9220C70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET UNITYSDK_OFFSET(0x921FDE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET UNITYSDK_OFFSET(0x9220490)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x921B9B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x921C530)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0x9220650)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET UNITYSDK_OFFSET(0x921CC40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET UNITYSDK_OFFSET(0x92210B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET UNITYSDK_OFFSET(0x9221040)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET UNITYSDK_OFFSET(0x9220EE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET UNITYSDK_OFFSET(0x9220F50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET UNITYSDK_OFFSET(0x9220FD0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0x9221320)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0x92212C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x9221420)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0x92213C0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow_TypeDefinitionIndex = 62205;

	class CakeRaceGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::Class_2_9656056B501DC5E8* _BubbleGuessPerformance; // 0x40
		::Class_1_A9010BD7FDF68FFC* _CommandBuilder_k__BackingField; // 0x48
		::Class_1_0D4B763E40BF8CFF* _GameplayManager_k__BackingField; // 0x50
		::Class_1_791CB467786D8BD6* _UIManager_k__BackingField; // 0x58
		::RPG::Client::Promises::Promise* _RequestCakeRaceDataPromise; // 0x60
		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _InitParams; // 0x68
		::Class_2_A8371512CE517879* _LoanConfirmContext; // 0x78
		::Class_1_C6871D0DAD2A840E* _BGMState_k__BackingField; // 0x80
		::System::Boolean _IsForcePvp_k__BackingField; // 0x88

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::Class_1_A9010BD7FDF68FFC* get_CommandBuilder()
		{
			return ((::Class_1_A9010BD7FDF68FFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET))(this);
		}

		::System::Void set_CommandBuilder(::Class_1_A9010BD7FDF68FFC* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9010BD7FDF68FFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET))(this, value);
		}

		::Class_1_791CB467786D8BD6* get_UIManager()
		{
			return ((::Class_1_791CB467786D8BD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET))(this);
		}

		::System::Void set_UIManager(::Class_1_791CB467786D8BD6* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_791CB467786D8BD6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET))(this, value);
		}

		::Class_1_0D4B763E40BF8CFF* get_GameplayManager()
		{
			return ((::Class_1_0D4B763E40BF8CFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET))(this);
		}

		::System::Void set_GameplayManager(::Class_1_0D4B763E40BF8CFF* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D4B763E40BF8CFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::Class_1_C6871D0DAD2A840E* get_BGMState()
		{
			return ((::Class_1_C6871D0DAD2A840E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::Class_1_C6871D0DAD2A840E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C6871D0DAD2A840E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET))(parameters);
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

		static ::System::Void TryGetGameFlowAndSendMessage(::RPG::Client::CakeRaceGameFlowMessage message, ::System::Object* param)
		{
			return ((::System::Void(*)(::RPG::Client::CakeRaceGameFlowMessage, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET))(message, param);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRequestCakeRaceData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET))(this);
		}

		::System::Void _OnCakeRaceGetDataScRsp(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_130* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_130*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, evt);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnShowUI(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _HandleShowUI(::System::Object* obj)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET))(this, obj);
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

		::System::Void _OnShowFieldInfo(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET))(this, fieldData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldInfo(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET))(this, fieldData);
		}

		::System::Void _OnShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET))(this, prepareData);
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

		::System::Void set_IsForcePvp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET))(this, value);
		}

		::System::Void _OnShowMatch(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET))(this, fieldData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowMatch(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET))(this, fieldData);
		}

		::System::Void _OnShowInviteFriend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowInviteFriend()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET))(this);
		}

		::System::Void _OnJoinLobby(::System::UInt64 lobbyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET))(this, lobbyID);
		}

		::RPG::Client::Promises::IPromise* _HandleJoinLobby(::System::UInt64 lobbyID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET))(this, lobbyID);
		}

		::System::Void _OnStartGame(::RPG::Client::CakeRaceStartGameData* startGameData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET))(this, startGameData);
		}

		::RPG::Client::Promises::IPromise* _HandleStartGame(::RPG::Client::CakeRaceStartGameData* startGameData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET))(this, startGameData);
		}

		::System::Void _OnExitGame(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _HandleExitGame(::System::Object* obj)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _TryQuitLobby(::RPG::Client::CakeRaceLobby* lobby, ::RPG::Client::CakeRace::CakeRaceUIType targetUIType)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceLobby*, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET))(this, lobby, targetUIType);
		}

		::System::Void _OnPauseGame(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET))(this, isPause);
		}

		::RPG::Client::Promises::IPromise* _HandlePauseGame(::System::Boolean isPause)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET))(this, isPause);
		}

		::System::Void _OnGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET))(this, prepareData);
		}

		::System::Void _OnShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::System::Void _OnShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET))(this, prepareData);
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

		::RPG::Client::Promises::IPromise* __HandleJoinLobby_b__68_0(::RPG::Client::BaseLobby* joinLobby)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET))(this, joinLobby);
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

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}
	};
}
