#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseConfigHeader_1_ConfigHeaderEnumerator.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdapterEnumerator_2_TypeDefinitionIndex = 10509;

	template <typename TIndexKey, typename TRow>
	struct AdapterEnumerator_2
	{
		::System::Int32 index; // 0x0
		::System::Int32 totalCount; // 0x0
		TRow current; // 0x0
		::RPG::GameCore::BaseConfigHeader_1_ConfigHeaderEnumerator<::System::Int32> enumerator; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<TIndexKey, TRow> dictEnumerator; // 0x0
		::System::Boolean isDictEnumerator; // 0x0
	};
}
