#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Never_1_TypeDefinitionIndex = 44375;

	template <typename T>
	class Never_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Never_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
