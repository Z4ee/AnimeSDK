#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_58.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_88;
class Class_0_16E4307DCC419505_92;

#define CLASS_1_C8743DC66B8E4057_METHOD_1_0DF2EFD11B115106_OFFSET UNITYSDK_OFFSET(0x1ABC3610)
#define CLASS_1_C8743DC66B8E4057_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1ABC3450)
#define CLASS_1_C8743DC66B8E4057_METHOD_1_B4FE8EFDD780CD9A_OFFSET UNITYSDK_OFFSET(0x1ABC3840)
#define CLASS_1_C8743DC66B8E4057__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABC33E0)

inline static constexpr unsigned int Class_1_C8743DC66B8E4057_TypeDefinitionIndex = 32359;

class Class_1_C8743DC66B8E4057 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_92*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_92*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8743DC66B8E4057_TypeDefinitionIndex)->GetStaticField(0x25BD0);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_88*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8743DC66B8E4057_TypeDefinitionIndex)->GetStaticField(0x25BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8743DC66B8E4057__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8743DC66B8E4057_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_92* Method_1_0DF2EFD11B115106(::Enum_3_0A3761FE34514D6C_58 a1)
	{
		return ((::Class_0_16E4307DCC419505_92*(*)(::Enum_3_0A3761FE34514D6C_58))((::PBYTE)hIl2Cpp + CLASS_1_C8743DC66B8E4057_METHOD_1_0DF2EFD11B115106_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_92* Method_1_B4FE8EFDD780CD9A(::Enum_3_0A3761FE34514D6C_58 a1)
	{
		return ((::Class_0_16E4307DCC419505_92*(*)(::Enum_3_0A3761FE34514D6C_58))((::PBYTE)hIl2Cpp + CLASS_1_C8743DC66B8E4057_METHOD_1_B4FE8EFDD780CD9A_OFFSET))(a1);
	}
};
