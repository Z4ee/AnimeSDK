#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD5FEF010EE849C3_Struct_2_E50721DC66D40A25.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

inline static constexpr unsigned int Class_1_CD5FEF010EE849C3_TypeDefinitionIndex = 41241;

template <typename T>
class Class_1_CD5FEF010EE849C3 : public ::System::Object
{
public:
	::System::Collections::Generic::LinkedList_1<T>* Field_1_0; // 0x0
	::System::Collections::Generic::Queue_1<::System::Collections::Generic::LinkedListNode_1<T>*>* Field_1_1; // 0x0
};
