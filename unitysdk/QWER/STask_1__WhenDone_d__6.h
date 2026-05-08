#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace QWER
{
	inline static constexpr unsigned int STask_1__WhenDone_d__6_TypeDefinitionIndex = 85867;

	template <typename T>
	class STask_1__WhenDone_d__6 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder; // 0x0
		::QWER::STask_1<T> __4__this; // 0x0
		::System::ValueTuple_2<::System::Exception*, T> _o_5__1; // 0x0
		::System::ValueTuple_2<::System::Exception*, T> __s__2; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::System::Exception*, T>> __u__1; // 0x0
	};
}
