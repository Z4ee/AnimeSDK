#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A6350609FD165F14_Struct_2_E14D6DD3479C62FD.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_A6350609FD165F14_TypeDefinitionIndex = 39867;

template <typename T>
class Class_1_A6350609FD165F14 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A6350609FD165F14_Struct_2_E14D6DD3479C62FD<T>>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<T, ::System::Int32>* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::System::Int32 Field_1_3; // 0x0
	::System::Int32 Field_1_4; // 0x0
};
