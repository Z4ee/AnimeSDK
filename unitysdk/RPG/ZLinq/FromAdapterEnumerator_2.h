#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::ZLinq
{
	inline static constexpr unsigned int FromAdapterEnumerator_2_TypeDefinitionIndex = 10007;

	template <typename TIndexKey, typename TRow>
	struct FromAdapterEnumerator_2
	{
		::RPG::GameCore::AdapterEnumerator_2<TIndexKey, TRow> _Enumerator; // 0x0
	};
}
