#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/CacheLinkedList_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1_Class_1_8BE47F377EDA9B57; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int CacheLinkedList_1_TypeDefinitionIndex = 6686;

	template <typename T>
	class CacheLinkedList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::CacheLinkedList_1_Class_1_8BE47F377EDA9B57<T>* head; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Runtime::Serialization::SerializationInfo* siInfo; // 0x0
		// static const ::System::String* VersionName; // 0x0
		// static const ::System::String* CountName; // 0x0
		// static const ::System::String* ValuesName; // 0x0
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::CacheLinkedList_1_Class_1_8BE47F377EDA9B57<T>*>* pool; // 0x0
	};
}
