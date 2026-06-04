#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0xA1667D0)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0xA168720)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET UNITYSDK_OFFSET(0xA167CB0)
#define MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET UNITYSDK_OFFSET(0xA169190)
#define MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET UNITYSDK_OFFSET(0xA165640)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET UNITYSDK_OFFSET(0xA165D60)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET UNITYSDK_OFFSET(0xA162270)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET UNITYSDK_OFFSET(0xA167240)
#define MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA169520)
#define MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET UNITYSDK_OFFSET(0xA162300)
#define MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET UNITYSDK_OFFSET(0xA1650C0)
#define MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1698A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_TypeDefinitionIndex = 43935;

	class HoYoChannelSDK : public ::System::Object
	{
	public:
		// static const ::System::String* DllName; // 0x0

		static ::System::Void Init(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void Login(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET))(a1, a2);
		}

		static ::System::Void AuthToken(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Void Products(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET))(a1, a2);
		}

		static ::System::Void Checkout(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET))(a1, a2);
		}

		static ::System::Void CheckEntitlements(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET))(a1, a2);
		}

		static ::System::Void Consume(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCallback(::System::Int32 a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void UnregisterCallback(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET))();
		}

		static ::System::Void SetLogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogHandler* a1, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogHandler*, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void Print(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET))(a1);
		}
	};
}
