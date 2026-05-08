#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_0409B2CBCEF1FADA_TypeDefinitionIndex = 25770;

template <typename TPriority, typename TValue>
class Class_1_0409B2CBCEF1FADA : public ::System::Object
{
public:
	::System::Comparison_1<TPriority>* Field_1_0; // 0x0
	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<TPriority, TValue>>* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::System::Int32 Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x10; // 0x0
};
