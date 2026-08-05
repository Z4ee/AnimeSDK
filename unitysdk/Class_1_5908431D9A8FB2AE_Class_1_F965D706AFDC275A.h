#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

inline static constexpr unsigned int Class_1_5908431D9A8FB2AE_Class_1_F965D706AFDC275A_TypeDefinitionIndex = 34549;

template <typename T>
class Class_1_5908431D9A8FB2AE_Class_1_F965D706AFDC275A : public ::System::Object
{
public:
	::System::Collections::Generic::LinkedList_1<T>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::LinkedListNode_1<T>*>* Field_1_7; // 0x0
};
