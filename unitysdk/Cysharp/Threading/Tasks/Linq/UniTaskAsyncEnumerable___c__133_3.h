#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2, typename T3> class UniTaskAsyncEnumerable___c__133_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__133_3_TypeDefinitionIndex = 44049;

	template <typename TSource, typename TKey, typename TResult>
	class UniTaskAsyncEnumerable___c__133_3 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource, TKey, TResult>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource, TKey, TResult>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__133_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TSource, TSource>** StaticGet___9__133_0()
		{
			return (::System::Func_2<TSource, TSource>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__133_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
