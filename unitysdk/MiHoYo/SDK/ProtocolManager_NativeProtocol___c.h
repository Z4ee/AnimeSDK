#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB2810)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB2850)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CEB2860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_NativeProtocol___c_TypeDefinitionIndex = 20154;

	class ProtocolManager_NativeProtocol___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__13_0()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_NativeProtocol___c_TypeDefinitionIndex)->GetStaticField(0xB100);
		}
		static ::MiHoYo::SDK::ProtocolManager_NativeProtocol___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ProtocolManager_NativeProtocol___c**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_NativeProtocol___c_TypeDefinitionIndex)->GetStaticField(0xB108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowLauncherProtocolCompliance_b__13_0(::System::String* strConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_B__13_0_OFFSET))(this, strConfig);
		}
	};
}
