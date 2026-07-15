#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorUnmanaged_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryKeysEnumeratorUnmanaged_2_TypeDefinitionIndex = 10413;

	template <typename TKey, typename TValue>
	struct ConfigDataPoolDictionaryKeysEnumeratorUnmanaged_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorUnmanaged_2<TKey, TValue> _InnerEnumerator; // 0x0
	};
}
