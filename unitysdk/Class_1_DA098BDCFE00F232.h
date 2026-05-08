#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

inline static constexpr unsigned int Class_1_DA098BDCFE00F232_TypeDefinitionIndex = 65143;

template <typename T>
class Class_1_DA098BDCFE00F232 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<T, ::System::Int32>* Field_1_0; // 0x0
	::System::Collections::Generic::HashSet_1<T>* Field_1_1; // 0x0
};
