#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Repeat_1_TypeDefinitionIndex = 44405;

	template <typename TElement>
	class Repeat_1 : public ::System::Object
	{
	public:
		TElement element; // 0x0
		::System::Int32 count; // 0x0
	};
}
