#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PERFORMANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9AF200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PerformanceInfo_TypeDefinitionIndex = 19641;

	class PerformanceInfo : public ::System::Object
	{
	public:
		::System::Int32 startAppMem; // 0x10
		::System::Int32 endAppMem; // 0x14
		::System::String* actionName; // 0x18
		::System::String* actionType; // 0x20
		::System::String* endType; // 0x28
		::System::Int32 time; // 0x30
		::System::String* performanceType; // 0x38
		::System::String* eventId; // 0x40
		::System::DateTime startTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEINFO__CTOR_OFFSET))(this);
		}
	};
}
