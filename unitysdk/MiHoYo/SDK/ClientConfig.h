#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigIniModel; }
namespace System { class String; }

#define MIHOYO_SDK_CLIENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A8880)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ClientConfig_TypeDefinitionIndex = 7845;

	class ClientConfig : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ClientType clientType; // 0x10
		::System::String* channelId; // 0x18
		::System::String* gameKey; // 0x20
		::System::String* game; // 0x28
		::System::String* version; // 0x30
		::MiHoYo::SDK::SubChannelType sub_channel_id; // 0x38
		::MiHoYo::SDK::ConfigIniModel* ini; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLIENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
