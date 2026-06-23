#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_59.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_126;
class Class_0_16E4307DCC419505_128;

#define CLASS_1_9A99004BD2C6864C_METHOD_1_0DF2EFD11B115106_OFFSET UNITYSDK_OFFSET(0x1CF6EDC0)
#define CLASS_1_9A99004BD2C6864C_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1CF6E970)
#define CLASS_1_9A99004BD2C6864C_METHOD_1_B4FE8EFDD780CD9A_OFFSET UNITYSDK_OFFSET(0x1CF6EB30)
#define CLASS_1_9A99004BD2C6864C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF6E900)

inline static constexpr unsigned int Class_1_9A99004BD2C6864C_TypeDefinitionIndex = 33907;

class Class_1_9A99004BD2C6864C : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_126*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_126*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A99004BD2C6864C_TypeDefinitionIndex)->GetStaticField(0x275D0);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_128*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_128*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A99004BD2C6864C_TypeDefinitionIndex)->GetStaticField(0x275D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A99004BD2C6864C__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_126* Method_1_B4FE8EFDD780CD9A(::Enum_3_0A3761FE34514D6C_59 a1)
	{
		return ((::Class_0_16E4307DCC419505_126*(*)(::Enum_3_0A3761FE34514D6C_59))((::PBYTE)hIl2Cpp + CLASS_1_9A99004BD2C6864C_METHOD_1_B4FE8EFDD780CD9A_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_126* Method_1_0DF2EFD11B115106(::Enum_3_0A3761FE34514D6C_59 a1)
	{
		return ((::Class_0_16E4307DCC419505_126*(*)(::Enum_3_0A3761FE34514D6C_59))((::PBYTE)hIl2Cpp + CLASS_1_9A99004BD2C6864C_METHOD_1_0DF2EFD11B115106_OFFSET))(a1);
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A99004BD2C6864C_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}
};
