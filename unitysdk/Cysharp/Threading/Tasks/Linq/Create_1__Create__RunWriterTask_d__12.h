#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class Create_1__Create; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Create_1__Create__RunWriterTask_d__12_TypeDefinitionIndex = 44192;

	template <typename T>
	struct Create_1__Create__RunWriterTask_d__12
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}
