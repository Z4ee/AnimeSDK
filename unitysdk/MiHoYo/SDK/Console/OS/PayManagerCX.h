#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/MiHoYo/SDK/Console/PayManagerBase.h"
#include "unitysdk/MiHoYo/SDK/PSCommerceDialogCheckoutResult.h"
#include "unitysdk/System/DateTime.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCOLLECTIONSIDOVERDUE_OFFSET UNITYSDK_OFFSET(0x1826CAF0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1826BD40)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKOVERDUETIME_OFFSET UNITYSDK_OFFSET(0x1826C030)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1826BBC0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1826E050)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_DETECTCXPAY_OFFSET UNITYSDK_OFFSET(0x1826D0F0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETGOODSPLATFORMPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1826C640)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1826DBB0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETUSERCOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1826C3E0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_INNERCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1826BD70)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1826DAA0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCXPAY_OFFSET UNITYSDK_OFFSET(0x1826DC40)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHPREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1826DBA0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1826B610)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1826CBB0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1826C0E0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1826C680)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1826D920)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__26_0_OFFSET UNITYSDK_OFFSET(0x1826E8B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__26_1_OFFSET UNITYSDK_OFFSET(0x1826E8C0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__26_2_OFFSET UNITYSDK_OFFSET(0x1826E8D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__CTOR_OFFSET UNITYSDK_OFFSET(0x1826B5D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__INNERCONSOLEPAY_B__13_0_OFFSET UNITYSDK_OFFSET(0x1826E4F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX_TypeDefinitionIndex = 8756;

	class PayManagerCX : public ::MiHoYo::SDK::Console::PayManagerBase
	{
	public:
		// static const ::System::Int32 authTkenExpiredDay = 0xF; // 0x0
		// static const ::System::Int32 MAX_RETRY_TIMES = 0x5; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN; // 0x0
		::System::String* authToken; // 0x98
		::System::String* collectionsId; // 0xA0
		::System::DateTime collectionsIdGenerateTime; // 0xA8
		::System::DateTime authTokenGenerateTime; // 0xB0
		::System::Int32 collectionsIdRetryTimes; // 0xB8
		::System::Boolean isRegionPurchaseSupported; // 0xBC
		::System::Boolean isCollectionsIdRetry; // 0xBD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__CTOR_OFFSET))(this);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKREGION_OFFSET))(this);
		}

		::System::Boolean CheckConsolePay(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCONSOLEPAY_OFFSET))(this, a1);
		}

		::System::Boolean InnerConsolePay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_INNERCONSOLEPAY_OFFSET))(this);
		}

		::System::Void GetGoodsPlatformProducts(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETGOODSPLATFORMPRODUCTS_OFFSET))(this, a1, a2);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTRETRIEVETOKEN_OFFSET))(this, a1);
		}

		::System::Void GetUserCollectionsId(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETUSERCOLLECTIONSID_OFFSET))(this, a1, a2);
		}

		::System::Void RequestDetectPay(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTDETECTPAY_OFFSET))(this, a1);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_TRYGETPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void LaunchConsolePay(::MiHoYo::SDK::Console::ConsoleProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCONSOLEPAY_OFFSET))(this, a1);
		}

		::System::Void LaunchPremiumPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHPREMIUMPAY_OFFSET))(this);
		}

		::System::String* GetRetrieveTokenKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETRETRIEVETOKENKEY_OFFSET))(this);
		}

		::System::Void LoadStorageToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LOADSTORAGETOKEN_OFFSET))(this);
		}

		::System::Boolean CheckOverdueTime(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKOVERDUETIME_OFFSET))(this, a1);
		}

		::System::Boolean CheckCollectionsIdOverdue(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCOLLECTIONSIDOVERDUE_OFFSET))(this, a1);
		}

		::System::Void LaunchCXPay(::MiHoYo::SDK::Console::ConsoleProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCXPAY_OFFSET))(this, a1);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_COMMERCECHECKOUTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void RetrieveToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_RETRIEVETOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DetectCXPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::String* a9, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_DETECTCXPAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void _InnerConsolePay_b__13_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__INNERCONSOLEPAY_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _CommerceCheckoutCallback_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__26_0_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__26_1_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__26_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__26_2_OFFSET))(this);
		}
	};
}
