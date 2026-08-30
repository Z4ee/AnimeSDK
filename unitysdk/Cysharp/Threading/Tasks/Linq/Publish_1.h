#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TriggerEvent_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class IDisposable; }
namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Publish_1_TypeDefinitionIndex = 44395;

	template <typename TSource>
	class Publish_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x0
		::Cysharp::Threading::Tasks::TriggerEvent_1<TSource> trigger; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* enumerator; // 0x0
		::System::IDisposable* connectedDisposable; // 0x0
		::System::Boolean isCompleted; // 0x0
	};
}
