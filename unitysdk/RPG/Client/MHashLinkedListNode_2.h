#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MLinkedListNode_1.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MHashLinkedListNode_2_TypeDefinitionIndex = 33814;

	template <typename TKey, typename TValue>
	class MHashLinkedListNode_2 : public ::RPG::Client::MLinkedListNode_1<TValue>
	{
	public:
		TKey NodeKey; // 0x0
	};
}
