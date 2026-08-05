#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }

#define FOUNDATION_AUTOSTOPWATCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E751D90)
#define FOUNDATION_AUTOSTOPWATCH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E751EA0)
#define FOUNDATION_AUTOSTOPWATCH_STARTSTOPWATCH_OFFSET UNITYSDK_OFFSET(0x1E751D40)
#define FOUNDATION_AUTOSTOPWATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E751C60)

namespace Foundation
{
	inline static constexpr unsigned int AutoStopWatch_TypeDefinitionIndex = 8279;

	class AutoStopWatch : public ::System::Object
	{
	public:
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x10
		::System::String* tips; // 0x18
		::System::Boolean disposed; // 0x20
		::System::Int32 warningline; // 0x24

		::System::Void _ctor(::System::String* tips, ::System::Int32 warningline)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOSTOPWATCH__CTOR_OFFSET))(this, tips, warningline);
		}

		static ::Foundation::AutoStopWatch* StartStopWatch(::System::String* tips, ::System::Int32 warningline)
		{
			return ((::Foundation::AutoStopWatch*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOSTOPWATCH_STARTSTOPWATCH_OFFSET))(tips, warningline);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOSTOPWATCH_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOSTOPWATCH_FINALIZE_OFFSET))(this);
		}
	};
}
