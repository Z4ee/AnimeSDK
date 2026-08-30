#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Return_1_TypeDefinitionIndex = 44407;

	template <typename TValue>
	class Return_1 : public ::System::Object
	{
	public:
		TValue value; // 0x0
	};
}
