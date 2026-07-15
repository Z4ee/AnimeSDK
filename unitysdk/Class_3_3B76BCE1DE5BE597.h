#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_186335045AEDACF2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
template <typename T> class Class_2_7174AFBBD974858A;

inline static constexpr unsigned int Class_3_3B76BCE1DE5BE597_TypeDefinitionIndex = 47637;

template <typename T>
class Class_3_3B76BCE1DE5BE597 : public ::Class_2_186335045AEDACF2<T>
{
public:
	// static const ::System::Int32 Field_3_0 = 0x4; // 0x0
	::System::Collections::Generic::LinkedList_1<::Class_2_7174AFBBD974858A<T>*>* Field_3_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::LinkedListNode_1<::Class_2_7174AFBBD974858A<T>*>*>* Field_3_2; // 0x0
	::System::Int32 Field_3_3; // 0x0
};
