#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

inline static constexpr unsigned int Class_1_FE03A3C217EBE85C_TypeDefinitionIndex = 47408;

template <typename TKey, typename TValue>
class Class_1_FE03A3C217EBE85C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TKey, TValue>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TValue, TKey>* Field_1_1; // 0x0
};
