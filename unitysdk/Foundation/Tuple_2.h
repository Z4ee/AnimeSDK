#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace Foundation
{
	inline static constexpr unsigned int Tuple_2_TypeDefinitionIndex = 7838;

	template <typename T1, typename T2>
	struct Tuple_2
	{
		T1 item1; // 0x0
		T2 item2; // 0x0
	};
}
