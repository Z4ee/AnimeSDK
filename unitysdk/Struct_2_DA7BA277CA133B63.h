#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DA7BA277CA133B63_METHOD_2_187B3E3B8611027E_1_OFFSET UNITYSDK_OFFSET(0x10E8FA10)
#define STRUCT_2_DA7BA277CA133B63_METHOD_2_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0x10E8F9D0)
#define STRUCT_2_DA7BA277CA133B63_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x701700)
#define STRUCT_2_DA7BA277CA133B63__CTOR_OFFSET UNITYSDK_OFFSET(0x7016F0)

inline static constexpr unsigned int Struct_2_DA7BA277CA133B63_TypeDefinitionIndex = 54988;

struct alignas(4) Struct_2_DA7BA277CA133B63
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12
	::System::Int32 Field_2_3; // 0x14

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_DA7BA277CA133B63__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DA7BA277CA133B63_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Struct_2_DA7BA277CA133B63 Method_2_187B3E3B8611027E()
	{
		return ((::Struct_2_DA7BA277CA133B63(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DA7BA277CA133B63_METHOD_2_187B3E3B8611027E_OFFSET))();
	}

	static ::Struct_2_DA7BA277CA133B63 Method_2_187B3E3B8611027E_1()
	{
		return ((::Struct_2_DA7BA277CA133B63(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DA7BA277CA133B63_METHOD_2_187B3E3B8611027E_1_OFFSET))();
	}
};
