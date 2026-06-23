#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_CallbackType.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelGameplayServices; }
namespace MiHoYo::SDK { class HoYoChannelOnlineServices; }
namespace MiHoYo::SDK { class HoYoChannelSocialServices; }
namespace MiHoYo::SDK { class HoYoChannelSystemFunctions; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthStatusResult; }
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
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class ManualResetEvent; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1C553B10)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1C554D10)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1C554710)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1C550D80)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET UNITYSDK_OFFSET(0x1C555310)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_GAMEPLAYSERVICES_OFFSET UNITYSDK_OFFSET(0x1C54DED0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_ONLINESERVICES_OFFSET UNITYSDK_OFFSET(0x1C54DC30)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SOCIAL_OFFSET UNITYSDK_OFFSET(0x1C54DDF0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SYSTEMINTERFACE_OFFSET UNITYSDK_OFFSET(0x1C54DD10)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x1C553120)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1C54E7E0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C553540)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHSTATUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C5504B0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54EFD0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54F710)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54FE50)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54FAB0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C550350)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54EA50)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54EC30)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C5501F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C54F370)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C550610)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x1C554110)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_QUERY_OFFSET UNITYSDK_OFFSET(0x1C556A30)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERAUTHSTATUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C556750)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C556470)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C555910)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET UNITYSDK_OFFSET(0x1C5507F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET UNITYSDK_OFFSET(0x1C550B70)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C555BE0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C556ED0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface_TypeDefinitionIndex = 36909;

	class HoYoChannelInterface : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_consumeLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28140);
		}
		static ::System::Object** StaticGet_s_entitlementsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28148);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult** StaticGet_s_queryResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28150);
		}
		static ::System::Object** StaticGet_s_productsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28158);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>** StaticGet_s_authStatusCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28160);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_waitHandle()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28168);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>** StaticGet_s_entitlementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28170);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>** StaticGet_s_authTokenCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28178);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_queryWaitHandle()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28180);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>** StaticGet_s_loginCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28188);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_authTokenTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28190);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkoutTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28198);
		}
		static ::MiHoYo::SDK::HoYoChannelSystemFunctions** StaticGet_s_systemInterface()
		{
			return (::MiHoYo::SDK::HoYoChannelSystemFunctions**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>** StaticGet_s_consumeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>** StaticGet_s_checkoutCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281B0);
		}
		static ::MiHoYo::SDK::HoYoChannelSocialServices** StaticGet_s_social()
		{
			return (::MiHoYo::SDK::HoYoChannelSocialServices**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_entitlementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281C0);
		}
		static ::MiHoYo::SDK::HoYoChannelGameplayServices** StaticGet_s_gameplayServices()
		{
			return (::MiHoYo::SDK::HoYoChannelGameplayServices**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281C8);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>** StaticGet_s_microTxnCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>** StaticGet_s_productsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281D8);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>** StaticGet_s_gameOverlayCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281E0);
		}
		static ::MiHoYo::SDK::HoYoChannelOnlineServices** StaticGet_s_onlineServices()
		{
			return (::MiHoYo::SDK::HoYoChannelOnlineServices**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_consumeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281F0);
		}
		static ::System::Object** StaticGet_s_checkoutLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x281F8);
		}
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28200);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_productsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28208);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_loginTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28210);
		}
		static ::System::Object** StaticGet_s_authTokenLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28218);
		}
		static ::System::Object** StaticGet_s_loginLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28220);
		}
		static ::System::Object** StaticGet_s_queryLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28228);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult** StaticGet_s_initResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelInitResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x28230);
		}
		static ::System::Single* StaticGet__hoYoChannelNextTick()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8780);
		}
		static ::System::Boolean* StaticGet_s_gameOverlayRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8784);
		}
		static ::System::Boolean* StaticGet_s_microTxnRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8785);
		}
		static ::System::Boolean* StaticGet__useHoYoChannel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8786);
		}
		static ::System::Boolean* StaticGet_s_authStatusRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8787);
		}
		static ::System::Single* StaticGet__hoYoChannelNextCleanupTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8788);
		}
		// static const ::System::Double TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double TIMEOUT_CHECKOUT_SECONDS; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelOnlineServices* get_OnlineServices()
		{
			return ((::MiHoYo::SDK::HoYoChannelOnlineServices*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_ONLINESERVICES_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelSocialServices* get_Social()
		{
			return ((::MiHoYo::SDK::HoYoChannelSocialServices*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SOCIAL_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelSystemFunctions* get_SystemInterface()
		{
			return ((::MiHoYo::SDK::HoYoChannelSystemFunctions*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SYSTEMINTERFACE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelGameplayServices* get_GameplayServices()
		{
			return ((::MiHoYo::SDK::HoYoChannelGameplayServices*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_GAMEPLAYSERVICES_OFFSET))();
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

		static ::System::Void RegisterAuthStatusChangedCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERAUTHSTATUSCHANGEDCALLBACK_OFFSET))(callback);
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

		static ::System::Void OnAuthStatusChangedCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHSTATUSCHANGEDCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Query(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams* param)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_QUERY_OFFSET))(param);
		}

		static ::System::Void OnQueryCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONQUERYCALLBACK_OFFSET))(resultCode, jsonResponse);
		}
	};
}
