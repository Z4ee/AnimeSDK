#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/OldPayPlat.h"
#include "unitysdk/MiHoYo/SDK/PayDialogType.h"
#include "unitysdk/MiHoYo/SDK/PayVendor.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x18296E90)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18297B60)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLICKPAYBUTTON_OFFSET UNITYSDK_OFFSET(0x18295F70)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEADYENACTION_OFFSET UNITYSDK_OFFSET(0x1829C9C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x18297A40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x18296420)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x18296860)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETADYENPAYURL_OFFSET UNITYSDK_OFFSET(0x1829A180)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETCREATEORDERMODEL_OFFSET UNITYSDK_OFFSET(0x182981B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETOLDPAYURL_OFFSET UNITYSDK_OFFSET(0x18299830)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETPAYVENDOR_OFFSET UNITYSDK_OFFSET(0x18292550)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTDIC_OFFSET UNITYSDK_OFFSET(0x18292600)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x18292760)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEADYENPAY_OFFSET UNITYSDK_OFFSET(0x18295B40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x18295680)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_LISTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x18294230)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1829BBB0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1829B840)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1829BBC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x182971F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCLICKESCAPE_OFFSET UNITYSDK_OFFSET(0x1829CA40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETPAYPLAT_OFFSET UNITYSDK_OFFSET(0x18294840)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x18297A70)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x182956D0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x18293AC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x182965E0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONREDIRECTWEBBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1829C810)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAYDIALOGSUCCESS_OFFSET UNITYSDK_OFFSET(0x18297A00)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x182927B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTADYENCREATEORDER_OFFSET UNITYSDK_OFFSET(0x18293F00)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x18296300)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x182941B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTQUERYORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x18296E10)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SAVEPAYVENDOR_OFFSET UNITYSDK_OFFSET(0x182924C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENACTION_OFFSET UNITYSDK_OFFSET(0x1829C3C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENERROR_OFFSET UNITYSDK_OFFSET(0x1829B990)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENPAY_OFFSET UNITYSDK_OFFSET(0x1829B000)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x18296A20)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x182954A0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1829CAA0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1829CA90)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__ONCHECKORDER_B__42_0_OFFSET UNITYSDK_OFFSET(0x1829CAF0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__61_0_OFFSET UNITYSDK_OFFSET(0x1829CB40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__61_1_OFFSET UNITYSDK_OFFSET(0x1829CF10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager_TypeDefinitionIndex = 8999;

	class OverseaPayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaPayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaPayManager**)Il2CppClass::FromTypeDefinitionIndex(OverseaPayManager_TypeDefinitionIndex)->GetStaticField(0x276F0);
		}
		// static const ::System::String* PayVendorInfo; // 0x0
		// static const ::System::Int32 CreateOrderTimeoutSeconds = 0xA; // 0x0
		// static const ::System::String* EVT_KEY_LIFECYCLEID; // 0x0
		// static const ::System::String* EVT_KEY_ORDERID; // 0x0
		// static const ::System::String* EVT_KEY_GOODSID; // 0x0
		// static const ::System::String* EVT_KEY_CURRENCY; // 0x0
		// static const ::System::String* EVT_KEY_AMOUNT; // 0x0
		// static const ::System::String* EVT_KEY_CREATEORDER_RETCODE; // 0x0
		// static const ::System::String* EVT_KEY_CREATEORDER_MESSAGE; // 0x0
		// static const ::System::String* EVT_KEY_CHECKORDER_RETCODE; // 0x0
		// static const ::System::String* EVT_KEY_CHECKORDER_MESSAGE; // 0x0
		::MiHoYo::SDK::Web* payWeb; // 0x10
		::System::String* payLifecycleId; // 0x18
		::System::String* cluster; // 0x20
		::UnityEngine::Coroutine* payWebCoroutine; // 0x28
		::MiHoYo::SDK::Web* redirectWeb; // 0x30
		::MiHoYo::SDK::JSONObject* reportExtra; // 0x38
		::MiHoYo::SDK::JSONObject* payVendors; // 0x40
		::System::String* adyenJwtToken; // 0x48
		::System::String* orderNumber; // 0x50
		::System::String* adyenPayUrl; // 0x58
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x60
		::System::Action_1<::System::String*>* payCallback; // 0x68
		::MiHoYo::SDK::PayDialogType payDialogType; // 0x70
		::MiHoYo::SDK::OldPayPlat nativePayPlat; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SavePayVendor(::MiHoYo::SDK::PayVendor a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SAVEPAYVENDOR_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::PayVendor GetPayVendor()
		{
			return ((::MiHoYo::SDK::PayVendor(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETPAYVENDOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* GetReportDic()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTDIC_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTTYPE_OFFSET))(this);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void RequestPayPlat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTPAYPLAT_OFFSET))(this);
		}

		::System::Void OnGetPayPlat(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETPAYPLAT_OFFSET))(this, a1);
		}

		::System::Void ShowPayDialog(::MiHoYo::SDK::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYDIALOG_OFFSET))(this, a1);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void ClickPayButton(::MiHoYo::SDK::PayVendor a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLICKPAYBUTTON_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTCREATEORDER_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPayAgeLimit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMIT_OFFSET))(this, a1);
		}

		::System::Void RequestQueryOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTQUERYORDERSTATUS_OFFSET))(this);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCHECKORDER_OFFSET))(this, a1);
		}

		::System::Void PayDialogSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAYDIALOGSUCCESS_OFFSET))(this);
		}

		::System::Void ClosePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEPAYDIALOG_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckParameters(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ListPayPlat(::MiHoYo::SDK::JSONNode* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_LISTPAYPLAT_OFFSET))(this, a1, a2);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::MiHoYo::SDK::JSONNode* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATORDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CheckOrder(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKORDER_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONObject* GetCreateOrderModel(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETCREATEORDERMODEL_OFFSET))(this, a1, a2);
		}

		::System::String* GetOldPayURL(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETOLDPAYURL_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetAdyenPayURL(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETADYENPAYURL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAdyenPay(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENPAY_OFFSET))(this, a1);
		}

		::System::Void HideAdyenPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEADYENPAY_OFFSET))(this);
		}

		::System::Void OnAdyenPayTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAYTIMEOUT_OFFSET))(this);
		}

		::System::Void ShowAdyenError(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnAdyenPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnAdyenUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RequestAdyenCreateOrder(::MiHoYo::SDK::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTADYENCREATEORDER_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAdyenAction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENACTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnRedirectWebBeforeNavigationMessage(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONREDIRECTWEBBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void CloseAdyenAction(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEADYENACTION_OFFSET))(this, a1);
		}

		::System::Void OnClickEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCLICKESCAPE_OFFSET))(this);
		}

		::System::Void _OnCheckOrder_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__ONCHECKORDER_B__42_0_OFFSET))(this);
		}

		::System::Void _ShowAdyenAction_b__61_0(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__61_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAdyenAction_b__61_1(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::Web* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__61_1_OFFSET))(this, a1, a2);
		}
	};
}
