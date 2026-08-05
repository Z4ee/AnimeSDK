#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x462A80)
#define STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_EBC86B04CFFF8F2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17238E00)
#define STRUCT_2_EBC86B04CFFF8F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x41FE00)

inline static constexpr unsigned int Struct_2_EBC86B04CFFF8F2C_TypeDefinitionIndex = 88104;

struct alignas(8) Struct_2_EBC86B04CFFF8F2C
{
	static ::Struct_2_EBC86B04CFFF8F2C* StaticGet_Field_2_2()
	{
		return (::Struct_2_EBC86B04CFFF8F2C*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_EBC86B04CFFF8F2C_TypeDefinitionIndex)->GetStaticField(0x3B490);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_EBC86B04CFFF8F2C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_EBC86B04CFFF8F2C__CCTOR_OFFSET))();
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EBC86B04CFFF8F2C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
