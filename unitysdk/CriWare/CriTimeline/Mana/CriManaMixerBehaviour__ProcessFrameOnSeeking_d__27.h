#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriTimeline::Mana { class CriManaClipBase; }
namespace CriWare::CriTimeline::Mana { class CriManaMixerBehaviour; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA5CF40)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour__ProcessFrameOnSeeking_d__27_TypeDefinitionIndex = 34384;

	struct alignas(8) CriManaMixerBehaviour__ProcessFrameOnSeeking_d__27
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::CriWare::CriTimeline::Mana::CriManaClipBase* clip; // 0x30
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x38
		::CriWare::CriTimeline::Mana::CriManaMixerBehaviour* __4__this; // 0x40
		::UnityEngine::Timeline::TimelineClip* activeClip; // 0x48
		::System::Boolean _movieInfoReplaced_5__2; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Double frameTime; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
