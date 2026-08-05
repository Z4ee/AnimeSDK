#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3942938B067B1F5D.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7AE99DF5F078ADF4;
namespace System { class String; }

#define STRUCT_2_C3D2448A87C70DB6_METHOD_2_771E14CA77DDAA9E_OFFSET UNITYSDK_OFFSET(0x6F5740)
#define STRUCT_2_C3D2448A87C70DB6_METHOD_2_D126582672457EA7_OFFSET UNITYSDK_OFFSET(0x6F57E0)

inline static constexpr unsigned int Struct_2_C3D2448A87C70DB6_TypeDefinitionIndex = 87677;

struct alignas(8) Struct_2_C3D2448A87C70DB6
{
	::Enum_3_3942938B067B1F5D Field_2_3; // 0x10
	::System::UInt64 Field_2_2; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x28
	::Class_1_7AE99DF5F078ADF4* Field_2_7; // 0x30

	::System::Boolean Method_2_771E14CA77DDAA9E(::Struct_2_C3D2448A87C70DB6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C3D2448A87C70DB6))((::PBYTE)hIl2Cpp + STRUCT_2_C3D2448A87C70DB6_METHOD_2_771E14CA77DDAA9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D126582672457EA7(::Struct_2_C3D2448A87C70DB6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C3D2448A87C70DB6))((::PBYTE)hIl2Cpp + STRUCT_2_C3D2448A87C70DB6_METHOD_2_D126582672457EA7_OFFSET))(this, a1);
	}
};
