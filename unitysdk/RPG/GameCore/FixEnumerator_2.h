#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixEnumerator_2_TypeDefinitionIndex = 6934;

	template <typename TIndexKey, typename TRow>
	struct FixEnumerator_2
	{
		::System::Int32 index; // 0x0
		::System::Int32 totalCount; // 0x0
		TRow current; // 0x0
		TIndexKey currentKey; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<TIndexKey, TRow> dictEnumerator; // 0x0
	};
}
