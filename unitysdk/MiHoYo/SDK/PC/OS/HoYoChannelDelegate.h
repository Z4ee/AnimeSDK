#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AuthTokenDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckoutDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ConsumeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InitDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LoginDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ProductsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UnregisterCallbackDelegate; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4580)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_TypeDefinitionIndex = 7518;

	class HoYoChannelDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet_RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C020);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet_UnregisterCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C028);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet_RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C030);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet_AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C038);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet_Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C040);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C048);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet_Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C050);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet_CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C058);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet_Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C060);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet_Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1C068);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
