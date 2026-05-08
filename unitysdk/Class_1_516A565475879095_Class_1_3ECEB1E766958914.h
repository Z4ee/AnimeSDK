#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

inline static constexpr unsigned int Class_1_516A565475879095_Class_1_3ECEB1E766958914_TypeDefinitionIndex = 9394;

template <typename TKey, typename TValue, typename T>
class Class_1_516A565475879095_Class_1_3ECEB1E766958914 : public ::System::Object
{
public:
	::Class_1_516A565475879095<TKey, TValue>* Field_1_0; // 0x0
	::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, T>* Field_1_1; // 0x0
	::System::Func_2<T, ::System::Boolean>* Field_1_2; // 0x0
};
