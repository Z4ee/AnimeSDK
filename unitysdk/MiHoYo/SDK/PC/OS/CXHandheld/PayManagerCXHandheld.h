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

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKCOLLECTIONSIDOVERDUE_OFFSET UNITYSDK_OFFSET(0x1CF3E4E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKHANDHELDPAY_OFFSET UNITYSDK_OFFSET(0x1CF3D720)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKOVERDUETIME_OFFSET UNITYSDK_OFFSET(0x1CF3D8E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1CF3D520)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CF3F510)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_DETECTCXPAY_OFFSET UNITYSDK_OFFSET(0x1CF3F830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GENERATEXSTSACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1CF3EBC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETGOODSPLATFORMPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1CF3DDA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1CF3EFB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETUSERCOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1CF3DBD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_INNERCONSOLEPAY_OFFSET UNITYSDK_OFFSET(0x1CF3D780)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHCXPAY_OFFSET UNITYSDK_OFFSET(0x1CF3F050)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHHANDHELDPAY_OFFSET UNITYSDK_OFFSET(0x1CF3EED0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHPREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1CF3EFA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1CF3D040)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1CF3E5E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1CF3D940)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1CF3DDF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1CF3EDA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_0_OFFSET UNITYSDK_OFFSET(0x1CF40D90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_1_OFFSET UNITYSDK_OFFSET(0x1CF40DD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__COMMERCECHECKOUTCALLBACK_B__28_2_OFFSET UNITYSDK_OFFSET(0x1CF40E10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3CFD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__INNERCONSOLEPAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1CF40790)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld_TypeDefinitionIndex = 20859;

	class PayManagerCXHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase
	{
	public:
		// static const ::System::Int32 authTkenExpiredDay = 0xF; // 0x0
		// static const ::System::Int32 MAX_RETRY_TIMES = 0x5; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::String* collectionsId; // 0x98
		::System::String* authToken; // 0xA0
		::System::DateTime collectionsIdGenerateTime; // 0xA8
		::System::DateTime authTokenGenerateTime; // 0xB0
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

		::System::Boolean CheckHandheldPay(::System::Boolean isEnterGame)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKHANDHELDPAY_OFFSET))(this, isEnterGame);
		}

		::System::Boolean InnerConsolePay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_INNERCONSOLEPAY_OFFSET))(this);
		}

		::System::Void GetGoodsPlatformProducts(::Il2CppArray<::System::String*>* idList, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETGOODSPLATFORMPRODUCTS_OFFSET))(this, idList, callback);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTRETRIEVETOKEN_OFFSET))(this, callback);
		}

		::System::Void GetUserCollectionsId(::System::String* token, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GETUSERCOLLECTIONSID_OFFSET))(this, token, callback);
		}

		::System::Void RequestDetectPay(::System::String* collectionsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_REQUESTDETECTPAY_OFFSET))(this, collectionsId);
		}

		::System::Void GenerateXstsAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_GENERATEXSTSACCESSTOKEN_OFFSET))(this, callback, forceRefresh);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* productLabels)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_TRYGETPRODUCTS_OFFSET))(this, productLabels);
		}

		::System::Void LaunchHandheldPay(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHHANDHELDPAY_OFFSET))(this, product);
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

		::System::Boolean CheckOverdueTime(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKOVERDUETIME_OFFSET))(this, createTime);
		}

		::System::Boolean CheckCollectionsIdOverdue(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_CHECKCOLLECTIONSIDOVERDUE_OFFSET))(this, createTime);
		}

		::System::Void LaunchCXPay(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_LAUNCHCXPAY_OFFSET))(this, product);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_COMMERCECHECKOUTCALLBACK_OFFSET))(this, result);
		}

		::System::Void RetrieveToken(::System::String* aid, ::System::String* token, ::System::String* game, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_RETRIEVETOKEN_OFFSET))(this, aid, token, game, callback);
		}

		::System::Void DetectCXPay(::System::String* aid, ::System::String* token, ::System::String* game, ::System::String* region, ::System::String* uid, ::System::String* device, ::System::String* delivery_url, ::System::String* extra, ::System::String* auth_token, ::System::String* xsts_token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD_DETECTCXPAY_OFFSET))(this, aid, token, game, region, uid, device, delivery_url, extra, auth_token, xsts_token, callback);
		}

		::System::Void _InnerConsolePay_b__14_0(::System::String* newAuthToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD__INNERCONSOLEPAY_B__14_0_OFFSET))(this, newAuthToken);
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
