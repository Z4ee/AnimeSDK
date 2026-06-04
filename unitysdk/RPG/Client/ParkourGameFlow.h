#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/Client/ParkourGameFlow_InitParameters.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class ParkourGameFlowContext; }
namespace RPG::Client { class ParkourLevel; }
namespace RPG::Client { class ParkourLevelGroup; }
namespace RPG::Client { class ParkourSettlement; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PARKOURGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xC33DD00)
#define RPG_CLIENT_PARKOURGAMEFLOW_CREATEGAMEFLOWCONTEXTFORDEV_OFFSET UNITYSDK_OFFSET(0xC33DC80)
#define RPG_CLIENT_PARKOURGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0xC33CBF0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ENTERGAME_OFFSET UNITYSDK_OFFSET(0xC33D5E0)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xC33CBD0)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0xC33CBC0)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC33CBB0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0xC33D210)
#define RPG_CLIENT_PARKOURGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0xC33CEC0)
#define RPG_CLIENT_PARKOURGAMEFLOW_SET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xC33CBE0)
#define RPG_CLIENT_PARKOURGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC33CC80)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xC33D580)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0xC33D390)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xC33EBF0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWBALLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC33E160)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xC33E4C0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC33E990)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC33DDF0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0xC33E7E0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWSETTLEMENTPAGE_OFFSET UNITYSDK_OFFSET(0xC33E310)
#define RPG_CLIENT_PARKOURGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0xC33CCA0)
#define RPG_CLIENT_PARKOURGAMEFLOW__PLAYENTERGAMEAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xC33EE00)
#define RPG_CLIENT_PARKOURGAMEFLOW__PLAYEXITGAMEAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xC33D3E0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWBALLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC33E1B0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTERUI_OFFSET UNITYSDK_OFFSET(0xC33F090)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGEWHENENTER_OFFSET UNITYSDK_OFFSET(0xC33F110)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xC33E510)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC33E9F0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGEWHENENTER_OFFSET UNITYSDK_OFFSET(0xC33F160)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC33DE40)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0xC33E830)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWSETTLEMENTPAGE_OFFSET UNITYSDK_OFFSET(0xC33E360)
#define RPG_CLIENT_PARKOURGAMEFLOW__TRYENTERGAME_OFFSET UNITYSDK_OFFSET(0xC33EFA0)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xC33F7F0)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0xC33F6A0)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0xC33F640)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xC33F790)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0xC33F730)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlow_TypeDefinitionIndex = 57827;

	class ParkourGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::ParkourGameFlowContext* _GameContext_k__BackingField; // 0x40
		::RPG::Client::ParkourGameFlow_InitParameters _InitParams; // 0x48

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsGaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_GET_ISGAMING_OFFSET))(this);
		}

		::RPG::Client::ParkourGameFlowContext* get_GameContext()
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void set_GameContext(::RPG::Client::ParkourGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_SET_GAMECONTEXT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ParkourGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::ParkourGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CREATE_OFFSET))(a1);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void EnterGame(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ENTERGAME_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ParkourGameFlowContext* CreateGameFlowContextForDev()
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CREATEGAMEFLOWCONTEXTFORDEV_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::System::Void _OnShowLevelDetailPage(::RPG::Client::ParkourLevelGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWLEVELDETAILPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnShowBallDetailPage(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWBALLDETAILPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnShowSettlementPage(::RPG::Client::ParkourSettlement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourSettlement*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWSETTLEMENTPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _OnShowPauseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWPAUSEDIALOG_OFFSET))(this);
		}

		::System::Void _OnShowGameMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWGAMEMAINPAGE_OFFSET))(this);
		}

		::System::Void _OnRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONRESTARTGAME_OFFSET))(this);
		}

		::System::Void _PlayEnterGameAudioEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__PLAYENTERGAMEAUDIOEVENT_OFFSET))(this);
		}

		::System::Void _PlayExitGameAudioEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__PLAYEXITGAMEAUDIOEVENT_OFFSET))(this);
		}

		::RPG::Client::ParkourGameFlow_InitParameters _ParseParameters()
		{
			return ((::RPG::Client::ParkourGameFlow_InitParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__PARSEPARAMETERS_OFFSET))(this);
		}

		::System::Boolean _TryEnterGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__TRYENTERGAME_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowEnterUI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTERUI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowEntrancePageWhenEnter()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGEWHENENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowLevelDetailPageWhenEnter(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGEWHENENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ShowEntrancePage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowLevelDetailPage(::RPG::Client::ParkourLevelGroup* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGE_OFFSET))(this, a1);
		}

		::System::Void _ShowBallDetailPage(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWBALLDETAILPAGE_OFFSET))(this, a1);
		}

		::System::Void _ShowSettlementPage(::RPG::Client::ParkourSettlement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourSettlement*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWSETTLEMENTPAGE_OFFSET))(this, a1);
		}

		::System::Void _ShowGameMainPage(::RPG::Client::ParkourGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWGAMEMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void _ShowPauseDialog(::RPG::Client::ParkourGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWPAUSEDIALOG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}
	};
}
