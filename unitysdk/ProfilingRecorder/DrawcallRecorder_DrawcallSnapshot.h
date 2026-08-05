#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLSNAPSHOT_TOJSON_OFFSET UNITYSDK_OFFSET(0xA1E5C0)
#define PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1E570)
#define PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLSNAPSHOT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1E5D0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int DrawcallRecorder_DrawcallSnapshot_TypeDefinitionIndex = 50917;

	struct alignas(8) DrawcallRecorder_DrawcallSnapshot
	{
		::System::Int32 SetPassCalls; // 0x10
		::System::Int32 DrawCalls; // 0x14
		::System::Int32 Triangles; // 0x18
		::System::Int32 Vertices; // 0x1C
		::System::DateTime Timestamp; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLSNAPSHOT_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_DRAWCALLSNAPSHOT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
