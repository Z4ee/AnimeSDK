#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A66407CD5C66F37_Struct_2_78F94598E9F41360.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2_CreateValueCallback; }

inline static constexpr unsigned int Class_1_7A66407CD5C66F37_TypeDefinitionIndex = 41402;

template <typename TKey, typename TValue>
class Class_1_7A66407CD5C66F37 : public ::System::Object
{
public:
	::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* Field_1_0; // 0x0
	::System::Collections::Generic::LinkedList_1<::System::WeakReference_1<TKey>*>* Field_1_1; // 0x0
};
