#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int ReadOnlyDictionary_2_TypeDefinitionIndex = 34429;

	template <typename TKey, typename TValue>
	class ReadOnlyDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<TKey, TValue>* wrapped; // 0x0
	};
}
