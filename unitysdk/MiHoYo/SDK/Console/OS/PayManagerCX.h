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

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCOLLECTIONSIDOVERDUE_OFFSET UNITYSDK_OFFSET(0x1C8E71D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1C8E6460)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKOVERDUETIME_OFFSET UNITYSDK_OFFSET(0x1C8E66B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1C8E6290)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C8E8F70)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_DETECTCXPAY_OFFSET UNITYSDK_OFFSET(0x1C8E79B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GENERATEXSTSACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1C8E7880)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETGOODSPLATFORMPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1C8E6B20)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1C8E8A50)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETUSERCOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1C8E69A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_INNERCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1C8E64C0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1C8E8970)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCXPAY_OFFSET UNITYSDK_OFFSET(0x1C8E8AE0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHPREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1C8E8A40)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1C8E5DD0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1C8E72D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1C8E6710)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1C8E6B70)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1C8E87C0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__28_0_OFFSET UNITYSDK_OFFSET(0x1C8E97B0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__28_1_OFFSET UNITYSDK_OFFSET(0x1C8E97F0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__28_2_OFFSET UNITYSDK_OFFSET(0x1C8E9830)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E5D60)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__INNERCONSOLEPAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C8E9250)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX_TypeDefinitionIndex = 21188;

	class PayManagerCX : public ::MiHoYo::SDK::Console::PayManagerBase
	{
	public:
		// static const ::System::Int32 authTkenExpiredDay = 0xF; // 0x0
		// static const ::System::Int32 MAX_RETRY_TIMES = 0x5; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::String* collectionsId; // 0x98
		::System::String* authToken; // 0xA0
		::System::Int32 collectionsIdRetryTimes; // 0xA8
		::System::Boolean isCollectionsIdRetry; // 0xAC
		::System::Boolean isRegionPurchaseSupported; // 0xAD
		::System::DateTime authTokenGenerateTime; // 0xB0
		::System::DateTime collectionsIdGenerateTime; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__CTOR_OFFSET))(this);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKREGION_OFFSET))(this);
		}

		::System::Boolean CheckConsolePay(::System::Boolean isEnterGame)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCONSOLEPAY_OFFSET))(this, isEnterGame);
		}

		::System::Boolean InnerConsolePay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_INNERCONSOLEPAY_OFFSET))(this);
		}

		::System::Void GetGoodsPlatformProducts(::Il2CppArray<::System::String*>* idList, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETGOODSPLATFORMPRODUCTS_OFFSET))(this, idList, callback);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTRETRIEVETOKEN_OFFSET))(this, callback);
		}

		::System::Void GetUserCollectionsId(::System::String* token, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GETUSERCOLLECTIONSID_OFFSET))(this, token, callback);
		}

		::System::Void RequestDetectPay(::System::String* collectionsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_REQUESTDETECTPAY_OFFSET))(this, collectionsId);
		}

		::System::Void GenerateXstsAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_GENERATEXSTSACCESSTOKEN_OFFSET))(this, callback, forceRefresh);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* productLabels)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_TRYGETPRODUCTS_OFFSET))(this, productLabels);
		}

		::System::Void LaunchConsolePay(::MiHoYo::SDK::Console::ConsoleProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCONSOLEPAY_OFFSET))(this, product);
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

		::System::Boolean CheckOverdueTime(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKOVERDUETIME_OFFSET))(this, createTime);
		}

		::System::Boolean CheckCollectionsIdOverdue(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_CHECKCOLLECTIONSIDOVERDUE_OFFSET))(this, createTime);
		}

		::System::Void LaunchCXPay(::MiHoYo::SDK::Console::ConsoleProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_LAUNCHCXPAY_OFFSET))(this, product);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_COMMERCECHECKOUTCALLBACK_OFFSET))(this, result, error);
		}

		::System::Void RetrieveToken(::System::String* aid, ::System::String* token, ::System::String* game, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_RETRIEVETOKEN_OFFSET))(this, aid, token, game, callback);
		}

		::System::Void DetectCXPay(::System::String* aid, ::System::String* token, ::System::String* game, ::System::String* region, ::System::String* uid, ::System::String* device, ::System::String* delivery_url, ::System::String* extra, ::System::String* auth_token, ::System::String* xsts_token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX_DETECTCXPAY_OFFSET))(this, aid, token, game, region, uid, device, delivery_url, extra, auth_token, xsts_token, callback);
		}

		::System::Void _InnerConsolePay_b__14_0(::System::String* newAuthToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__INNERCONSOLEPAY_B__14_0_OFFSET))(this, newAuthToken);
		}

		::System::Void _CommerceCheckoutCallback_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__28_0_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__28_1_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__28_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX__COMMERCECHECKOUTCALLBACK_B__28_2_OFFSET))(this);
		}
	};
}
