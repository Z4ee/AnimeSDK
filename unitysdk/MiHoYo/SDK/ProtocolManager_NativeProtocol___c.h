#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1840B4D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1840B510)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1840B520)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_NativeProtocol___c_TypeDefinitionIndex = 7987;

	class ProtocolManager_NativeProtocol___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__13_0()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_NativeProtocol___c_TypeDefinitionIndex)->GetStaticField(0x1ADD0);
		}
		static ::MiHoYo::SDK::ProtocolManager_NativeProtocol___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ProtocolManager_NativeProtocol___c**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_NativeProtocol___c_TypeDefinitionIndex)->GetStaticField(0x1ADD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowLauncherProtocolCompliance_b__13_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_B__13_0_OFFSET))(this, a1);
		}
	};
}
