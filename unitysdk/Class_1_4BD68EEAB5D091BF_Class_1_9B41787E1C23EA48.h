#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_1_4BD68EEAB5D091BF;

inline static constexpr unsigned int Class_1_4BD68EEAB5D091BF_Class_1_9B41787E1C23EA48_TypeDefinitionIndex = 28633;

template <typename TPriority, typename TValue>
class Class_1_4BD68EEAB5D091BF_Class_1_9B41787E1C23EA48 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x0
	::System::Collections::Generic::KeyValuePair_2<TPriority, TValue> Field_1_1; // 0x0
	::System::Int32 Field_1_0; // 0x0
	::Class_1_4BD68EEAB5D091BF<TPriority, TValue>* Field_1_7; // 0x0
};
