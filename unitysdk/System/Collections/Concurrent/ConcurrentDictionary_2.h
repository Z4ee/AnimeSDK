#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2_Tables; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentDictionary_2_TypeDefinitionIndex = 1507;

	template <typename TKey, typename TValue>
	class ConcurrentDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* _tables; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer; // 0x0
		::System::Boolean _growLockArray; // 0x0
		::System::Int32 _budget; // 0x0
		static ::System::Boolean* StaticGet_s_isValueWriteAtomic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConcurrentDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
