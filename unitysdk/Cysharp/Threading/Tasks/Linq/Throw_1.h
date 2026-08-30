#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Throw_1_TypeDefinitionIndex = 44532;

	template <typename TValue>
	class Throw_1 : public ::System::Object
	{
	public:
		::System::Exception* exception; // 0x0
	};
}
