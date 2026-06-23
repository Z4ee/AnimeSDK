#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATELOGLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6B150)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateLogLevel_TypeDefinitionIndex = 19310;

	class AgeGateLogLevel : public ::System::Object
	{
	public:
		// static const ::System::Int32 DEFAULT = 0x0; // 0x0
		// static const ::System::Int32 US_CHILD = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATELOGLEVEL__CTOR_OFFSET))(this);
		}
	};
}
