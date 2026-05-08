#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_5CF0EC0BFBEDEBC5;

inline static constexpr unsigned int Class_1_5CF0EC0BFBEDEBC5_TypeDefinitionIndex = 65517;

template <typename TKey, typename TValue>
class Class_1_5CF0EC0BFBEDEBC5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TKey, ::System::Int32>* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<TKey>* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<TValue>* Field_1_2; // 0x0
};
