#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ClearMode.h"
#include "unitysdk/Collections/Pooled/PooledSet_1_ElementCount.h"
#include "unitysdk/Collections/Pooled/PooledSet_1_Enumerator.h"
#include "unitysdk/Collections/Pooled/PooledSet_1_Slot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Span_1.h"

namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledSet_1_TypeDefinitionIndex = 5104;

	template <typename T>
	class PooledSet_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 s_lower31BitMask = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 s_stackAllocThreshold = 0x64; // 0x0
		// static const ::System::Int32 s_shrinkThreshold = 0x3; // 0x0
		// static const ::System::String* s_capacityName; // 0x0
		// static const ::System::String* s_elementsName; // 0x0
		// static const ::System::String* s_comparerName; // 0x0
		// static const ::System::String* s_versionName; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>** StaticGet_s_bucketPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PooledSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::Collections::Pooled::PooledSet_1_Slot<T>>** StaticGet_s_slotPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::Collections::Pooled::PooledSet_1_Slot<T>>**)Il2CppClass::FromTypeDefinitionIndex(PooledSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::Collections::Pooled::PooledSet_1_Slot<T>>* _slots; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _lastIndex; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x0
	};
}
