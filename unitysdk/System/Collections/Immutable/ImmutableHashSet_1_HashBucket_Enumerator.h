#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket_Enumerator_Position.h"
#include "unitysdk/System/Collections/Immutable/ImmutableList_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_HashBucket_Enumerator_TypeDefinitionIndex = 6983;

	template <typename T>
	struct ImmutableHashSet_1_HashBucket_Enumerator
	{
		::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T> _bucket; // 0x0
		::System::Boolean _disposed; // 0x0
		::System::Collections::Immutable::ImmutableHashSet_1_HashBucket_Enumerator_Position<T> _currentPosition; // 0x0
		::System::Collections::Immutable::ImmutableList_1_Enumerator<T> _additionalEnumerator; // 0x0
	};
}
