#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Lists { template <typename T1, typename T2> class EasySerializeDictionaryEntry_2; }

namespace MoleMole::DataStructures::Lists
{
	inline static constexpr unsigned int EasySerializeDictionaryEntry_2_TypeDefinitionIndex = 28769;

	template <typename TKey, typename TValue>
	class EasySerializeDictionaryEntry_2 : public ::System::Object
	{
	public:
		TKey key; // 0x0
		TValue value; // 0x0
	};
}
