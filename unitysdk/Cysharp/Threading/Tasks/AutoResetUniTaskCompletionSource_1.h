#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class AutoResetUniTaskCompletionSource_1; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AutoResetUniTaskCompletionSource_1_TypeDefinitionIndex = 31286;

	template <typename T>
	class AutoResetUniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>*)Il2CppClass::FromTypeDefinitionIndex(AutoResetUniTaskCompletionSource_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* nextNode; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
	};
}
