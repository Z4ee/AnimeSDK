#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProfilingRecorder/DrawcallRecorder_DrawcallDelta.h"
#include "unitysdk/ProfilingRecorder/DrawcallRecorder_DrawcallSnapshot.h"
#include "unitysdk/System/Object.h"

#define PROFILINGRECORDER_DRAWCALLRECORDER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1D5C8610)
#define PROFILINGRECORDER_DRAWCALLRECORDER_END_OFFSET UNITYSDK_OFFSET(0x1D5C8670)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GETDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x1D5C81A0)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GETSETPASSCALLS_OFFSET UNITYSDK_OFFSET(0x1D5C8110)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D5C8230)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1D5C82C0)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D5C8060)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x1D5C80E0)
#define PROFILINGRECORDER_DRAWCALLRECORDER_GET_LASTDELTA_OFFSET UNITYSDK_OFFSET(0x1D5C80F0)
#define PROFILINGRECORDER_DRAWCALLRECORDER_PROFILINGRECORDER_IPROFILERRECORDER_END_OFFSET UNITYSDK_OFFSET(0x1D5C8780)
#define PROFILINGRECORDER_DRAWCALLRECORDER_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D5C8350)
#define PROFILINGRECORDER_DRAWCALLRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C80D0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int DrawcallRecorder_TypeDefinitionIndex = 50915;

	class DrawcallRecorder : public ::System::Object
	{
	public:
		static ::ProfilingRecorder::DrawcallRecorder** StaticGet__instance()
		{
			return (::ProfilingRecorder::DrawcallRecorder**)Il2CppClass::FromTypeDefinitionIndex(DrawcallRecorder_TypeDefinitionIndex)->GetStaticField(0x459F0);
		}
		::System::Boolean _isRecording; // 0x10
		::ProfilingRecorder::DrawcallRecorder_DrawcallSnapshot _beginSnapshot; // 0x18
		::ProfilingRecorder::DrawcallRecorder_DrawcallDelta _lastDelta; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER__CTOR_OFFSET))(this);
		}

		static ::ProfilingRecorder::DrawcallRecorder* get_Instance()
		{
			return ((::ProfilingRecorder::DrawcallRecorder*(*)())((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_IsRecording()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GET_ISRECORDING_OFFSET))(this);
		}

		::ProfilingRecorder::DrawcallRecorder_DrawcallDelta get_LastDelta()
		{
			return ((::ProfilingRecorder::DrawcallRecorder_DrawcallDelta(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GET_LASTDELTA_OFFSET))(this);
		}

		::System::Int32 GetSetPassCalls()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GETSETPASSCALLS_OFFSET))(this);
		}

		::System::Int32 GetDrawCalls()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GETDRAWCALLS_OFFSET))(this);
		}

		::System::Int32 GetTriangles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GETTRIANGLES_OFFSET))(this);
		}

		::System::Int32 GetVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_GETVERTICES_OFFSET))(this);
		}

		::ProfilingRecorder::DrawcallRecorder_DrawcallSnapshot TakeSnapshot()
		{
			return ((::ProfilingRecorder::DrawcallRecorder_DrawcallSnapshot(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_TAKESNAPSHOT_OFFSET))(this);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_BEGIN_OFFSET))(this);
		}

		::ProfilingRecorder::DrawcallRecorder_DrawcallDelta End()
		{
			return ((::ProfilingRecorder::DrawcallRecorder_DrawcallDelta(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_END_OFFSET))(this);
		}

		::System::Void ProfilingRecorder_IProfilerRecorder_End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_DRAWCALLRECORDER_PROFILINGRECORDER_IPROFILERRECORDER_END_OFFSET))(this);
		}
	};
}
