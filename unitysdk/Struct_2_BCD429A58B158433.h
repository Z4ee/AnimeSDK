#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EC7011F921990E92.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Struct_2_BCD429A58B158433_TypeDefinitionIndex = 49565;

struct alignas(8) Struct_2_BCD429A58B158433
{
	::System::Boolean Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_EC7011F921990E92>* Field_2_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_EC7011F921990E92>* Field_2_4; // 0x28
};
