#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/MiHoYo/SDK/Console/PayManagerBase.h"
#include "unitysdk/MiHoYo/SDK/PSCommerceDialogCheckoutResult.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1BBA2340)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKPRICE_OFFSET UNITYSDK_OFFSET(0x1BBA2DD0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKPURCHASE_OFFSET UNITYSDK_OFFSET(0x1BBA2EB0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1BBA22E0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BBA5020)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_DETECTPSPAY_OFFSET UNITYSDK_OFFSET(0x1BBA52B0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_GETGOODSPLATFORMPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BBA22F0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_GETPURCHASEJSON_OFFSET UNITYSDK_OFFSET(0x1BBA3350)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_GETSAVEPURCHASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BBA3200)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_LAUNCHCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1BBA2D00)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_LAUNCHPREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1BBA3180)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_LAUNCHPSPAY_OFFSET UNITYSDK_OFFSET(0x1BBA3050)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_ONCHECKPAY_OFFSET UNITYSDK_OFFSET(0x1BBA49F0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_PREMIUMCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BBA5240)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_REQUESTCHECKPAY_OFFSET UNITYSDK_OFFSET(0x1BBA43D0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_SAVEPURCHASE_OFFSET UNITYSDK_OFFSET(0x1BBA4C80)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BBA2C50)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BBA6110)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_1_OFFSET UNITYSDK_OFFSET(0x1BBA6120)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_2_OFFSET UNITYSDK_OFFSET(0x1BBA6130)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA22D0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerPS_TypeDefinitionIndex = 20864;

	class PayManagerPS : public ::MiHoYo::SDK::Console::PayManagerBase
	{
	public:
		// static const ::System::String* RMB_AMOUNT; // 0x0
		// static const ::System::String* SINGLE_RMB_AMOUNT; // 0x0
		// static const ::System::String* MONTH_RMB_AMOUNT; // 0x0
		// static const ::System::String* DAY_RMB_AMOUNT; // 0x0
		// static const ::System::String* DATE; // 0x0
		// static const ::System::String* AMOUNT; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKREGION_OFFSET))(this);
		}

		::System::Void GetGoodsPlatformProducts(::Il2CppArray<::System::String*>* idList, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_GETGOODSPLATFORMPRODUCTS_OFFSET))(this, idList, callback);
		}

		::System::Boolean CheckConsolePay(::System::Boolean isEnterGame)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKCONSOLEPAY_OFFSET))(this, isEnterGame);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* productLabels)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_TRYGETPRODUCTS_OFFSET))(this, productLabels);
		}

		::System::Void LaunchConsolePay(::MiHoYo::SDK::Console::ConsoleProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_LAUNCHCONSOLEPAY_OFFSET))(this, product);
		}

		::System::Void LaunchPremiumPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_LAUNCHPREMIUMPAY_OFFSET))(this);
		}

		::System::Void LaunchPSPay(::MiHoYo::SDK::Console::ConsoleProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_LAUNCHPSPAY_OFFSET))(this, product);
		}

		::System::Boolean CheckPrice(::System::String* showPrice)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKPRICE_OFFSET))(this, showPrice);
		}

		::MiHoYo::SDK::JSONNode* GetSavePurchaseAmount()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_GETSAVEPURCHASEAMOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* GetPurchaseJson()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_GETPURCHASEJSON_OFFSET))(this);
		}

		::System::Void CheckPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_CHECKPURCHASE_OFFSET))(this);
		}

		::System::Void OnCheckPay(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_ONCHECKPAY_OFFSET))(this, response);
		}

		::System::Void SavePurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_SAVEPURCHASE_OFFSET))(this);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_COMMERCECHECKOUTCALLBACK_OFFSET))(this, result, error);
		}

		::System::Void PremiumCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_PREMIUMCHECKOUTCALLBACK_OFFSET))(this, result, error);
		}

		::System::Void DetectPSPay(::System::String* aid, ::System::String* token, ::System::String* game, ::System::String* region, ::System::String* uid, ::System::String* device, ::System::String* delivery_url, ::System::String* client_id, ::System::String* auth_code, ::System::Int32 issuerId, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_DETECTPSPAY_OFFSET))(this, aid, token, game, region, uid, device, delivery_url, client_id, auth_code, issuerId, callback);
		}

		::System::Void RequestCheckPay(::MiHoYo::SDK::JSONNode* amountJson, ::System::String* app_id, ::System::String* combo_token, ::System::String* open_id, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS_REQUESTCHECKPAY_OFFSET))(this, amountJson, app_id, combo_token, open_id, callback);
		}

		::System::Void _CommerceCheckoutCallback_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_0_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_1_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_2_OFFSET))(this);
		}
	};
}
