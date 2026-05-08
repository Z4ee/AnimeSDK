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

#define MIHOYO_SDK_WIN_PAYMANAGER_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x1A367030)
#define MIHOYO_SDK_WIN_PAYMANAGER_CHECKQRCODE_OFFSET UNITYSDK_OFFSET(0x1A368270)
#define MIHOYO_SDK_WIN_PAYMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1A363D60)
#define MIHOYO_SDK_WIN_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A368A50)
#define MIHOYO_SDK_WIN_PAYMANAGER_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1A3641A0)
#define MIHOYO_SDK_WIN_PAYMANAGER_GETPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1A363CB0)
#define MIHOYO_SDK_WIN_PAYMANAGER_GETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1A361A30)
#define MIHOYO_SDK_WIN_PAYMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1A361C90)
#define MIHOYO_SDK_WIN_PAYMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1A366E20)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKALIORDER_OFFSET UNITYSDK_OFFSET(0x1A368260)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x1A367820)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKWEIXINORDER_OFFSET UNITYSDK_OFFSET(0x1A367810)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEALIORDER_OFFSET UNITYSDK_OFFSET(0x1A366970)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1A365D10)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEWEIXINORDER_OFFSET UNITYSDK_OFFSET(0x1A3658E0)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1A362210)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1A368380)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1A363490)
#define MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A363D80)
#define MIHOYO_SDK_WIN_PAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1A3627B0)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1A364000)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTDEFAULTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x1A3625E0)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x1A362510)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1A361B80)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTQUERYALIORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x1A366FC0)
#define MIHOYO_SDK_WIN_PAYMANAGER_REQUESTQUERYWEIXINORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x1A366F50)
#define MIHOYO_SDK_WIN_PAYMANAGER_SAVEPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1A368950)
#define MIHOYO_SDK_WIN_PAYMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1A363BA0)
#define MIHOYO_SDK_WIN_PAYMANAGER_TOASTIFNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1A3638E0)
#define MIHOYO_SDK_WIN_PAYMANAGER_UPDATEALIQRCODE_OFFSET UNITYSDK_OFFSET(0x1A366D90)
#define MIHOYO_SDK_WIN_PAYMANAGER_UPDATEWEIXINQRCODE_OFFSET UNITYSDK_OFFSET(0x1A3668E0)
#define MIHOYO_SDK_WIN_PAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A368F10)
#define MIHOYO_SDK_WIN_PAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A368EC0)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_0_OFFSET UNITYSDK_OFFSET(0x1A369430)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_1_OFFSET UNITYSDK_OFFSET(0x1A369560)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_2_OFFSET UNITYSDK_OFFSET(0x1A3690E0)
#define MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_3_OFFSET UNITYSDK_OFFSET(0x1A369290)
#define MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_0_OFFSET UNITYSDK_OFFSET(0x1A368FA0)
#define MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_1_OFFSET UNITYSDK_OFFSET(0x1A368FC0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager_TypeDefinitionIndex = 20041;

	class PayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::PayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::PayManager**)Il2CppClass::FromTypeDefinitionIndex(PayManager_TypeDefinitionIndex)->GetStaticField(0xA0B0);
		}
		// static const ::System::String* PayPlatInfo; // 0x0
		// static const ::System::Int32 OverdueTime = 0x1E; // 0x0
		// static const ::System::String* amount_display_key; // 0x0
		::System::String* aliUrl; // 0x10
		::System::String* weixinUrl; // 0x18
		::UnityEngine::Coroutine* checkOrderCoroutine; // 0x20
		::System::String* suggestCountry; // 0x28
		::System::String* orderNumber; // 0x30
		::System::String* suggestCurrency; // 0x38
		::System::Action_1<::System::String*>* payCallback; // 0x40
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x48
		::System::DateTime aliUrlDateTime; // 0x50
		::MiHoYo::SDK::PayPlat currentPayPlat; // 0x58
		::System::DateTime weixinUrlDateTime; // 0x60
		::System::Boolean isCreateOrderLoading; // 0x68
		::System::Int32 payLimitTipsAmount; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void GetPriceTier(::System::String* currency, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_GETPRICETIER_OFFSET))(this, currency, callback);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void RequestPriceTier(::System::String* currency, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIER_OFFSET))(this, currency, callback);
		}

		::System::Void RequestPriceTierV2(::System::String* currency, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTPRICETIERV2_OFFSET))(this, currency, callback);
		}

		::System::Void RequestDefaultPriceTierV2(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTDEFAULTPRICETIERV2_OFFSET))(this, callback);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::Int32 ret, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, ret, msg);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowPayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_SHOWPAYDIALOG_OFFSET))(this);
		}

		::System::Void ClosePaySuccessDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CLOSEPAYSUCCESSDIALOG_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::PayPlat type, ::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_REQUESTCREATEORDER_OFFSET))(this, type, payInfo);
		}

		::System::Void OnCreateWeixinOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEWEIXINORDER_OFFSET))(this, response);
		}

		::System::Void OnCreateAliOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEALIORDER_OFFSET))(this, response);
		}

		::System::String* OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCREATEORDER_OFFSET))(this, response);
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

		::System::Void OnCheckWeixinOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKWEIXINORDER_OFFSET))(this, response);
		}

		::System::Void OnCheckAliOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKALIORDER_OFFSET))(this, response);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONCHECKORDER_OFFSET))(this, response);
		}

		::System::Boolean CheckQRCode(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CHECKQRCODE_OFFSET))(this, createTime);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void SavePayPlat(::MiHoYo::SDK::PayPlat plat)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_SAVEPAYPLAT_OFFSET))(this, plat);
		}

		::MiHoYo::SDK::PayPlat GetPayPlat()
		{
			return ((::MiHoYo::SDK::PayPlat(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_GETPAYPLAT_OFFSET))(this);
		}

		::System::String* CreateFailPayCallback(::System::String* msg, ::System::Int32 code, ::System::String* errMsg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, msg, code, errMsg);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::Int32 code, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, msg, code, errMsg);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void CreateOrder(::MiHoYo::SDK::PayPlat type, ::MiHoYo::SDK::JSONNode* payInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CREATEORDER_OFFSET))(this, type, payInfo, callback);
		}

		::System::Void CheckOrder(::System::String* order_no, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_CHECKORDER_OFFSET))(this, order_no, callback);
		}

		::System::Void ToastIfNeedShow(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER_TOASTIFNEEDSHOW_OFFSET))(this, msg);
		}

		::System::Void _ShowPayDialog_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_0_OFFSET))(this);
		}

		::System::Void _ShowPayDialog_b__24_1(::MiHoYo::SDK::PayPlat payPlat)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayPlat))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__SHOWPAYDIALOG_B__24_1_OFFSET))(this, payPlat);
		}

		::System::Void _OnCreateOrder_b__29_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_2_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__29_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_3_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__29_0(::MiHoYo::SDK::AlertCompliance_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AlertCompliance_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_0_OFFSET))(this, result);
		}

		::System::Void _OnCreateOrder_b__29_1(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER__ONCREATEORDER_B__29_1_OFFSET))(this, result);
		}
	};
}
