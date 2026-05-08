#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A402530)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSConfig_TypeDefinitionIndex = 18772;

	class PSConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
