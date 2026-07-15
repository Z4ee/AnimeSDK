#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/ProfilerFrame.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace SRDebugger { template <typename T> class CircularBuffer_1; }
namespace SRDebugger::Profiler { class ProfilerLateUpdateListener; }
namespace SRDebugger::Services { class IProfilerService; }
namespace System::Collections { class IEnumerator; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A1F4B70)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1A1F4FB0)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_ENDOFFRAMECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A1F4D90)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_GET_AVERAGEFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1A1F4B20)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_GET_FRAMEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A1F4B60)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_GET_LASTFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1A1F4B40)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1F5120)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_PUSHFRAME_OFFSET UNITYSDK_OFFSET(0x1A1F50D0)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_RENDERPIPELINEONBEGINFRAMERENDERING_OFFSET UNITYSDK_OFFSET(0x1A1F5160)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_SET_AVERAGEFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1A1F4B30)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_SET_LASTFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1A1F4B50)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A1F4DC0)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F51A0)

namespace SRDebugger::Profiler
{
	inline static constexpr unsigned int SRPProfilerService_TypeDefinitionIndex = 36542;

	class SRPProfilerService : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::IProfilerService*>
	{
	public:
		// static const ::System::Int32 FrameBufferSize = 0x190; // 0x0
		::System::Single _AverageFrameTime_k__BackingField; // 0x48
		::System::Single _LastFrameTime_k__BackingField; // 0x4C
		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ProfilerFrame>* _frameBuffer; // 0x50
		::SRDebugger::Profiler::ProfilerLateUpdateListener* _lateUpdateListener; // 0x58
		::System::Double _updateDuration; // 0x60
		::System::Double _renderStartTime; // 0x68
		::System::Double _renderDuration; // 0x70
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x78
		::UnityEngine::WaitForEndOfFrame* CachedWaitForEndOfFrame; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__CTOR_OFFSET))(this);
		}

		::System::Single get_AverageFrameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_GET_AVERAGEFRAMETIME_OFFSET))(this);
		}

		::System::Void set_AverageFrameTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_SET_AVERAGEFRAMETIME_OFFSET))(this, a1);
		}

		::System::Single get_LastFrameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_GET_LASTFRAMETIME_OFFSET))(this);
		}

		::System::Void set_LastFrameTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_SET_LASTFRAMETIME_OFFSET))(this, a1);
		}

		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ProfilerFrame>* get_FrameBuffer()
		{
			return ((::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ProfilerFrame>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_GET_FRAMEBUFFER_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_UPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EndOfFrameCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_ENDOFFRAMECOROUTINE_OFFSET))(this);
		}

		::System::Void PushFrame(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_PUSHFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void RenderPipelineOnBeginFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext a1, ::Il2CppArray<::UnityEngine::Camera*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_RENDERPIPELINEONBEGINFRAMERENDERING_OFFSET))(this, a1, a2);
		}

		::System::Void EndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE_ENDFRAME_OFFSET))(this);
		}
	};
}
