#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLDELTA_TOJSON_OFFSET UNITYSDK_OFFSET(0x7761C0)
#define PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLDELTA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x776170)
#define PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLDELTA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7761D0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int DrawcallRecorder_DrawcallDelta_TypeDefinitionIndex = 52485;

	struct alignas(8) DrawcallRecorder_DrawcallDelta
	{
		::System::Int32 SetPassCallsDelta; // 0x10
		::System::Int32 DrawCallsDelta; // 0x14
		::System::Int32 TrianglesDelta; // 0x18
		::System::Int32 VerticesDelta; // 0x1C
		::System::TimeSpan Duration; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLDELTA_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLDELTA_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLDELTA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
