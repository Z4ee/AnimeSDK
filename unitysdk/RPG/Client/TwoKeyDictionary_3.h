#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int TwoKeyDictionary_3_TypeDefinitionIndex = 33828;

	template <typename TFirstKey, typename TSecondKey, typename TValue>
	class TwoKeyDictionary_3 : public ::System::Collections::Generic::Dictionary_2<TFirstKey, ::System::Collections::Generic::Dictionary_2<TSecondKey, TValue>*>
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<TSecondKey>* secondKeyComparer; // 0x0
	};
}
