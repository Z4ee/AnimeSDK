#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DictionaryWrapper_2_TypeDefinitionIndex = 9328;

	template <typename TKey, typename TValue>
	class DictionaryWrapper_2 : public ::System::Object
	{
	public:
		::System::Collections::IDictionary* _dictionary; // 0x0
		::System::Collections::Generic::IDictionary_2<TKey, TValue>* _genericDictionary; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
