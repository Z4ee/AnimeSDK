#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D320CFF3EDD656F3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2, typename T3> class Class_1_801E5D901725108A;

inline static constexpr unsigned int Class_1_801E5D901725108A_Class_1_0D35F1A378A0B7DD_TypeDefinitionIndex = 26312;

template <typename TKey, typename TSubKey, typename TValue>
class Class_1_801E5D901725108A_Class_1_0D35F1A378A0B7DD : public ::System::Object
{
public:
	::Class_1_801E5D901725108A<TKey, TSubKey, TValue>* Field_1_0; // 0x0
	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, ::System::Collections::Generic::Dictionary_2<TSubKey, TValue>*>>* Field_1_1; // 0x0
	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TSubKey, TValue>>* Field_1_2; // 0x0
};
