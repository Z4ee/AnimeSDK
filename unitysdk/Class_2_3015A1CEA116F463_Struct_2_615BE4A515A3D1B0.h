#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_50FD097DCD1BD3F7.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_115;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3015A1CEA116F463_STRUCT_2_615BE4A515A3D1B0_METHOD_2_5F5A73B9B1263074_OFFSET UNITYSDK_OFFSET(0x765BB0)

inline static constexpr unsigned int Class_2_3015A1CEA116F463_Struct_2_615BE4A515A3D1B0_TypeDefinitionIndex = 47923;

struct alignas(8) Class_2_3015A1CEA116F463_Struct_2_615BE4A515A3D1B0
{
	::System::Int32 Field_2_0; // 0x10
	::Enum_3_50FD097DCD1BD3F7 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::Struct_2_B679E4D914A10080 Field_2_3; // 0x1C
	::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080>* Field_2_4; // 0x28
	::System::String* Field_2_5; // 0x30

	::Class_2_208CC9941471731A_115* Method_2_5F5A73B9B1263074()
	{
		return ((::Class_2_208CC9941471731A_115*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3015A1CEA116F463_STRUCT_2_615BE4A515A3D1B0_METHOD_2_5F5A73B9B1263074_OFFSET))(this);
	}
};
