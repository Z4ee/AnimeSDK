#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D320CFF3EDD656F3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_801E5D901725108A_TypeDefinitionIndex = 28804;

template <typename TKey, typename TSubKey, typename TValue>
class Class_1_801E5D901725108A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::Dictionary_2<TSubKey, TValue>*>* Field_1_0; // 0x0
	::System::Int32 Field_1_1; // 0x0
};
