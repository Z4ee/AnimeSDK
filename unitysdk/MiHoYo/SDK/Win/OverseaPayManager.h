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

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x1BB68760)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BB69A10)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLICKPAYBUTTON_OFFSET UNITYSDK_OFFSET(0x1BB66D70)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEADYENACTION_OFFSET UNITYSDK_OFFSET(0x1BB6F260)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1BB697E0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BB672B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x1BB678A0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETADYENPAYURL_OFFSET UNITYSDK_OFFSET(0x1BB6C330)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETCREATEORDERMODEL_OFFSET UNITYSDK_OFFSET(0x1BB69CA0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETOLDPAYURL_OFFSET UNITYSDK_OFFSET(0x1BB6B770)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETPAYVENDOR_OFFSET UNITYSDK_OFFSET(0x1BB627F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTDIC_OFFSET UNITYSDK_OFFSET(0x1BB628A0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1BB62BB0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEADYENPAY_OFFSET UNITYSDK_OFFSET(0x1BB66AA0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1BB66250)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_LISTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1BB64BB0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1BB6E410)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BB6E100)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BB6E420)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x1BB68B90)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCLICKESCAPE_OFFSET UNITYSDK_OFFSET(0x1BB6F2D0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1BB650D0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BB69930)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYAGELIMITWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BB68690)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BB663B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BB642D0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BB675B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONREDIRECTWEBBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BB6F030)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_OPENAGELIMITWEBPASSPORT_OFFSET UNITYSDK_OFFSET(0x1BB680C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAYDIALOGSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BB696B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1BB62D40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTADYENCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BB64880)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BB671F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1BB64B40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTQUERYORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x1BB68700)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SAVEPAYVENDOR_OFFSET UNITYSDK_OFFSET(0x1BB626F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOULDCLOSEPAYAGELIMITNEWFLOW_OFFSET UNITYSDK_OFFSET(0x1BB68560)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENACTION_OFFSET UNITYSDK_OFFSET(0x1BB6EC40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENERROR_OFFSET UNITYSDK_OFFSET(0x1BB6E220)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENPAY_OFFSET UNITYSDK_OFFSET(0x1BB6DAE0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWLOGININVALIDDIALOG_OFFSET UNITYSDK_OFFSET(0x1BB68490)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITLEGACY_OFFSET UNITYSDK_OFFSET(0x1BB67D00)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITNEWFLOW_OFFSET UNITYSDK_OFFSET(0x1BB67B50)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x1BB67A80)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1BB65FC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB6F440)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6F430)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__ONCHECKORDER_B__48_0_OFFSET UNITYSDK_OFFSET(0x1BB6F490)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_0_OFFSET UNITYSDK_OFFSET(0x1BB6F5E0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_1_OFFSET UNITYSDK_OFFSET(0x1BB6F9D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager_TypeDefinitionIndex = 21086;

	class OverseaPayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaPayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaPayManager**)Il2CppClass::FromTypeDefinitionIndex(OverseaPayManager_TypeDefinitionIndex)->GetStaticField(0xA350);
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
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x10
		::MiHoYo::SDK::JSONObject* reportExtra; // 0x18
		::System::String* orderNumber; // 0x20
		::System::Action_1<::System::String*>* payCallback; // 0x28
		::MiHoYo::SDK::Web* payWeb; // 0x30
		::System::String* payLifecycleId; // 0x38
		::System::String* adyenPayUrl; // 0x40
		::MiHoYo::SDK::Web* redirectWeb; // 0x48
		::MiHoYo::SDK::JSONObject* payVendors; // 0x50
		::System::String* adyenJwtToken; // 0x58
		::System::String* cluster; // 0x60
		::UnityEngine::Coroutine* payWebCoroutine; // 0x68
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

		::System::Void SavePayVendor(::MiHoYo::SDK::PayVendor vendor)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SAVEPAYVENDOR_OFFSET))(this, vendor);
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

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void RequestPayPlat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTPAYPLAT_OFFSET))(this);
		}

		::System::Void OnGetPayPlat(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETPAYPLAT_OFFSET))(this, response);
		}

		::System::Void ShowPayDialog(::MiHoYo::SDK::JSONObject* vendors)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYDIALOG_OFFSET))(this, vendors);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void ClickPayButton(::MiHoYo::SDK::PayVendor vendor)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLICKPAYBUTTON_OFFSET))(this, vendor);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::String* hintMessage, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, msg, hintMessage, code);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::JSONNode* payInfo, ::MiHoYo::SDK::JSONNode* vendor)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTCREATEORDER_OFFSET))(this, payInfo, vendor);
		}

		::System::Void ShowPayAgeLimit(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMIT_OFFSET))(this, closeCallback);
		}

		::System::Void ShowPayAgeLimitLegacy(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITLEGACY_OFFSET))(this, closeCallback);
		}

		::System::Void ShowPayAgeLimitNewFlow(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITNEWFLOW_OFFSET))(this, closeCallback);
		}

		::System::Void OpenAgeLimitWebPassport(::System::String* cookieToken, ::System::String* accountId, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_OPENAGELIMITWEBPASSPORT_OFFSET))(this, cookieToken, accountId, closeCallback);
		}

		::System::Void ShowLoginInvalidDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWLOGININVALIDDIALOG_OFFSET))(this);
		}

		::System::Boolean ShouldClosePayAgeLimitNewFlow(::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOULDCLOSEPAYAGELIMITNEWFLOW_OFFSET))(this, message);
		}

		::System::Void OnPayAgeLimitWebMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYAGELIMITWEBMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void RequestQueryOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTQUERYORDERSTATUS_OFFSET))(this);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCHECKORDER_OFFSET))(this, response);
		}

		::System::Void PayDialogSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAYDIALOGSUCCESS_OFFSET))(this);
		}

		::System::Void ClosePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEPAYDIALOG_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::String* CreateFailPayCallback(::System::String* msg, ::System::Int32 code, ::System::String* hintMessage)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, msg, code, hintMessage);
		}

		::System::Boolean CheckParameters(::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKPARAMETERS_OFFSET))(this, payInfo);
		}

		::System::Void ListPayPlat(::MiHoYo::SDK::JSONNode* payInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_LISTPAYPLAT_OFFSET))(this, payInfo, callback);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* payInfo, ::MiHoYo::SDK::JSONNode* vendor, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::MiHoYo::SDK::JSONNode* headers)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATORDER_OFFSET))(this, payInfo, vendor, callback, headers);
		}

		::System::Void CheckOrder(::System::String* order_no, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKORDER_OFFSET))(this, order_no, callback);
		}

		::MiHoYo::SDK::JSONObject* GetCreateOrderModel(::MiHoYo::SDK::JSONNode* payInfo, ::MiHoYo::SDK::JSONNode* vendor)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETCREATEORDERMODEL_OFFSET))(this, payInfo, vendor);
		}

		::System::String* GetOldPayURL(::System::String* url, ::MiHoYo::SDK::JSONNode* payInfo, ::MiHoYo::SDK::JSONNode* payVendor)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETOLDPAYURL_OFFSET))(this, url, payInfo, payVendor);
		}

		::System::String* GetAdyenPayURL(::System::String* url, ::MiHoYo::SDK::JSONNode* payInfo, ::System::String* cluster)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETADYENPAYURL_OFFSET))(this, url, payInfo, cluster);
		}

		::System::Void ShowAdyenPay(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENPAY_OFFSET))(this, url);
		}

		::System::Void HideAdyenPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEADYENPAY_OFFSET))(this);
		}

		::System::Void OnAdyenPayTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAYTIMEOUT_OFFSET))(this);
		}

		::System::Void ShowAdyenError(::System::String* callbackMsg, ::System::String* toastMsg, ::System::Boolean needToast, ::System::String* hintMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENERROR_OFFSET))(this, callbackMsg, toastMsg, needToast, hintMessage);
		}

		::System::Void OnAdyenPageClose(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAGECLOSE_OFFSET))(this, web);
		}

		::System::Void OnAdyenUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void RequestAdyenCreateOrder(::MiHoYo::SDK::JSONNode* payInfo, ::System::Boolean isJsCall)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTADYENCREATEORDER_OFFSET))(this, payInfo, isJsCall);
		}

		::System::Void ShowAdyenAction(::System::String* url, ::System::String* apm)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENACTION_OFFSET))(this, url, apm);
		}

		::System::Void OnRedirectWebBeforeNavigationMessage(::MiHoYo::SDK::Web* webView, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONREDIRECTWEBBEFORENAVIGATIONMESSAGE_OFFSET))(this, webView, url);
		}

		::System::Void CloseAdyenAction(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEADYENACTION_OFFSET))(this, webView);
		}

		::System::Void OnClickEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCLICKESCAPE_OFFSET))(this);
		}

		::System::Void _OnCheckOrder_b__48_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__ONCHECKORDER_B__48_0_OFFSET))(this);
		}

		::System::Void _ShowAdyenAction_b__67_0(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_0_OFFSET))(this, webView, message);
		}

		::System::Void _ShowAdyenAction_b__67_1(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::Web* popupWeb)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_1_OFFSET))(this, webView, popupWeb);
		}
	};
}
