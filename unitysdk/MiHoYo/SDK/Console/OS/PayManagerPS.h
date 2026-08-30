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

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1737AF60)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKPRICE_OFFSET UNITYSDK_OFFSET(0x1737B5D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKPURCHASE_OFFSET UNITYSDK_OFFSET(0x1737B6A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1737AF50)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1737E2D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_DETECTPSPAY_OFFSET UNITYSDK_OFFSET(0x1737E850)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_GETGOODSPLATFORMPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1737E120)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_GETPURCHASEJSON_OFFSET UNITYSDK_OFFSET(0x1737BC70)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_GETSAVEPURCHASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1737BB00)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_LAUNCHCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1737B390)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_LAUNCHPREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1737B8A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_LAUNCHPSPAY_OFFSET UNITYSDK_OFFSET(0x1737B940)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_ONCHECKPAY_OFFSET UNITYSDK_OFFSET(0x1737D470)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_PREMIUMCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1737E780)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_REQUESTCHECKPAY_OFFSET UNITYSDK_OFFSET(0x1737CE80)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_SAVEPURCHASE_OFFSET UNITYSDK_OFFSET(0x1737D8A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1737B2B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_0_OFFSET UNITYSDK_OFFSET(0x1737F040)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_1_OFFSET UNITYSDK_OFFSET(0x1737F050)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_2_OFFSET UNITYSDK_OFFSET(0x1737F060)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1737AF40)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS_TypeDefinitionIndex = 9030;

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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKREGION_OFFSET))(this);
		}

		::System::Boolean CheckConsolePay(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKCONSOLEPAY_OFFSET))(this, a1);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_TRYGETPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void LaunchConsolePay(::MiHoYo::SDK::Console::ConsoleProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_LAUNCHCONSOLEPAY_OFFSET))(this, a1);
		}

		::System::Void LaunchPremiumPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_LAUNCHPREMIUMPAY_OFFSET))(this);
		}

		::System::Void LaunchPSPay(::MiHoYo::SDK::Console::ConsoleProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_LAUNCHPSPAY_OFFSET))(this, a1);
		}

		::System::Boolean CheckPrice(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKPRICE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetSavePurchaseAmount()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_GETSAVEPURCHASEAMOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* GetPurchaseJson()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_GETPURCHASEJSON_OFFSET))(this);
		}

		::System::Void CheckPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_CHECKPURCHASE_OFFSET))(this);
		}

		::System::Void OnCheckPay(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_ONCHECKPAY_OFFSET))(this, a1);
		}

		::System::Void SavePurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_SAVEPURCHASE_OFFSET))(this);
		}

		::System::Void GetGoodsPlatformProducts(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_GETGOODSPLATFORMPRODUCTS_OFFSET))(this, a1, a2);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_COMMERCECHECKOUTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void PremiumCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_PREMIUMCHECKOUTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void DetectPSPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::String* a9, ::System::Int32 a10, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_DETECTPSPAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void RequestCheckPay(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS_REQUESTCHECKPAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _CommerceCheckoutCallback_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_0_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_1_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS__COMMERCECHECKOUTCALLBACK_B__20_2_OFFSET))(this);
		}
	};
}
