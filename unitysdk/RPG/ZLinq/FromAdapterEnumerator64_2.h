#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator64_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::ZLinq
{
	inline static constexpr unsigned int FromAdapterEnumerator64_2_TypeDefinitionIndex = 10008;

	template <typename TIndexKey, typename TRow>
	struct FromAdapterEnumerator64_2
	{
		::RPG::GameCore::AdapterEnumerator64_2<TIndexKey, TRow> _Enumerator; // 0x0
	};
}
