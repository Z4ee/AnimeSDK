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

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_CHECKOUTENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x198C8AE0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_COMBINEPRODUCTS_OFFSET UNITYSDK_OFFSET(0x198C3F20)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x198C7360)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x198C3990)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x198C12F0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_DEVID_OFFSET UNITYSDK_OFFSET(0x198C1230)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x198C1170)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_INITSDK_OFFSET UNITYSDK_OFFSET(0x198C2BE0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ISEOSCHANNEL_OFFSET UNITYSDK_OFFSET(0x198C24F0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x198C6BE0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGREPORTEOS_OFFSET UNITYSDK_OFFSET(0x198C1350)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x198C8DD0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_PAY_OFFSET UNITYSDK_OFFSET(0x198C7E20)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_QUERYPRODUCTS_OFFSET UNITYSDK_OFFSET(0x198C3D60)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETCMDLINE_OFFSET UNITYSDK_OFFSET(0x198C19C0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETEPICLOGGING_OFFSET UNITYSDK_OFFSET(0x198C2760)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x198C1290)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_DEVID_OFFSET UNITYSDK_OFFSET(0x198C11D0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x198C1110)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_UPDATE_OFFSET UNITYSDK_OFFSET(0x198C8C60)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C9080)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_TypeDefinitionIndex = 35124;

	class MiHoYoSDKEOSInterface : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_epicTraceId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B00);
		}
		static ::Epic::OnlineServices::Platform::PlatformInterface** StaticGet_platform()
		{
			return (::Epic::OnlineServices::Platform::PlatformInterface**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B08);
		}
		static ::System::Collections::Generic::List_1<::Epic::OnlineServices::Ecom::CatalogOffer*>** StaticGet_catalogOffers()
		{
			return (::System::Collections::Generic::List_1<::Epic::OnlineServices::Ecom::CatalogOffer*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B10);
		}
		static ::MiHoYo::SDK::MiHoYoSDKEOSInterface** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKEOSInterface**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B18);
		}
		static ::System::String** StaticGet__devId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B20);
		}
		static ::System::String** StaticGet__token_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B28);
		}
		static ::Epic::OnlineServices::EpicAccountId** StaticGet_localUserId()
		{
			return (::Epic::OnlineServices::EpicAccountId**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B30);
		}
		static ::MiHoYo::SDK::MiHoYoSDKEOSPluginImport** StaticGet_gfxPluginEOSSDK()
		{
			return (::MiHoYo::SDK::MiHoYoSDKEOSPluginImport**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B38);
		}
		static ::MiHoYo::SDK::JSONNode** StaticGet_eosOfferIdNameMap()
		{
			return (::MiHoYo::SDK::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B40);
		}
		static ::MiHoYo::SDK::JSONArray** StaticGet_productList()
		{
			return (::MiHoYo::SDK::JSONArray**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x26B48);
		}
		static ::System::Int32* StaticGet_retryTimes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x83F0);
		}
		static ::Epic::OnlineServices::Auth::LoginCredentialType* StaticGet__authType_k__BackingField()
		{
			return (::Epic::OnlineServices::Auth::LoginCredentialType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x83F4);
		}
		static ::System::UInt64* StaticGet_AddNotifyLoginStatusChangedHandle()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x83F8);
		}
		static ::System::Boolean* StaticGet_isFirstLogin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface_TypeDefinitionIndex)->GetStaticField(0x8400);
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

		static ::System::Void set_token(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_TOKEN_OFFSET))(value);
		}

		static ::System::String* get_token()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_TOKEN_OFFSET))();
		}

		static ::System::Void set_devId(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_DEVID_OFFSET))(value);
		}

		static ::System::String* get_devId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_DEVID_OFFSET))();
		}

		static ::System::Void set_authType(::Epic::OnlineServices::Auth::LoginCredentialType value)
		{
			return ((::System::Void(*)(::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SET_AUTHTYPE_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Auth::LoginCredentialType get_authType()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GET_AUTHTYPE_OFFSET))();
		}

		static ::System::Void LogReportEOS(::MiHoYo::SDK::KibanaLogLevel level, ::System::String* key, ::MiHoYo::SDK::JSONObject* objectJson)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGREPORTEOS_OFFSET))(level, key, objectJson);
		}

		static ::System::Boolean SetCmdLine(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* cmdLineMap)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETCMDLINE_OFFSET))(cmdLineMap);
		}

		static ::System::Boolean IsEOSChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ISEOSCHANNEL_OFFSET))();
		}

		static ::System::Void SetEpicLogging()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_SETEPICLOGGING_OFFSET))();
		}

		static ::System::Boolean InitSDK(::MiHoYo::SDK::EOSParametersModel* paramModel)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::EOSParametersModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_INITSDK_OFFSET))(paramModel);
		}

		static ::System::Void GetProductList(::MiHoYo::SDK::JSONArray* productArray, ::System::Action_1<::MiHoYo::SDK::JSONArray*>* callback, ::System::String* traceId)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_1<::MiHoYo::SDK::JSONArray*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETPRODUCTLIST_OFFSET))(productArray, callback, traceId);
		}

		static ::System::Void QueryProducts(::System::Action_1<::System::Boolean>* callback, ::System::String* traceId)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_QUERYPRODUCTS_OFFSET))(callback, traceId);
		}

		static ::System::Void CombineProducts(::MiHoYo::SDK::JSONArray* productArray, ::System::String* traceId)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_COMBINEPRODUCTS_OFFSET))(productArray, traceId);
		}

		static ::System::Void Login(::System::Action_2<::System::Int32, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_LOGIN_OFFSET))(callback);
		}

		static ::System::Void Pay(::System::String* goodsId, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* callback, ::System::String* payTrace)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_PAY_OFFSET))(goodsId, callback, payTrace);
		}

		static ::System::Void CheckoutEntitlements(::System::Action_2<::System::String*, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_CHECKOUTENTITLEMENTS_OFFSET))(callback);
		}

		static ::Epic::OnlineServices::Result GetAuthToken(::Epic::OnlineServices::EpicAccountId* userId, ::Epic::OnlineServices::Auth::Token*& outToken)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::Auth::Token*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_GETAUTHTOKEN_OFFSET))(userId, outToken);
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
