#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace Foundation
{
	inline static constexpr unsigned int Tuple_4_TypeDefinitionIndex = 8207;

	template <typename T1, typename T2, typename T3, typename T4>
	struct Tuple_4
	{
		T1 item1; // 0x0
		T2 item2; // 0x0
		T3 item3; // 0x0
		T4 item4; // 0x0
	};
}
