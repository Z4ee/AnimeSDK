#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F4A33839AB405E63.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_0DDFE1BDACC4BD3D_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x7DF0E0)
#define STRUCT_2_0DDFE1BDACC4BD3D__CTOR_OFFSET UNITYSDK_OFFSET(0x7DF0D0)

inline static constexpr unsigned int Struct_2_0DDFE1BDACC4BD3D_TypeDefinitionIndex = 90021;

struct alignas(4) Struct_2_0DDFE1BDACC4BD3D
{
	::Enum_3_F4A33839AB405E63 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14
	::System::Boolean Field_2_7; // 0x18

	::System::Void _ctor(::Enum_3_F4A33839AB405E63 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F4A33839AB405E63, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_0DDFE1BDACC4BD3D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::Struct_2_DFC18A96C36DAE79_1 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_DFC18A96C36DAE79_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0DDFE1BDACC4BD3D_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}
	*/
};
