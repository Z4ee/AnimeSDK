#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DataStructures/HashSet_1_ElementCount.h"
#include "unitysdk/Foundation/DataStructures/HashSet_1_Enumerator.h"
#include "unitysdk/Foundation/DataStructures/HashSet_1_Slot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Foundation::DataStructures { template <typename T> class HashSet_1; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int HashSet_1_TypeDefinitionIndex = 8079;

	template <typename T>
	class HashSet_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 Lower31BitMask = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 StackAllocThreshold = 0x64; // 0x0
		// static const ::System::Int32 ShrinkThreshold = 0x3; // 0x0
		// static const ::System::String* CapacityName; // 0x0
		// static const ::System::String* ElementsName; // 0x0
		// static const ::System::String* ComparerName; // 0x0
		// static const ::System::String* VersionName; // 0x0
		::Il2CppArray<::System::Int32>* m_buckets; // 0x0
		::Il2CppArray<::Foundation::DataStructures::HashSet_1_Slot<T>>* m_slots; // 0x0
		::System::Int32 m_count; // 0x0
		::System::Int32 m_lastIndex; // 0x0
		::System::Int32 m_freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* m_comparer; // 0x0
		::System::Int32 m_version; // 0x0
		::System::Runtime::Serialization::SerializationInfo* m_siInfo; // 0x0
	};
}
