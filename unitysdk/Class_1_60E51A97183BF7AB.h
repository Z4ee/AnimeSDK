#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

inline static constexpr unsigned int Class_1_60E51A97183BF7AB_TypeDefinitionIndex = 81930;

template <typename TKey, typename TValue>
class Class_1_60E51A97183BF7AB : public ::System::Object
{
public:
	::System::Collections::Generic::ICollection_1<::System::Collections::Generic::IEnumerable_1<TValue>*>* Field_1_0; // 0x0
};
