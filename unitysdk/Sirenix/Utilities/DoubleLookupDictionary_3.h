#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int DoubleLookupDictionary_3_TypeDefinitionIndex = 6482;

	template <typename TFirstKey, typename TSecondKey, typename TValue>
	class DoubleLookupDictionary_3 : public ::System::Collections::Generic::Dictionary_2<TFirstKey, ::System::Collections::Generic::Dictionary_2<TSecondKey, TValue>*>
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<TSecondKey>* secondKeyComparer; // 0x0
	};
}
