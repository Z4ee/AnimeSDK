#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x183D21D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSConfig_TypeDefinitionIndex = 7853;

	class PSConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
