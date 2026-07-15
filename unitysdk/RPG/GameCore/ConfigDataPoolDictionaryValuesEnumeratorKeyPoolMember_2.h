#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorKeyPoolMember_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryValuesEnumeratorKeyPoolMember_2_TypeDefinitionIndex = 10430;

	template <typename TKey, typename TValue>
	struct ConfigDataPoolDictionaryValuesEnumeratorKeyPoolMember_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorKeyPoolMember_2<TKey, TValue> _InnerEnumerator; // 0x0
	};
}
