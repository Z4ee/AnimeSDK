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

#define MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0xA165E10)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0xA167D60)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0xA1672F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA162560)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET UNITYSDK_OFFSET(0xA1687D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_EXTRACTREQUESTID_OFFSET UNITYSDK_OFFSET(0xA165140)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GENERATEREQUESTID_OFFSET UNITYSDK_OFFSET(0xA161D90)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0xA1651D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0xA15FC50)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0xA1656E0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0xA160580)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA160E20)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET UNITYSDK_OFFSET(0xA1616C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA161270)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0xA161C50)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET UNITYSDK_OFFSET(0xA15FFA0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0xA160130)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA161B10)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1609D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET UNITYSDK_OFFSET(0xA166880)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1695B0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA169240)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET UNITYSDK_OFFSET(0xA161EF0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET UNITYSDK_OFFSET(0xA162390)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1510C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA169980)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface_TypeDefinitionIndex = 43919;

	class HoYoChannelInterface : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_requestIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC530);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_authTokenTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC538);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_consumeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC540);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkoutTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC548);
		}
		static ::System::Object** StaticGet_s_consumeLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC550);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult** StaticGet_s_initResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelInitResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC558);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_loginTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC560);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>** StaticGet_s_authTokenCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC568);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_waitHandle()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC570);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>** StaticGet_s_checkoutCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC578);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>** StaticGet_s_productsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC580);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>** StaticGet_s_loginCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC588);
		}
		static ::System::Object** StaticGet_s_productsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC590);
		}
		static ::System::Object** StaticGet_s_checkoutLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC598);
		}
		static ::System::Object** StaticGet_s_entitlementsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5A0);
		}
		static ::System::Object** StaticGet_s_authTokenLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5A8);
		}
		static ::System::Object** StaticGet_s_loginLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5B0);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>** StaticGet_s_gameOverlayCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5B8);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>** StaticGet_s_microTxnCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5C0);
		}
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>** StaticGet_s_entitlementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_productsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_entitlementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>** StaticGet_s_consumeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0xC5E8);
		}
		static ::System::Single* StaticGet__hoYoChannelNextTick()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x47A0);
		}
		static ::System::Boolean* StaticGet_s_gameOverlayRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x47A4);
		}
		static ::System::Boolean* StaticGet_s_microTxnRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x47A5);
		}
		static ::System::Boolean* StaticGet__useHoYoChannel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x47A6);
		}
		static ::System::Int64* StaticGet_s_requestIdCounter()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x47A8);
		}
		static ::System::Single* StaticGet__hoYoChannelNextCleanupTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x47B0);
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

		static ::System::Void LogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogLevel a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET))();
		}

		static ::System::String* ExtractRequestId(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_EXTRACTREQUESTID_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* Init(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET))(a1);
		}

		static ::System::Void OnInitCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Login(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET))(a1, a2);
		}

		static ::System::Void OnLoginCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void AuthToken(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Void OnAuthTokenCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Products(::MiHoYo::SDK::PC::OS::HoYoChannelProductsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelProductsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET))(a1, a2);
		}

		static ::System::Void OnProductsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Checkout(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET))(a1, a2);
		}

		static ::System::Void OnCheckoutCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CheckEntitlements(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET))(a1, a2);
		}

		static ::System::Void OnEntitlementsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Consume(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET))(a1, a2);
		}

		static ::System::Void OnConsumeCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterMicroTxnCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterGameOverlayCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterCallback(::MiHoYo::SDK::HoYoChannelSDK_CallbackType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_CallbackType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void OnMicroTxnCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void OnGameOverlayCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
