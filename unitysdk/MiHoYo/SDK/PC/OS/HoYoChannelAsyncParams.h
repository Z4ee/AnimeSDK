#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELASYNCPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB41CE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAsyncParams_TypeDefinitionIndex = 20333;

	class HoYoChannelAsyncParams : public ::System::Object
	{
	public:
		::System::String* requestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELASYNCPARAMS__CTOR_OFFSET))(this);
		}
	};
}
