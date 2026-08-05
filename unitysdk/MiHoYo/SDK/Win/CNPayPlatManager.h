#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/CNPayDialogType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CHECKOVERDUETIME_OFFSET UNITYSDK_OFFSET(0x1D3DF6A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D3D3910)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3DDA40)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CONVERTTOBASE36_OFFSET UNITYSDK_OFFSET(0x1D3DF6E0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3E1F90)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETPAYV2HEADER_OFFSET UNITYSDK_OFFSET(0x1D3DE980)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETQRCODEURL_OFFSET UNITYSDK_OFFSET(0x1D3DF8F0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETREQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1D3E00F0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETWEBPAYURL_OFFSET UNITYSDK_OFFSET(0x1D3D8AC0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3DBD10)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEWEBDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3D39C0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x1D3DEEC0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCLICKESCAPE_OFFSET UNITYSDK_OFFSET(0x1D3DB920)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1D3DDA60)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1D3DCBB0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1D3D65A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D3DC620)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYWEBERROR_OFFSET UNITYSDK_OFFSET(0x1D3DBE40)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D3DBE80)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1D3DBE60)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAYRESULT_OFFSET UNITYSDK_OFFSET(0x1D3DC060)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWSHOW_OFFSET UNITYSDK_OFFSET(0x1D3DD700)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWTRACKEVENT_OFFSET UNITYSDK_OFFSET(0x1D3DD290)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1D3D26D0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PRELOADWEB_OFFSET UNITYSDK_OFFSET(0x1D3D3C70)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REPORTINFO_OFFSET UNITYSDK_OFFSET(0x1D3D3E50)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x1D3DE740)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKOUTV2_OFFSET UNITYSDK_OFFSET(0x1D3E14F0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1D3D7150)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTLISTPAYPLATV2_OFFSET UNITYSDK_OFFSET(0x1D3E0FB0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTQRCODETOKEN_OFFSET UNITYSDK_OFFSET(0x1D3E0280)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWNATIVEDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3DB5A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3D8940)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYERROR_OFFSET UNITYSDK_OFFSET(0x1D3DB700)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYPLATOVERDUE_OFFSET UNITYSDK_OFFSET(0x1D3E1C20)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWWEBDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3DAD70)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_TOASTIFNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1D3D70B0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E2410)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E22F0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_0_OFFSET UNITYSDK_OFFSET(0x1D3E2510)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_1_OFFSET UNITYSDK_OFFSET(0x1D3E26C0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_5_OFFSET UNITYSDK_OFFSET(0x1D3E2740)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__REQUESTLISTPAYPLATV2_B__64_0_OFFSET UNITYSDK_OFFSET(0x1D3E2870)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_0_OFFSET UNITYSDK_OFFSET(0x1D3E2460)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_1_OFFSET UNITYSDK_OFFSET(0x1D3E2480)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_2_OFFSET UNITYSDK_OFFSET(0x1D3E24B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager_TypeDefinitionIndex = 21366;

	class CNPayPlatManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::CNPayPlatManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::CNPayPlatManager**)Il2CppClass::FromTypeDefinitionIndex(CNPayPlatManager_TypeDefinitionIndex)->GetStaticField(0x96B0);
		}
		// static const ::System::String* REQUEST_ID_DEFAULT_KEY; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::PayPlatInfoModel*>* supportPayPlatList; // 0x10
		::MiHoYo::SDK::Win::PayPlatInfoModel* curPayPlatInfo; // 0x18
		::System::String* payJwtToken; // 0x20
		::System::String* reportH5CBodyString; // 0x28
		::System::String* qrCodeUrl; // 0x30
		::MiHoYo::SDK::Web* payWeb; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* payPlatRequestIdDict; // 0x40
		::System::String* payCashierId; // 0x48
		::System::String* payPlatShortUrl; // 0x50
		::System::String* orderNumber; // 0x58
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x60
		::System::Action_1<::System::String*>* payCallback; // 0x68
		::UnityEngine::Coroutine* checkOrderCoroutine; // 0x70
		::System::String* goodsId; // 0x78
		::System::String* reportCashierType; // 0x80
		::UnityEngine::Coroutine* payWebCoroutine; // 0x88
		::System::String* payLifecycleId; // 0x90
		::System::String* levelQRCodeAB; // 0x98
		::System::String* abCashierType; // 0xA0
		::System::String* payWebUrl; // 0xA8
		::System::Boolean isExpandMixedQRcodeServer; // 0xB0
		::System::Boolean isFoldOtherFinal; // 0xB1
		::System::Boolean isExpandMixedQRcodeAB; // 0xB2
		::System::Boolean isCreateOrderLoading; // 0xB3
		::System::Boolean isCashierPreloadAB; // 0xB4
		::System::Boolean isFoldOtherAB; // 0xB5
		::System::Boolean isDisableMarketAB; // 0xB6
		::System::DateTime checkOrderOverdueTime; // 0xB8
		::System::DateTime qrCodeOverdueTime; // 0xC0
		::MiHoYo::SDK::CNPayDialogType payDialogType; // 0xC8
		::System::Boolean isFoldOtherServer; // 0xCC
		::System::Boolean isShowFinished; // 0xCD
		::System::Boolean isExpandMixedQRcodeFinal; // 0xCE
		::System::Boolean isNewUser; // 0xCF
		::System::Int64 reportDuration; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void ShowPayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYDIALOG_OFFSET))(this);
		}

		::System::Void ShowNativeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWNATIVEDIALOG_OFFSET))(this);
		}

		::System::Void PreLoadWeb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PRELOADWEB_OFFSET))(this);
		}

		::System::Void ShowWebDialog(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWWEBDIALOG_OFFSET))(this, url);
		}

		::System::Void HideWebDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEWEBDIALOG_OFFSET))(this);
		}

		::System::Void ShowPayError(::System::String* callbackMsg, ::System::String* toastMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYERROR_OFFSET))(this, callbackMsg, toastMsg);
		}

		::System::Void OnClickEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCLICKESCAPE_OFFSET))(this);
		}

		::System::Void OnPayWebError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYWEBERROR_OFFSET))(this);
		}

		::System::Void OnWebViewPageError(::MiHoYo::SDK::Web* webView, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAGEERROR_OFFSET))(this, webView, url, errorCode, errorMessage);
		}

		::System::Void OnUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void OnWebViewPayResult(::MiHoYo::SDK::JSONNode* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAYRESULT_OFFSET))(this, parameters);
		}

		::System::Void OnWebViewTrackEvent(::MiHoYo::SDK::JSONNode* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWTRACKEVENT_OFFSET))(this, parameters);
		}

		::System::Void OnWebViewShow(::MiHoYo::SDK::JSONNode* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWSHOW_OFFSET))(this, parameters);
		}

		::System::Void ClosePaySuccessDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCREATEORDER_OFFSET))(this, payInfo);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCREATEORDER_OFFSET))(this, response);
		}

		::System::Void RequestCheckOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKORDERSTATUS_OFFSET))(this);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCHECKORDER_OFFSET))(this, response);
		}

		::System::Boolean CheckOverdueTime(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CHECKOVERDUETIME_OFFSET))(this, createTime);
		}

		::System::String* GetPayV2Header(::System::Boolean isNeedReport)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETPAYV2HEADER_OFFSET))(this, isNeedReport);
		}

		::System::String* ConvertToBase36(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CONVERTTOBASE36_OFFSET))(this, value);
		}

		::System::String* GetQRCodeUrl(::System::String* token, ::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETQRCODEURL_OFFSET))(this, token, payPlatInfo);
		}

		::System::String* GetWebPayUrl(::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETWEBPAYURL_OFFSET))(this, payInfo);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetRequestIdList(::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETREQUESTIDLIST_OFFSET))(this, payPlatInfo);
		}

		::System::Void RequestQRCodeToken(::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTQRCODETOKEN_OFFSET))(this, payPlatInfo);
		}

		::System::Void RequestListPayPlatV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTLISTPAYPLATV2_OFFSET))(this);
		}

		::System::Void RequestCheckoutV2(::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKOUTV2_OFFSET))(this, payPlatInfo);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void ShowPayPlatOverdue(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYPLATOVERDUE_OFFSET))(this, code);
		}

		::System::String* CreateFailPayCallback(::System::String* msg, ::System::Int32 code, ::System::String* errMsg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, msg, code, errMsg);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::Int32 code, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, msg, code, errMsg);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void ReportInfo(::System::String* actionName, ::MiHoYo::SDK::JSONNode* cBodyJson)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REPORTINFO_OFFSET))(this, actionName, cBodyJson);
		}

		::System::Void ToastIfNeedShow(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_TOASTIFNEEDSHOW_OFFSET))(this, msg);
		}

		::System::Void _ShowNativeDialog_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_0_OFFSET))(this);
		}

		::System::Void _ShowNativeDialog_b__40_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_1_OFFSET))(this);
		}

		::System::Void _ShowNativeDialog_b__40_2(::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_2_OFFSET))(this, payPlatInfo);
		}

		::System::Void _OnCreateOrder_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_0_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__54_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_1_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__54_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_5_OFFSET))(this);
		}

		::System::Void _RequestListPayPlatV2_b__64_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__REQUESTLISTPAYPLATV2_B__64_0_OFFSET))(this, response);
		}
	};
}
