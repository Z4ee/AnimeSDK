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

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CHECKOVERDUETIME_OFFSET UNITYSDK_OFFSET(0x18498150)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18490500)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x184966E0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CONVERTTOBASE36_OFFSET UNITYSDK_OFFSET(0x18498190)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x18499EF0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETPAYV2HEADER_OFFSET UNITYSDK_OFFSET(0x18497670)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETQRCODEURL_OFFSET UNITYSDK_OFFSET(0x18498330)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETREQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x18498890)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETWEBPAYURL_OFFSET UNITYSDK_OFFSET(0x18492880)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x18495040)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEWEBDIALOG_OFFSET UNITYSDK_OFFSET(0x18490580)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x18497A20)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCLICKESCAPE_OFFSET UNITYSDK_OFFSET(0x18494E20)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x18496700)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x184959B0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x18490B60)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x184955E0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYWEBERROR_OFFSET UNITYSDK_OFFSET(0x18495080)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x184950C0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0x184950A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAYRESULT_OFFSET UNITYSDK_OFFSET(0x184951A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWSHOW_OFFSET UNITYSDK_OFFSET(0x184962D0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWTRACKEVENT_OFFSET UNITYSDK_OFFSET(0x18495E40)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1848F430)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PRELOADWEB_OFFSET UNITYSDK_OFFSET(0x18490980)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REPORTINFO_OFFSET UNITYSDK_OFFSET(0x1848A7A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x18497490)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKOUTV2_OFFSET UNITYSDK_OFFSET(0x18499690)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x18491260)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTLISTPAYPLATV2_OFFSET UNITYSDK_OFFSET(0x18499310)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTQRCODETOKEN_OFFSET UNITYSDK_OFFSET(0x18498A40)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWNATIVEDIALOG_OFFSET UNITYSDK_OFFSET(0x18494B40)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x18492760)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYERROR_OFFSET UNITYSDK_OFFSET(0x18494CE0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYPLATOVERDUE_OFFSET UNITYSDK_OFFSET(0x18499BC0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWWEBDIALOG_OFFSET UNITYSDK_OFFSET(0x184940D0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER_TOASTIFNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x184911B0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1849A210)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1849A110)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_0_OFFSET UNITYSDK_OFFSET(0x1849A3F0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_1_OFFSET UNITYSDK_OFFSET(0x1849A4A0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__ONCREATEORDER_B__54_5_OFFSET UNITYSDK_OFFSET(0x1849A520)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__REQUESTLISTPAYPLATV2_B__64_0_OFFSET UNITYSDK_OFFSET(0x1849A560)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_0_OFFSET UNITYSDK_OFFSET(0x1849A340)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_1_OFFSET UNITYSDK_OFFSET(0x1849A360)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_2_OFFSET UNITYSDK_OFFSET(0x1849A390)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager_TypeDefinitionIndex = 8931;

	class CNPayPlatManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::CNPayPlatManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::CNPayPlatManager**)Il2CppClass::FromTypeDefinitionIndex(CNPayPlatManager_TypeDefinitionIndex)->GetStaticField(0x265E0);
		}
		// static const ::System::String* REQUEST_ID_DEFAULT_KEY; // 0x0
		::System::String* reportCashierType; // 0x10
		::System::String* qrCodeUrl; // 0x18
		::System::String* payJwtToken; // 0x20
		::MiHoYo::SDK::Win::PayPlatInfoModel* curPayPlatInfo; // 0x28
		::System::String* payPlatShortUrl; // 0x30
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::PayPlatInfoModel*>* supportPayPlatList; // 0x38
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x40
		::System::String* levelQRCodeAB; // 0x48
		::System::String* reportH5CBodyString; // 0x50
		::MiHoYo::SDK::Web* payWeb; // 0x58
		::System::String* abCashierType; // 0x60
		::System::String* payWebUrl; // 0x68
		::System::String* goodsId; // 0x70
		::System::String* payLifecycleId; // 0x78
		::System::String* payCashierId; // 0x80
		::UnityEngine::Coroutine* checkOrderCoroutine; // 0x88
		::System::Action_1<::System::String*>* payCallback; // 0x90
		::UnityEngine::Coroutine* payWebCoroutine; // 0x98
		::System::String* orderNumber; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* payPlatRequestIdDict; // 0xA8
		::System::DateTime qrCodeOverdueTime; // 0xB0
		::System::Int64 reportDuration; // 0xB8
		::System::Boolean isDisableMarketAB; // 0xC0
		::System::Boolean isFoldOtherFinal; // 0xC1
		::System::Boolean isNewUser; // 0xC2
		::System::Boolean isCashierPreloadAB; // 0xC3
		::System::Boolean isCreateOrderLoading; // 0xC4
		::System::Boolean isExpandMixedQRcodeFinal; // 0xC5
		::System::Boolean isShowFinished; // 0xC6
		::System::Boolean isFoldOtherAB; // 0xC7
		::System::Boolean isFoldOtherServer; // 0xC8
		::System::Boolean isExpandMixedQRcodeServer; // 0xC9
		::System::Boolean isExpandMixedQRcodeAB; // 0xCA
		::MiHoYo::SDK::CNPayDialogType payDialogType; // 0xCC
		::System::DateTime checkOrderOverdueTime; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_PAY_OFFSET))(this, a1, a2);
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

		::System::Void ShowWebDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWWEBDIALOG_OFFSET))(this, a1);
		}

		::System::Void HideWebDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEWEBDIALOG_OFFSET))(this);
		}

		::System::Void ShowPayError(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnClickEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCLICKESCAPE_OFFSET))(this);
		}

		::System::Void OnPayWebError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYWEBERROR_OFFSET))(this);
		}

		::System::Void OnWebViewPageError(::MiHoYo::SDK::Web* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAGEERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnWebViewPayResult(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWPAYRESULT_OFFSET))(this, a1);
		}

		::System::Void OnWebViewTrackEvent(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWTRACKEVENT_OFFSET))(this, a1);
		}

		::System::Void OnWebViewShow(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONWEBVIEWSHOW_OFFSET))(this, a1);
		}

		::System::Void ClosePaySuccessDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCREATEORDER_OFFSET))(this, a1);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCREATEORDER_OFFSET))(this, a1);
		}

		::System::Void RequestCheckOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKORDERSTATUS_OFFSET))(this);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONCHECKORDER_OFFSET))(this, a1);
		}

		::System::Boolean CheckOverdueTime(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CHECKOVERDUETIME_OFFSET))(this, a1);
		}

		::System::String* GetPayV2Header(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETPAYV2HEADER_OFFSET))(this, a1);
		}

		::System::String* ConvertToBase36(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CONVERTTOBASE36_OFFSET))(this, a1);
		}

		::System::String* GetQRCodeUrl(::System::String* a1, ::MiHoYo::SDK::Win::PayPlatInfoModel* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETQRCODEURL_OFFSET))(this, a1, a2);
		}

		::System::String* GetWebPayUrl(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETWEBPAYURL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetRequestIdList(::MiHoYo::SDK::Win::PayPlatInfoModel* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_GETREQUESTIDLIST_OFFSET))(this, a1);
		}

		::System::Void RequestQRCodeToken(::MiHoYo::SDK::Win::PayPlatInfoModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTQRCODETOKEN_OFFSET))(this, a1);
		}

		::System::Void RequestListPayPlatV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTLISTPAYPLATV2_OFFSET))(this);
		}

		::System::Void RequestCheckoutV2(::MiHoYo::SDK::Win::PayPlatInfoModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REQUESTCHECKOUTV2_OFFSET))(this, a1);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void ShowPayPlatOverdue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_SHOWPAYPLATOVERDUE_OFFSET))(this, a1);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void ReportInfo(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_REPORTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void ToastIfNeedShow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER_TOASTIFNEEDSHOW_OFFSET))(this, a1);
		}

		::System::Void _ShowNativeDialog_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_0_OFFSET))(this);
		}

		::System::Void _ShowNativeDialog_b__40_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_1_OFFSET))(this);
		}

		::System::Void _ShowNativeDialog_b__40_2(::MiHoYo::SDK::Win::PayPlatInfoModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayPlatInfoModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__SHOWNATIVEDIALOG_B__40_2_OFFSET))(this, a1);
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

		::System::Void _RequestListPayPlatV2_b__64_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER__REQUESTLISTPAYPLATV2_B__64_0_OFFSET))(this, a1);
		}
	};
}
