#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SwitchBaseConfig.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLNATIVETASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB2710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolNativeTaskConfig_TypeDefinitionIndex = 20037;

	class ProtocolNativeTaskConfig : public ::MiHoYo::SDK::SwitchBaseConfig
	{
	public:
		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLNATIVETASKCONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
