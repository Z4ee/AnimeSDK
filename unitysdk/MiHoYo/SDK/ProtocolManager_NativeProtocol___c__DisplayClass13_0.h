#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager_NativeProtocol; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4EA00)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__DISPLAYCLASS13_0__TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_B__1_OFFSET UNITYSDK_OFFSET(0x1BB4EA10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_NativeProtocol___c__DisplayClass13_0_TypeDefinitionIndex = 19805;

	class ProtocolManager_NativeProtocol___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::ProtocolManager_NativeProtocol* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowLauncherProtocolCompliance_b__1(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL___C__DISPLAYCLASS13_0__TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_B__1_OFFSET))(this, strArgs);
		}
	};
}
