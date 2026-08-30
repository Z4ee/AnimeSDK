#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncLazy_1_TypeDefinitionIndex = 42532;

	template <typename T>
	class AsyncLazy_1 : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_continuation()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncLazy_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* taskFactory; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* completionSource; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> awaiter; // 0x0
		::System::Object* syncLock; // 0x0
		::System::Boolean initialized; // 0x0
	};
}
