#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCredentialType.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class Token; }
namespace Epic::OnlineServices::Ecom { class CatalogOffer; }
namespace Epic::OnlineServices::Platform { class PlatformInterface; }
namespace MiHoYo::SDK { class EOSParametersModel; }
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class MiHoYoSDKEOSPluginImport; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_CHECKOUTENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1948B160)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_COMBINEPRODUCTS_OFFSET UNITYSDK_OFFSET(0x19487CA0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x19489DF0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x194877C0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x194850E0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_DEVID_OFFSET UNITYSDK_OFFSET(0x19485020)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x19484F60)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_INITSDK_OFFSET UNITYSDK_OFFSET(0x19486910)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ISEOSCHANNEL_OFFSET UNITYSDK_OFFSET(0x19486200)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x19489710)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGREPORTEOS_OFFSET UNITYSDK_OFFSET(0x19485140)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1948B470)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_PAY_OFFSET UNITYSDK_OFFSET(0x1948A4D0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_QUERYPRODUCTS_OFFSET UNITYSDK_OFFSET(0x19487AC0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETCMDLINE_OFFSET UNITYSDK_OFFSET(0x194856B0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETEPICLOGGING_OFFSET UNITYSDK_OFFSET(0x19486470)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x19485080)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_DEVID_OFFSET UNITYSDK_OFFSET(0x19484FC0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x19484F00)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1948B300)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1948B6E0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1948B6D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_TypeDefinitionIndex = 46760;

	class MiHoYoSDKEOSInterface : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::JSONArray** StaticGet_productList()
		{
			return (::MiHoYo::SDK::JSONArray**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54100);
		}
		static ::System::String** StaticGet__devId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54108);
		}
		static ::Epic::OnlineServices::Platform::PlatformInterface** StaticGet_platform()
		{
			return (::Epic::OnlineServices::Platform::PlatformInterface**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54110);
		}
		static ::MiHoYo::SDK::MiHoYoSDKEOSInterface** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKEOSInterface**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54118);
		}
		static ::MiHoYo::SDK::MiHoYoSDKEOSPluginImport** StaticGet_gfxPluginEOSSDK()
		{
			return (::MiHoYo::SDK::MiHoYoSDKEOSPluginImport**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54120);
		}
		static ::Epic::OnlineServices::EpicAccountId** StaticGet_localUserId()
		{
			return (::Epic::OnlineServices::EpicAccountId**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54128);
		}
		static ::MiHoYo::SDK::JSONNode** StaticGet_eosOfferIdNameMap()
		{
			return (::MiHoYo::SDK::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54130);
		}
		static ::System::String** StaticGet_epicTraceId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54138);
		}
		static ::System::Collections::Generic::List_1<::Epic::OnlineServices::Ecom::CatalogOffer*>** StaticGet_catalogOffers()
		{
			return (::System::Collections::Generic::List_1<::Epic::OnlineServices::Ecom::CatalogOffer*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54140);
		}
		static ::System::String** StaticGet__token_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x54148);
		}
		static ::System::UInt64* StaticGet_AddNotifyLoginStatusChangedHandle()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x114A0);
		}
		static ::System::Boolean* StaticGet_isFirstLogin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x114A8);
		}
		static ::System::Int32* StaticGet_retryTimes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x114AC);
		}
		static ::Epic::OnlineServices::Auth::LoginCredentialType* StaticGet__authType_k__BackingField()
		{
			return (::Epic::OnlineServices::Auth::LoginCredentialType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x114B0);
		}
		// static const ::System::Int32 MaxRetryTimes = 0x3; // 0x0
		// static const ::System::String* EOS_OFFER_ID_MAP_KEY; // 0x0
		// static const ::System::Single PlatformTickInterval; // 0x0
		::System::Single PlatformTickTimer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Void set_token(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_TOKEN_OFFSET))(a1);
		}

		static ::System::String* get_token()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_TOKEN_OFFSET))();
		}

		static ::System::Void set_devId(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_DEVID_OFFSET))(a1);
		}

		static ::System::String* get_devId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_DEVID_OFFSET))();
		}

		static ::System::Void set_authType(::Epic::OnlineServices::Auth::LoginCredentialType a1)
		{
			return ((::System::Void(*)(::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_AUTHTYPE_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::Auth::LoginCredentialType get_authType()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_AUTHTYPE_OFFSET))();
		}

		static ::System::Void LogReportEOS(::MiHoYo::SDK::KibanaLogLevel a1, ::System::String* a2, ::MiHoYo::SDK::JSONObject* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGREPORTEOS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetCmdLine(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETCMDLINE_OFFSET))(a1);
		}

		static ::System::Boolean IsEOSChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ISEOSCHANNEL_OFFSET))();
		}

		static ::System::Void SetEpicLogging()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETEPICLOGGING_OFFSET))();
		}

		static ::System::Boolean InitSDK(::MiHoYo::SDK::EOSParametersModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::EOSParametersModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_INITSDK_OFFSET))(a1);
		}

		static ::System::Void GetProductList(::MiHoYo::SDK::JSONArray* a1, ::System::Action_1<::MiHoYo::SDK::JSONArray*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_1<::MiHoYo::SDK::JSONArray*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETPRODUCTLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Void QueryProducts(::System::Action_1<::System::Boolean>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_QUERYPRODUCTS_OFFSET))(a1, a2);
		}

		static ::System::Void CombineProducts(::MiHoYo::SDK::JSONArray* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_COMBINEPRODUCTS_OFFSET))(a1, a2);
		}

		static ::System::Void Login(::System::Action_2<::System::Int32, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGIN_OFFSET))(a1);
		}

		static ::System::Void Pay(::System::String* a1, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_PAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CheckoutEntitlements(::System::Action_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_CHECKOUTENTITLEMENTS_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::Result GetAuthToken(::Epic::OnlineServices::EpicAccountId* a1, ::Epic::OnlineServices::Auth::Token*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::Auth::Token*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETAUTHTOKEN_OFFSET))(a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_UPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ONAPPLICATIONQUIT_OFFSET))(this);
		}
	};
}
