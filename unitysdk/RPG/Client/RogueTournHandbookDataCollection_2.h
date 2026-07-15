#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookDataCollection_2_TypeDefinitionIndex = 64664;

	template <typename TId, typename TDataItem>
	class RogueTournHandbookDataCollection_2 : public ::System::Object
	{
	public:
		::System::UInt32 _UnlockedCount_k__BackingField; // 0x0
		::System::Collections::Generic::Dictionary_2<TId, TDataItem>* _DataItems; // 0x0
	};
}
