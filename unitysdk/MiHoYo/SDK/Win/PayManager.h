#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AlertCompliance_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/PayPlat.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_PAYMANAGER_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x1B8D4770)
#define MIHOYO_SDK_WIN_PAYMANAGER_CHECKQRCODE_OFFSET UNITYSDK_OFFSET(0x1B8D55F0)
#define MIHOYO_SDK_WIN_PAYMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8D1760)
#define MIHOYO_SDK_WIN_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8D5B70)
#define MIHOYO_SDK_WIN_PAYMANAGER_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1B8D1B20)
#define MIHOYO_SDK_WIN_PAYMANAGER_GETPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1B8D16B0)
#define MIHOYO_SDK_WIN_PAYMANAGER_GETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1B8CF4A0)
#define MIHOYO_SDK_WIN_PAYMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1B8CF880)
#define MIHOYO_SDK_WIN_PAYMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8D4610)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKALIORDER_OFFSET UNITYSDK_OFFSET(0x1B8D55E0)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x1B8D4C40)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKWEIXINORDER_OFFSET UNITYSDK_OFFSET(0x1B8D4C30)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEALIORDER_OFFSET UNITYSDK_OFFSET(0x1B8D4290)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1B8D3620)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEWEIXINORDER_OFFSET UNITYSDK_OFFSET(0x1B8D3350)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1B8CFDD0)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1B8D56F0)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1B8D1040)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1B8D1780)
#define MIHOYO_SDK_WIN_PAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1B8D0410)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1B8D1950)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTDEFAULTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x1B8D0110)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x1B8D0010)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1B8CF770)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTQUERYALIORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x1B8D46E0)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTQUERYWEIXINORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x1B8D4650)
#define MIHOYO_SDK_WIN_PAYMANAGER_SAVEPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1B8D5AE0)
#define MIHOYO_SDK_WIN_PAYMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8D1570)
#define MIHOYO_SDK_WIN_PAYMANAGER_TOASTIFNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1B8D1360)
#define MIHOYO_SDK_WIN_PAYMANAGER_UPDATEALIQRCODE_OFFSET UNITYSDK_OFFSET(0x1B8D4560)
#define MIHOYO_SDK_WIN_PAYMANAGER_UPDATEWEIXINQRCODE_OFFSET UNITYSDK_OFFSET(0x1B8D41E0)
#define MIHOYO_SDK_WIN_PAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8D5F30)
#define MIHOYO_SDK_WIN_PAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D5F00)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_0_OFFSET UNITYSDK_OFFSET(0x1B8D61B0)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_1_OFFSET UNITYSDK_OFFSET(0x1B8D61F0)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_2_OFFSET UNITYSDK_OFFSET(0x1B8D6060)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_3_OFFSET UNITYSDK_OFFSET(0x1B8D6110)
#define MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_0_OFFSET UNITYSDK_OFFSET(0x1B8D5F90)
#define MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_1_OFFSET UNITYSDK_OFFSET(0x1B8D5FB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager_TypeDefinitionIndex = 9408;

	class PayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::PayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::PayManager**)Il2CppClass::FromTypeDefinitionIndex(PayManager_TypeDefinitionIndex)->GetStaticField(0x289E0);
		}
		// static const ::System::String* PayPlatInfo; // 0x0
		// static const ::System::Int32 OverdueTime = 0x1E; // 0x0
		// static const ::System::String* amount_display_key; // 0x0
		::System::String* suggestCountry; // 0x10
		::System::String* aliUrl; // 0x18
		::System::String* suggestCurrency; // 0x20
		::System::Action_1<::System::String*>* payCallback; // 0x28
		::UnityEngine::Coroutine* checkOrderCoroutine; // 0x30
		::System::String* weixinUrl; // 0x38
		::System::String* orderNumber; // 0x40
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x48
		::System::Boolean isCreateOrderLoading; // 0x50
		::MiHoYo::SDK::PayPlat currentPayPlat; // 0x54
		::System::Int32 payLimitTipsAmount; // 0x58
		::System::DateTime aliUrlDateTime; // 0x60
		::System::DateTime weixinUrlDateTime; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void GetPriceTier(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_GETPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void RequestPriceTier(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void RequestPriceTierV2(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIERV2_OFFSET))(this, a1, a2);
		}

		::System::Void RequestDefaultPriceTierV2(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTDEFAULTPRICETIERV2_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_SHOWPAYDIALOG_OFFSET))(this);
		}

		::System::Void ClosePaySuccessDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::PayPlat a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTCREATEORDER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCreateWeixinOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEWEIXINORDER_OFFSET))(this, a1);
		}

		::System::Void OnCreateAliOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEALIORDER_OFFSET))(this, a1);
		}

		::System::String* OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEORDER_OFFSET))(this, a1);
		}

		::System::Void UpdateWeixinQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_UPDATEWEIXINQRCODE_OFFSET))(this);
		}

		::System::Void UpdateAliQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_UPDATEALIQRCODE_OFFSET))(this);
		}

		::System::Void RequestQueryWeixinOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTQUERYWEIXINORDERSTATUS_OFFSET))(this);
		}

		::System::Void RequestQueryAliOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTQUERYALIORDERSTATUS_OFFSET))(this);
		}

		::System::Void OnCheckWeixinOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKWEIXINORDER_OFFSET))(this, a1);
		}

		::System::Void OnCheckAliOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKALIORDER_OFFSET))(this, a1);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKORDER_OFFSET))(this, a1);
		}

		::System::Boolean CheckQRCode(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CHECKQRCODE_OFFSET))(this, a1);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void SavePayPlat(::MiHoYo::SDK::PayPlat a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_SAVEPAYPLAT_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::PayPlat GetPayPlat()
		{
			return ((::MiHoYo::SDK::PayPlat(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_GETPAYPLAT_OFFSET))(this);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void CreateOrder(::MiHoYo::SDK::PayPlat a1, ::MiHoYo::SDK::JSONNode* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CREATEORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckOrder(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CHECKORDER_OFFSET))(this, a1, a2);
		}

		::System::Void ToastIfNeedShow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_TOASTIFNEEDSHOW_OFFSET))(this, a1);
		}

		::System::Void _ShowPayDialog_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_0_OFFSET))(this);
		}

		::System::Void _ShowPayDialog_b__24_1(::MiHoYo::SDK::PayPlat a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_1_OFFSET))(this, a1);
		}

		::System::Void _OnCreateOrder_b__29_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_2_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__29_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_3_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__29_0(::MiHoYo::SDK::AlertCompliance_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AlertCompliance_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_0_OFFSET))(this, a1);
		}

		::System::Void _OnCreateOrder_b__29_1(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_1_OFFSET))(this, a1);
		}
	};
}
