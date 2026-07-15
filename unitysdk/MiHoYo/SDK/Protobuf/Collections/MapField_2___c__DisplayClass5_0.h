#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2___c__DisplayClass5_0_TypeDefinitionIndex = 34427;

	template <typename TKey, typename TValue>
	class MapField_2___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::EqualityComparer_1<TValue>* comparer; // 0x0
		TValue value; // 0x0
	};
}
