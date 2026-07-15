#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_1_B1BC6A4125A00322;
class Class_2_B5C26CAF86EF077B;

#define CLASS_1_ABA554CB0F92F6E2_METHOD_1_0DB1A52DE576427C_OFFSET UNITYSDK_OFFSET(0x15858B80)
#define CLASS_1_ABA554CB0F92F6E2_METHOD_1_C551323B103C7948_OFFSET UNITYSDK_OFFSET(0x15858C20)
#define CLASS_1_ABA554CB0F92F6E2_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x15858AD0)
#define CLASS_1_ABA554CB0F92F6E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15858D40)

inline static constexpr unsigned int Class_1_ABA554CB0F92F6E2_TypeDefinitionIndex = 47350;

class Class_1_ABA554CB0F92F6E2 : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABA554CB0F92F6E2_TypeDefinitionIndex)->GetStaticField(0x298C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABA554CB0F92F6E2__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABA554CB0F92F6E2_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_355* Method_1_0DB1A52DE576427C()
	{
		return ((::Class_0_16E4307DCC419505_355*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABA554CB0F92F6E2_METHOD_1_0DB1A52DE576427C_OFFSET))();
	}

	static ::System::Void Method_1_C551323B103C7948(::Class_1_B1BC6A4125A00322* a1)
	{
		return ((::System::Void(*)(::Class_1_B1BC6A4125A00322*))((::PBYTE)hIl2Cpp + CLASS_1_ABA554CB0F92F6E2_METHOD_1_C551323B103C7948_OFFSET))(a1);
	}
};
