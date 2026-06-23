#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class IStateMachineRunnerPromise_1; }
namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskMethodBuilder_1_TypeDefinitionIndex = 31490;

	template <typename T>
	struct AsyncUniTaskMethodBuilder_1
	{
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>* runnerPromise; // 0x0
		::System::Exception* ex; // 0x0
		T result; // 0x0
	};
}
