#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorUnmanaged_2.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_16;
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryKeysEnumeratorUnmanaged_2_TypeDefinitionIndex = 22537;

	template <typename TKey, typename TValue>
	struct ConfigDataPoolDictionaryKeysEnumeratorUnmanaged_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorUnmanaged_2<TKey, TValue> _InnerEnumerator; // 0x0
	};
}
