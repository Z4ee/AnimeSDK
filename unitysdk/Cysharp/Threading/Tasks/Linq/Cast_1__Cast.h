#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorBase_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Cast_1__Cast_TypeDefinitionIndex = 44135;

	template <typename TResult>
	class Cast_1__Cast : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<::System::Object*, TResult>
	{
	public:
	};
}
