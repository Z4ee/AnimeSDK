#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int TrimmedSingleItemArray_1_TypeDefinitionIndex = 33903;

	template <typename T>
	struct TrimmedSingleItemArray_1
	{
		T item; // 0x0
	};
}
