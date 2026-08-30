#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class WeGameDelegate_AsyncAcquireSessionTicketDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_AsyncShowPaymentWindowDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_DoAwakeDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_GetPlayerIDDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_GetPlayerNameDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_RailFireEventsDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_RegisterCallbackDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_SetNotifyWindowEnableDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_UnRegisterCallbackDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x1CD7B370)
#define MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEEXIT_OFFSET UNITYSDK_OFFSET(0x1CD7B470)
#define MIHOYO_SDK_WEGAMEDELEGATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7B570)
#define MIHOYO_SDK_WEGAMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7B560)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_TypeDefinitionIndex = 7656;

	class WeGameDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::WeGameDelegate_GetPlayerIDDelegate** StaticGet_GetPlayerID()
		{
			return (::MiHoYo::SDK::WeGameDelegate_GetPlayerIDDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F50);
		}
		static ::MiHoYo::SDK::WeGameDelegate_SetNotifyWindowEnableDelegate** StaticGet_SetNotifyWindowEnable()
		{
			return (::MiHoYo::SDK::WeGameDelegate_SetNotifyWindowEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F58);
		}
		static ::MiHoYo::SDK::WeGameDelegate_DoAwakeDelegate** StaticGet_DoAwake()
		{
			return (::MiHoYo::SDK::WeGameDelegate_DoAwakeDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F60);
		}
		static ::MiHoYo::SDK::WeGameDelegate_AsyncShowPaymentWindowDelegate** StaticGet_AsyncShowPaymentWindow()
		{
			return (::MiHoYo::SDK::WeGameDelegate_AsyncShowPaymentWindowDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F68);
		}
		static ::MiHoYo::SDK::WeGameDelegate_UnRegisterCallbackDelegate** StaticGet_UnRegisterCallback()
		{
			return (::MiHoYo::SDK::WeGameDelegate_UnRegisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F70);
		}
		static ::MiHoYo::SDK::WeGameDelegate_RegisterCallbackDelegate** StaticGet_RegisterCallback()
		{
			return (::MiHoYo::SDK::WeGameDelegate_RegisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F78);
		}
		static ::MiHoYo::SDK::WeGameDelegate_RailFireEventsDelegate** StaticGet_RailFireEvents()
		{
			return (::MiHoYo::SDK::WeGameDelegate_RailFireEventsDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F80);
		}
		static ::MiHoYo::SDK::WeGameDelegate_AsyncAcquireSessionTicketDelegate** StaticGet_AsyncAcquireSessionTicket()
		{
			return (::MiHoYo::SDK::WeGameDelegate_AsyncAcquireSessionTicketDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F88);
		}
		static ::MiHoYo::SDK::WeGameDelegate_GetPlayerNameDelegate** StaticGet_GetPlayerName()
		{
			return (::MiHoYo::SDK::WeGameDelegate_GetPlayerNameDelegate**)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0x26F90);
		}
		static ::System::Boolean* StaticGet_antiAddictionNotifyEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeGameDelegate_TypeDefinitionIndex)->GetStaticField(0xB900);
		}
		// static const ::System::UInt64 GameId = 0x1E8A49; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE__CCTOR_OFFSET))();
		}

		static ::System::Void OnWeGameAntiAddiction(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEANTIADDICTION_OFFSET))(a1);
		}

		static ::System::Void OnWeGameExit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEEXIT_OFFSET))(a1);
		}
	};
}
