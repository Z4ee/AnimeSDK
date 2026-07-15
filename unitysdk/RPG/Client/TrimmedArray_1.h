#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int TrimmedArray_1_TypeDefinitionIndex = 33904;

	template <typename T>
	struct TrimmedArray_1
	{
		::Il2CppArray<T>* _instancedArray; // 0x0
	};
}
