#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1A1E7110)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1A1E72F0)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1A1E7250)
#define MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET UNITYSDK_OFFSET(0x1A1E7390)
#define MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET UNITYSDK_OFFSET(0x1A1E6FD0)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET UNITYSDK_OFFSET(0x1A1E7070)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET UNITYSDK_OFFSET(0x1A1E7650)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x1A1E71B0)
#define MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A1E7430)
#define MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1A1E75C0)
#define MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET UNITYSDK_OFFSET(0x1A1E7540)
#define MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A1E74C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_TypeDefinitionIndex = 35345;

	class HoYoChannelSDK : public ::System::Object
	{
	public:
		// static const ::System::String* DllName; // 0x0

		static ::System::Void Init(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Login(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET))(jsonParams, callback);
		}

		static ::System::Void AuthToken(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Products(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Checkout(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET))(jsonParams, callback);
		}

		static ::System::Void CheckEntitlements(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Consume(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET))(jsonParams, callback);
		}

		static ::System::Void RegisterCallback(::System::Int32 callbackType, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET))(callbackType, callback);
		}

		static ::System::Void UnregisterCallback(::System::Int32 callbackType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET))(callbackType);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET))();
		}

		static ::System::Void SetLogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogHandler* handler, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel minLogLevel)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogHandler*, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET))(handler, minLogLevel);
		}

		static ::System::Void Print(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET))(message);
		}
	};
}
