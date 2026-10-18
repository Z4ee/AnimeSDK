#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftCountingSet_1_TypeDefinitionIndex = 41733;

	template <typename TKey>
	class MechCraftCountingSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Int32>* _Count; // 0x0
	};
}
