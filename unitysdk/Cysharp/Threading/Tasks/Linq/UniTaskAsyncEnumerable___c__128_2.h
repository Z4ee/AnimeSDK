#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class UniTaskAsyncEnumerable___c__128_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__128_2_TypeDefinitionIndex = 44046;

	template <typename TSource, typename TKey>
	class UniTaskAsyncEnumerable___c__128_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource, TKey>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource, TKey>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__128_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TSource, TSource>** StaticGet___9__128_0()
		{
			return (::System::Func_2<TSource, TSource>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__128_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
