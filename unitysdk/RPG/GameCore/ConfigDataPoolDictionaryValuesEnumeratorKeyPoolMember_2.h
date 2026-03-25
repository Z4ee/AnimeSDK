#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorKeyPoolMember_2.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_16;
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryValuesEnumeratorKeyPoolMember_2_TypeDefinitionIndex = 22554;

	template <typename TKey, typename TValue>
	struct ConfigDataPoolDictionaryValuesEnumeratorKeyPoolMember_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorKeyPoolMember_2<TKey, TValue> _InnerEnumerator; // 0x0
	};
}
