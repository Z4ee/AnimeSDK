#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace Foundation
{
	inline static constexpr unsigned int Tuple_3_TypeDefinitionIndex = 8413;

	template <typename T1, typename T2, typename T3>
	struct Tuple_3
	{
		T1 item1; // 0x0
		T2 item2; // 0x0
		T3 item3; // 0x0
	};
}
