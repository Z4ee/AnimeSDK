#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4BEB4678906A5980.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

inline static constexpr unsigned int Class_1_0A124D96A25F6632_TypeDefinitionIndex = 86395;

template <typename TKey, typename TValue>
class Class_1_0A124D96A25F6632 : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<TKey, ::System::Collections::Generic::IEnumerable_1<TValue>*>* Field_1_0; // 0x0
};
