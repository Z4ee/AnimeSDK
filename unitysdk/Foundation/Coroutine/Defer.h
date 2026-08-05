#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Coroutine; }

#define FOUNDATION_COROUTINE_DEFER_DEFERFRAMESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F4BD930)
#define FOUNDATION_COROUTINE_DEFER_DEFERSECONDSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F4BDAE0)
#define FOUNDATION_COROUTINE_DEFER_FRAMES_OFFSET UNITYSDK_OFFSET(0x1F4BD810)
#define FOUNDATION_COROUTINE_DEFER_RUNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F4BDB70)
#define FOUNDATION_COROUTINE_DEFER_SECONDS_OFFSET UNITYSDK_OFFSET(0x1F4BD9B0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Defer_TypeDefinitionIndex = 7907;

	class Defer : public ::System::Object
	{
	public:
		static ::Foundation::Coroutine::CoroutineHandle Frames(::System::Int32 frameCount, ::System::Action* action)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER_FRAMES_OFFSET))(frameCount, action);
		}

		static ::Foundation::Coroutine::CoroutineHandle Seconds(::System::Single seconds, ::System::Action* action)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER_SECONDS_OFFSET))(seconds, action);
		}

		static ::UnityEngine::Coroutine* RunCoroutine(::System::Collections::IEnumerator* coroutine)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER_RUNCOROUTINE_OFFSET))(coroutine);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* DeferSecondsInternal(::System::Single seconds, ::System::Action* action)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER_DEFERSECONDSINTERNAL_OFFSET))(seconds, action);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* DeferFramesInternal(::System::Int32 frameCount, ::System::Action* action)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER_DEFERFRAMESINTERNAL_OFFSET))(frameCount, action);
		}
	};
}
