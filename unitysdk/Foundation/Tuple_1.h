#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace Foundation
{
	inline static constexpr unsigned int Tuple_1_TypeDefinitionIndex = 8368;

	template <typename T1>
	struct Tuple_1
	{
		T1 item1; // 0x0
	};
}
