#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

namespace Foundation
{
	inline static constexpr unsigned int Variable_2_TypeDefinitionIndex = 8825;

	template <typename T, typename TContext>
	struct Variable_2
	{
		::System::Nullable_1<T> _value; // 0x0
		::System::Func_1<T>* _getter; // 0x0
		::System::Func_2<TContext, T>* _dependentGetter; // 0x0
	};
}
