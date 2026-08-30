#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable_TypeDefinitionIndex = 44564;

	template <typename T>
	class ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* enumerator; // 0x0
	};
}
