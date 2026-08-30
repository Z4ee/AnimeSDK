#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSourceCore_1_TypeDefinitionIndex = 42808;

	template <typename TResult>
	struct UniTaskCompletionSourceCore_1
	{
		TResult result; // 0x0
		::System::Object* error; // 0x0
		::System::Int16 version; // 0x0
		::System::Boolean hasUnhandledError; // 0x0
		::System::Int32 completedCount; // 0x0
		::System::Action_1<::System::Object*>* continuation; // 0x0
		::System::Object* continuationState; // 0x0
	};
}
