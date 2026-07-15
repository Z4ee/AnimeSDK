#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::ZLinq
{
	inline static constexpr unsigned int FromFixEnumerator_2_TypeDefinitionIndex = 10009;

	template <typename TIndexKey, typename TRow>
	struct FromFixEnumerator_2
	{
		::RPG::GameCore::FixEnumerator_2<TIndexKey, TRow> _Enumerator; // 0x0
	};
}
