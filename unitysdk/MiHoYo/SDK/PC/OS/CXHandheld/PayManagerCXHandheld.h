#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldProduct.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/PayManagerBase.h"
#include "unitysdk/System/DateTime.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKCOLLECTIONSIDOVERDUE_OFFSET UNITYSDK_OFFSET(0x1A25D540)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKHANDHELDPAY_OFFSET UNITYSDK_OFFSET(0x1A25C820)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKOVERDUETIME_OFFSET UNITYSDK_OFFSET(0x1A25CA70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1A259B10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A25E550)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_DETECTCXPAY_OFFSET UNITYSDK_OFFSET(0x1A25EA40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GENERATEXSTSACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1A25DCD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETGOODSPLATFORMPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1A25A370)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1A25DFA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETUSERCOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1A25CE20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_INNERCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1A25C850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHCXPAY_OFFSET UNITYSDK_OFFSET(0x1A25E090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHHANDHELDPAY_OFFSET UNITYSDK_OFFSET(0x1A25B260)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHPREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1A25B360)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1A25C390)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1A25D610)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1A25CB20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1A25D0D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1A25A3D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A25F6E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_1_OFFSET UNITYSDK_OFFSET(0x1A25F6F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_2_OFFSET UNITYSDK_OFFSET(0x1A25F700)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A259270)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__INNERCONSOLEPAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A25F3C0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld_TypeDefinitionIndex = 8706;

	class PayManagerCXHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase
	{
	public:
		// static const ::System::Int32 authTkenExpiredDay = 0xF; // 0x0
		// static const ::System::Int32 MAX_RETRY_TIMES = 0x5; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::String* collectionsId; // 0x98
		::System::String* authToken; // 0xA0
		::System::DateTime authTokenGenerateTime; // 0xA8
		::System::DateTime collectionsIdGenerateTime; // 0xB0
		::System::Int32 collectionsIdRetryTimes; // 0xB8
		::System::Boolean isRegionPurchaseSupported; // 0xBC
		::System::Boolean isCollectionsIdRetry; // 0xBD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__CTOR_OFFSET))(this);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKREGION_OFFSET))(this);
		}

		::System::Boolean CheckHandheldPay(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKHANDHELDPAY_OFFSET))(this, a1);
		}

		::System::Boolean InnerConsolePay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_INNERCONSOLEPAY_OFFSET))(this);
		}

		::System::Void GetGoodsPlatformProducts(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETGOODSPLATFORMPRODUCTS_OFFSET))(this, a1, a2);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTRETRIEVETOKEN_OFFSET))(this, a1);
		}

		::System::Void GetUserCollectionsId(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETUSERCOLLECTIONSID_OFFSET))(this, a1, a2);
		}

		::System::Void RequestDetectPay(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTDETECTPAY_OFFSET))(this, a1);
		}

		::System::Void GenerateXstsAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GENERATEXSTSACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_TRYGETPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void LaunchHandheldPay(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHHANDHELDPAY_OFFSET))(this, a1);
		}

		::System::Void LaunchPremiumPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHPREMIUMPAY_OFFSET))(this);
		}

		::System::String* GetRetrieveTokenKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETRETRIEVETOKENKEY_OFFSET))(this);
		}

		::System::Void LoadStorageToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LOADSTORAGETOKEN_OFFSET))(this);
		}

		::System::Boolean CheckOverdueTime(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKOVERDUETIME_OFFSET))(this, a1);
		}

		::System::Boolean CheckCollectionsIdOverdue(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKCOLLECTIONSIDOVERDUE_OFFSET))(this, a1);
		}

		::System::Void LaunchCXPay(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHCXPAY_OFFSET))(this, a1);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_COMMERCECHECKOUTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RetrieveToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_RETRIEVETOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DetectCXPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::String* a9, ::System::String* a10, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_DETECTCXPAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void _InnerConsolePay_b__14_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__INNERCONSOLEPAY_B__14_0_OFFSET))(this, a1);
		}

		::System::Void _CommerceCheckoutCallback_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_0_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_1_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__28_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_2_OFFSET))(this);
		}
	};
}
