#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int DisposableEnumeratorAdapter_2_TypeDefinitionIndex = 6968;

	template <typename T, typename TEnumerator>
	struct DisposableEnumeratorAdapter_2
	{
		::System::Collections::Generic::IEnumerator_1<T>* _enumeratorObject; // 0x0
		TEnumerator _enumeratorStruct; // 0x0
	};
}
