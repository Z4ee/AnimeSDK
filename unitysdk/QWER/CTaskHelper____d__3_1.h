#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper____d__3_1_TypeDefinitionIndex = 85872;

	template <typename T>
	class CTaskHelper____d__3_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x0
		::System::Threading::Tasks::Task_1<T>* task; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1; // 0x0
	};
}
