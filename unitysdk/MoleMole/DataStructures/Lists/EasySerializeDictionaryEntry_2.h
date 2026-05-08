#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Lists
{
	inline static constexpr unsigned int EasySerializeDictionaryEntry_2_TypeDefinitionIndex = 25534;

	template <typename TKey, typename TValue>
	class EasySerializeDictionaryEntry_2 : public ::System::Object
	{
	public:
		TKey key; // 0x0
		TValue value; // 0x0
	};
}
