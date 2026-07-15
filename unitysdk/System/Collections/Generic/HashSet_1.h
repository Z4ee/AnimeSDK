#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_ElementCount.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Slot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int HashSet_1_TypeDefinitionIndex = 3687;

	template <typename T>
	class HashSet_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::System::Collections::Generic::HashSet_1_Slot<T>>* _slots; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _lastIndex; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
		::System::Int32 _version; // 0x0
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x0
	};
}
