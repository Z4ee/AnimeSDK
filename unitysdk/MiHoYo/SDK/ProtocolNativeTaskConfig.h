#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SwitchBaseConfig.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLNATIVETASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB2B60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolNativeTaskConfig_TypeDefinitionIndex = 7883;

	class ProtocolNativeTaskConfig : public ::MiHoYo::SDK::SwitchBaseConfig
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLNATIVETASKCONFIG__CTOR_OFFSET))(this, a1);
		}
	};
}
