#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_CallbackType.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGameOverlayResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelMicroTxnResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class ManualResetEvent; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x8D0DAE0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x8D0FB80)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x8D0F0A0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x8D0A790)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET UNITYSDK_OFFSET(0x8D10660)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_EXTRACTREQUESTID_OFFSET UNITYSDK_OFFSET(0x8D0CE20)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GENERATEREQUESTID_OFFSET UNITYSDK_OFFSET(0x8D09FC0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x8D0CEB0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x8D08110)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x8D0D3D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D08A00)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D091C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET UNITYSDK_OFFSET(0x8D09980)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D095A0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D09E90)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D08460)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D08620)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D09D60)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D08DE0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x8D0E5C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D114A0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D11140)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET UNITYSDK_OFFSET(0x8D0A120)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET UNITYSDK_OFFSET(0x8D0A5C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x8CF9FD0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D11850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface_TypeDefinitionIndex = 43116;

	class HoYoChannelInterface : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>** StaticGet_s_checkoutCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49350);
		}
		static ::System::Object** StaticGet_s_checkoutLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49358);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult** StaticGet_s_initResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelInitResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49360);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_loginTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49368);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_entitlementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49370);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_waitHandle()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49378);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkoutTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49380);
		}
		static ::System::Object** StaticGet_s_entitlementsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49388);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>** StaticGet_s_microTxnCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49390);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_consumeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49398);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>** StaticGet_s_gameOverlayCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_productsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493A8);
		}
		static ::System::Object** StaticGet_s_requestIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>** StaticGet_s_consumeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493B8);
		}
		static ::System::Object** StaticGet_s_authTokenLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_authTokenTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>** StaticGet_s_productsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493D0);
		}
		static ::System::Object** StaticGet_s_loginLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493D8);
		}
		static ::System::Object** StaticGet_s_productsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>** StaticGet_s_entitlementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493E8);
		}
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493F0);
		}
		static ::System::Object** StaticGet_s_consumeLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x493F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>** StaticGet_s_authTokenCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49400);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>** StaticGet_s_loginCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x49408);
		}
		static ::System::Single* StaticGet__hoYoChannelNextTick()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xFA00);
		}
		static ::System::Boolean* StaticGet__useHoYoChannel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xFA04);
		}
		static ::System::Boolean* StaticGet_s_gameOverlayRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xFA05);
		}
		static ::System::Boolean* StaticGet_s_microTxnRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xFA06);
		}
		static ::System::Single* StaticGet__hoYoChannelNextCleanupTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xFA08);
		}
		static ::System::Int64* StaticGet_s_requestIdCounter()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xFA10);
		}
		// static const ::System::Double TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double TIMEOUT_CHECKOUT_SECONDS; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::String* GenerateRequestId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GENERATEREQUESTID_OFFSET))();
		}

		static ::System::Void Setup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET))();
		}

		static ::System::Void LogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogLevel level, ::System::String* message)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET))(level, message);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET))();
		}

		static ::System::String* ExtractRequestId(::System::String* jsonResponse)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_EXTRACTREQUESTID_OFFSET))(jsonResponse);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* Init(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* jsonParams)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET))(jsonParams);
		}

		static ::System::Void OnInitCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void Login(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET))(param, callback);
		}

		static ::System::Void OnLoginCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void AuthToken(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET))(param, callback);
		}

		static ::System::Void OnAuthTokenCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void Products(::MiHoYo::SDK::PC::OS::HoYoChannelProductsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelProductsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET))(param, callback);
		}

		static ::System::Void OnProductsCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void Checkout(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET))(param, callback);
		}

		static ::System::Void OnCheckoutCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void CheckEntitlements(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET))(param, callback);
		}

		static ::System::Void OnEntitlementsCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void Consume(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET))(param, callback);
		}

		static ::System::Void OnConsumeCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void RegisterMicroTxnCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET))(callback);
		}

		static ::System::Void RegisterGameOverlayCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET))(callback);
		}

		static ::System::Void UnregisterCallback(::MiHoYo::SDK::HoYoChannelSDK_CallbackType type)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_CallbackType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET))(type);
		}

		static ::System::Void OnMicroTxnCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void OnGameOverlayCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
