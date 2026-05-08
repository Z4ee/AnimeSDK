#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_50FD097DCD1BD3F7.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"
#include "unitysdk/System/ValueType.h"

class Class_3_A78BAD31C5B5D3FD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E664D9FA0EBE07B0_STRUCT_2_FFD4C042B6998745_METHOD_2_5853BADA7E872E74_OFFSET UNITYSDK_OFFSET(0x714020)

inline static constexpr unsigned int Class_2_E664D9FA0EBE07B0_Struct_2_FFD4C042B6998745_TypeDefinitionIndex = 46913;

struct alignas(8) Class_2_E664D9FA0EBE07B0_Struct_2_FFD4C042B6998745
{
	::System::Int32 Field_2_0; // 0x10
	::Enum_3_50FD097DCD1BD3F7 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::Struct_2_B679E4D914A10080 Field_2_3; // 0x1C
	::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080>* Field_2_4; // 0x28
	::System::String* Field_2_5; // 0x30

	::Class_3_A78BAD31C5B5D3FD* Method_2_5853BADA7E872E74()
	{
		return ((::Class_3_A78BAD31C5B5D3FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E664D9FA0EBE07B0_STRUCT_2_FFD4C042B6998745_METHOD_2_5853BADA7E872E74_OFFSET))(this);
	}
};
