#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F900E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSConfig_TypeDefinitionIndex = 6905;

	class PSConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
