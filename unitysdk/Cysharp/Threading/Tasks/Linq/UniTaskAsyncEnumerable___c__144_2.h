#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class UniTaskAsyncEnumerable___c__144_2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__144_2_TypeDefinitionIndex = 44054;

	template <typename TSource, typename TKey>
	class UniTaskAsyncEnumerable___c__144_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource, TKey>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource, TKey>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__144_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TSource>>** StaticGet___9__144_0()
		{
			return (::System::Func_3<TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TSource>>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__144_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
