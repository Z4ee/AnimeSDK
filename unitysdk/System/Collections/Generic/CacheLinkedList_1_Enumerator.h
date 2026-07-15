#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1_Class_1_8BE47F377EDA9B57; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int CacheLinkedList_1_Enumerator_TypeDefinitionIndex = 6687;

	template <typename T>
	struct CacheLinkedList_1_Enumerator
	{
		::System::Collections::Generic::CacheLinkedList_1<T>* list; // 0x0
		::System::Collections::Generic::CacheLinkedList_1_Class_1_8BE47F377EDA9B57<T>* node; // 0x0
		::System::Int32 version; // 0x0
		T current; // 0x0
		::System::Int32 index; // 0x0
		::System::Runtime::Serialization::SerializationInfo* siInfo; // 0x0
		// static const ::System::String* LinkedListName; // 0x0
		// static const ::System::String* CurrentValueName; // 0x0
		// static const ::System::String* VersionName; // 0x0
		// static const ::System::String* IndexName; // 0x0
	};
}
