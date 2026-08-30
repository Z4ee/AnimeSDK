#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/ProfilerFrame.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger { template <typename T> class CircularBuffer_1; }
namespace SRDebugger::Profiler { class ProfilerLateUpdateListener; }
namespace SRDebugger::Services { class IProfilerService; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Camera; }

#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BD9E1F0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1BD9E650)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_GET_AVERAGEFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1BD9E1A0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_GET_FRAMEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD9E1E0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_GET_LASTFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1BD9E1C0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ONCAMERAPOSTRENDER_OFFSET UNITYSDK_OFFSET(0x1BD9E840)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ONCAMERAPRERENDER_OFFSET UNITYSDK_OFFSET(0x1BD9E7F0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BD9E7B0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_PUSHFRAME_OFFSET UNITYSDK_OFFSET(0x1BD9E760)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_SET_AVERAGEFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1BD9E1B0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_SET_LASTFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1BD9E1D0)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BD9E450)
#define SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9E880)

namespace SRDebugger::Profiler
{
	inline static constexpr unsigned int ProfilerServiceImpl_TypeDefinitionIndex = 37400;

	class ProfilerServiceImpl : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::IProfilerService*>
	{
	public:
		// static const ::System::Int32 FrameBufferSize = 0x190; // 0x0
		::System::Single _AverageFrameTime_k__BackingField; // 0x48
		::System::Single _LastFrameTime_k__BackingField; // 0x4C
		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ProfilerFrame>* _frameBuffer; // 0x50
		::SRDebugger::Profiler::ProfilerLateUpdateListener* _lateUpdateListener; // 0x58
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x60
		::System::Double _updateDuration; // 0x68
		::System::Double _renderStartTime; // 0x70
		::System::Double _renderDuration; // 0x78
		::System::Int32 _camerasThisFrame; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Single get_AverageFrameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_GET_AVERAGEFRAMETIME_OFFSET))(this);
		}

		::System::Void set_AverageFrameTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_SET_AVERAGEFRAMETIME_OFFSET))(this, a1);
		}

		::System::Single get_LastFrameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_GET_LASTFRAMETIME_OFFSET))(this);
		}

		::System::Void set_LastFrameTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_SET_LASTFRAMETIME_OFFSET))(this, a1);
		}

		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ProfilerFrame>* get_FrameBuffer()
		{
			return ((::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ProfilerFrame>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_GET_FRAMEBUFFER_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_UPDATE_OFFSET))(this);
		}

		::System::Void PushFrame(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_PUSHFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnCameraPreRender(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ONCAMERAPRERENDER_OFFSET))(this, a1);
		}

		::System::Void OnCameraPostRender(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ONCAMERAPOSTRENDER_OFFSET))(this, a1);
		}

		::System::Void EndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERSERVICEIMPL_ENDFRAME_OFFSET))(this);
		}
	};
}
