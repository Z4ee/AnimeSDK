#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3590B72267A04337.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_FD590E733B7F1723_TypeDefinitionIndex = 88102;

struct alignas(8) Struct_2_FD590E733B7F1723
{
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x18
	::System::Nullable_1<::System::Int32> Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_3590B72267A04337, ::System::Single>* Field_2_3; // 0x28
};
