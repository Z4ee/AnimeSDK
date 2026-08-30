#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TriggerEvent_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class AsyncReactiveProperty_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class String; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncReactiveProperty_1_TypeDefinitionIndex = 42535;

	template <typename T>
	class AsyncReactiveProperty_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::TriggerEvent_1<T> triggerEvent; // 0x0
		T latestValue; // 0x0
		static ::System::Boolean* StaticGet_isValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AsyncReactiveProperty_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
