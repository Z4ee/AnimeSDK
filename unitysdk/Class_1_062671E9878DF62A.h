#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_2_636B2F59931721BC;
class Class_2_B5C26CAF86EF077B;

#define CLASS_1_062671E9878DF62A_METHOD_1_039D28F47D3F4250_OFFSET UNITYSDK_OFFSET(0x17CA17B0)
#define CLASS_1_062671E9878DF62A_METHOD_1_0DB1A52DE576427C_OFFSET UNITYSDK_OFFSET(0x17CA1710)
#define CLASS_1_062671E9878DF62A_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x17CA1660)
#define CLASS_1_062671E9878DF62A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CA1940)

inline static constexpr unsigned int Class_1_062671E9878DF62A_TypeDefinitionIndex = 47349;

class Class_1_062671E9878DF62A : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_062671E9878DF62A_TypeDefinitionIndex)->GetStaticField(0x55970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_062671E9878DF62A__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_062671E9878DF62A_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_355* Method_1_0DB1A52DE576427C()
	{
		return ((::Class_0_16E4307DCC419505_355*(*)())((::PBYTE)hIl2Cpp + CLASS_1_062671E9878DF62A_METHOD_1_0DB1A52DE576427C_OFFSET))();
	}

	static ::System::Void Method_1_039D28F47D3F4250(::Class_2_636B2F59931721BC* a1)
	{
		return ((::System::Void(*)(::Class_2_636B2F59931721BC*))((::PBYTE)hIl2Cpp + CLASS_1_062671E9878DF62A_METHOD_1_039D28F47D3F4250_OFFSET))(a1);
	}
};
