#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Timeline { class ManaVideoClip; }
namespace RPG::Client::Timeline { class ManaVideoMixerBehaviour; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDF320)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xDF330)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour__ProcessFrameOnSeeking_d__26_TypeDefinitionIndex = 67550;

	struct alignas(8) ManaVideoMixerBehaviour__ProcessFrameOnSeeking_d__26
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::RPG::Client::Timeline::ManaVideoClip* clip; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x20
		::RPG::Client::Timeline::ManaVideoMixerBehaviour* __4__this; // 0x40
		::UnityEngine::Timeline::TimelineClip* activeClip; // 0x48
		::System::Double frameTime; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Boolean _movieInfoReplaced_5__2; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
