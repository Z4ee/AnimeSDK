#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Empty_1_TypeDefinitionIndex = 44217;

	template <typename T>
	class Empty_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Empty_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
