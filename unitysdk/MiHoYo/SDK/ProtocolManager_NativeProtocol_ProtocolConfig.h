#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_PROTOCOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCE8A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_NativeProtocol_ProtocolConfig_TypeDefinitionIndex = 7038;

	class ProtocolManager_NativeProtocol_ProtocolConfig : public ::System::Object
	{
	public:
		::System::String* config_key; // 0x10
		::System::String* config_value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_PROTOCOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
