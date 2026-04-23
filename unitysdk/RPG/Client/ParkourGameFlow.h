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

#define RPG_CLIENT_PARKOURGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xAC2DED0)
#define RPG_CLIENT_PARKOURGAMEFLOW_CREATEGAMEFLOWCONTEXTFORDEV_OFFSET UNITYSDK_OFFSET(0xAC2DE10)
#define RPG_CLIENT_PARKOURGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0xAC2CE20)
#define RPG_CLIENT_PARKOURGAMEFLOW_ENTERGAME_OFFSET UNITYSDK_OFFSET(0xAC2D790)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xAC2CE00)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0xAC2CDF0)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAC2CDE0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0xAC2D3E0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0xAC2D110)
#define RPG_CLIENT_PARKOURGAMEFLOW_SET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xAC2CE10)
#define RPG_CLIENT_PARKOURGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2CEB0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xAC2D730)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0xAC2D550)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xAC2EEB0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWBALLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E2C0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E720)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xAC2EBD0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xAC2DFC0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0xAC2E9A0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWSETTLEMENTPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E4F0)
#define RPG_CLIENT_PARKOURGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0xAC2CED0)
#define RPG_CLIENT_PARKOURGAMEFLOW__PLAYENTERGAMEAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xAC2F0A0)
#define RPG_CLIENT_PARKOURGAMEFLOW__PLAYEXITGAMEAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xAC2D5A0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWBALLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E310)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTERUI_OFFSET UNITYSDK_OFFSET(0xAC2F300)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGEWHENENTER_OFFSET UNITYSDK_OFFSET(0xAC2F380)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E770)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xAC2EC30)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGEWHENENTER_OFFSET UNITYSDK_OFFSET(0xAC2F3D0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E010)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0xAC2E9F0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWSETTLEMENTPAGE_OFFSET UNITYSDK_OFFSET(0xAC2E540)
#define RPG_CLIENT_PARKOURGAMEFLOW__TRYENTERGAME_OFFSET UNITYSDK_OFFSET(0xAC2F230)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xAC2F9F0)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0xAC2F880)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0xAC2F820)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xAC2F980)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0xAC2F920)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlow_TypeDefinitionIndex = 57040;

	class ParkourGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::ParkourGameFlowContext* _GameContext_k__BackingField; // 0x40
		::RPG::Client::ParkourGameFlow_InitParameters _InitParams; // 0x48

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__CTOR_OFFSET))(this, parameters);
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

		::System::Void set_GameContext(::RPG::Client::ParkourGameFlowContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_SET_GAMECONTEXT_OFFSET))(this, value);
		}

		static ::RPG::Client::ParkourGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::ParkourGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CREATE_OFFSET))(parameters);
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

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void EnterGame(::System::UInt32 levelID, ::System::UInt32 ballID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ENTERGAME_OFFSET))(this, levelID, ballID);
		}

		::RPG::Client::ParkourGameFlowContext* CreateGameFlowContextForDev()
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CREATEGAMEFLOWCONTEXTFORDEV_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::System::Void _OnShowLevelDetailPage(::RPG::Client::ParkourLevelGroup* levelGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWLEVELDETAILPAGE_OFFSET))(this, levelGroup);
		}

		::System::Void _OnShowBallDetailPage(::RPG::Client::ParkourLevel* level)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWBALLDETAILPAGE_OFFSET))(this, level);
		}

		::System::Void _OnShowSettlementPage(::RPG::Client::ParkourSettlement* settlement)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourSettlement*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWSETTLEMENTPAGE_OFFSET))(this, settlement);
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

		::RPG::Client::Promises::IPromise* _ShowLevelDetailPageWhenEnter(::System::UInt32 levelGroupID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGEWHENENTER_OFFSET))(this, levelGroupID);
		}

		::RPG::Client::Promises::IPromise* _ShowEntrancePage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowLevelDetailPage(::RPG::Client::ParkourLevelGroup* levelGroup)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGE_OFFSET))(this, levelGroup);
		}

		::System::Void _ShowBallDetailPage(::RPG::Client::ParkourLevel* level)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWBALLDETAILPAGE_OFFSET))(this, level);
		}

		::System::Void _ShowSettlementPage(::RPG::Client::ParkourSettlement* settlement)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourSettlement*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWSETTLEMENTPAGE_OFFSET))(this, settlement);
		}

		::System::Void _ShowGameMainPage(::RPG::Client::ParkourGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWGAMEMAINPAGE_OFFSET))(this, context);
		}

		::System::Void _ShowPauseDialog(::RPG::Client::ParkourGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWPAUSEDIALOG_OFFSET))(this, context);
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

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}
	};
}
