#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class UniTaskAsyncEnumerable___c__471_2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__471_2_TypeDefinitionIndex = 44064;

	template <typename TFirst, typename TSecond>
	class UniTaskAsyncEnumerable___c__471_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__471_2<TFirst, TSecond>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__471_2<TFirst, TSecond>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__471_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<TFirst, TSecond, ::System::ValueTuple_2<TFirst, TSecond>>** StaticGet___9__471_0()
		{
			return (::System::Func_3<TFirst, TSecond, ::System::ValueTuple_2<TFirst, TSecond>>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__471_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
