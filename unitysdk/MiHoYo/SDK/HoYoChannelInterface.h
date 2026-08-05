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

#define MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1D950690)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1D9517A0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1D9511F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1D94DA60)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET UNITYSDK_OFFSET(0x1D951D50)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_GAMEPLAYSERVICES_OFFSET UNITYSDK_OFFSET(0x1D94AB80)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_ONLINESERVICES_OFFSET UNITYSDK_OFFSET(0x1D94A8E0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SOCIAL_OFFSET UNITYSDK_OFFSET(0x1D94AAA0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SYSTEMINTERFACE_OFFSET UNITYSDK_OFFSET(0x1D94A9C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x1D94FD00)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1D94B4C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x1D950120)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHSTATUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94D190)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94BCB0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94C3F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94CB30)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94C790)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94D030)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94B730)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94B910)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94CED0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94C050)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D94D2F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x1D950C40)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_QUERY_OFFSET UNITYSDK_OFFSET(0x1D953400)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERAUTHSTATUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D953120)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D952E40)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D952300)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET UNITYSDK_OFFSET(0x1D94D4D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET UNITYSDK_OFFSET(0x1D94D850)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D9525D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9538A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface_TypeDefinitionIndex = 37570;

	class HoYoChannelInterface : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelGameplayServices** StaticGet_s_gameplayServices()
		{
			return (::MiHoYo::SDK::HoYoChannelGameplayServices**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A30);
		}
		static ::System::Object** StaticGet_s_loginLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_entitlementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A40);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>** StaticGet_s_microTxnCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A48);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>** StaticGet_s_productsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A50);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_waitHandle()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A58);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_loginTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_productsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A68);
		}
		static ::MiHoYo::SDK::HoYoChannelOnlineServices** StaticGet_s_onlineServices()
		{
			return (::MiHoYo::SDK::HoYoChannelOnlineServices**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A70);
		}
		static ::System::Object** StaticGet_s_productsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A78);
		}
		static ::MiHoYo::SDK::HoYoChannelSocialServices** StaticGet_s_social()
		{
			return (::MiHoYo::SDK::HoYoChannelSocialServices**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkoutTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A88);
		}
		static ::MiHoYo::SDK::HoYoChannelSystemFunctions** StaticGet_s_systemInterface()
		{
			return (::MiHoYo::SDK::HoYoChannelSystemFunctions**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A90);
		}
		static ::System::Object** StaticGet_s_consumeLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29A98);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>** StaticGet_s_authStatusCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AA0);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_queryWaitHandle()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>** StaticGet_s_checkoutCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AB0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult** StaticGet_s_queryResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AB8);
		}
		static ::System::Object** StaticGet_s_checkoutLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AC0);
		}
		static ::System::Object** StaticGet_s_entitlementsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_consumeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>** StaticGet_s_loginCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AD8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult** StaticGet_s_initResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelInitResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>** StaticGet_s_entitlementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AE8);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>** StaticGet_s_gameOverlayCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_authTokenTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29AF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>** StaticGet_s_authTokenCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29B00);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>** StaticGet_s_consumeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29B08);
		}
		static ::System::Object** StaticGet_s_queryLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29B10);
		}
		static ::System::Object** StaticGet_s_authTokenLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29B18);
		}
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x29B20);
		}
		static ::System::Boolean* StaticGet__useHoYoChannel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8860);
		}
		static ::System::Boolean* StaticGet_s_microTxnRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8861);
		}
		static ::System::Boolean* StaticGet_s_gameOverlayRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8862);
		}
		static ::System::Boolean* StaticGet_s_authStatusRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8863);
		}
		static ::System::Single* StaticGet__hoYoChannelNextCleanupTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8864);
		}
		static ::System::Single* StaticGet__hoYoChannelNextTick()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface_TypeDefinitionIndex)->GetStaticField(0x8868);
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
