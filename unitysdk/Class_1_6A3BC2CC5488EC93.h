#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_59.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_122;
class Class_0_16E4307DCC419505_123;

#define CLASS_1_6A3BC2CC5488EC93_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1E3AEEF0)
#define CLASS_1_6A3BC2CC5488EC93_METHOD_1_507DCA0727AA7DDB_OFFSET UNITYSDK_OFFSET(0x1E3A4390)
#define CLASS_1_6A3BC2CC5488EC93_METHOD_1_B4FE8EFDD780CD9A_OFFSET UNITYSDK_OFFSET(0x1E3AF0D0)
#define CLASS_1_6A3BC2CC5488EC93__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AEE80)

inline static constexpr unsigned int Class_1_6A3BC2CC5488EC93_TypeDefinitionIndex = 34496;

class Class_1_6A3BC2CC5488EC93 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_122*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_122*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A3BC2CC5488EC93_TypeDefinitionIndex)->GetStaticField(0x28E90);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_123*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_123*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A3BC2CC5488EC93_TypeDefinitionIndex)->GetStaticField(0x28E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A3BC2CC5488EC93__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A3BC2CC5488EC93_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_122* Method_1_507DCA0727AA7DDB(::Enum_3_0A3761FE34514D6C_59 a1)
	{
		return ((::Class_0_16E4307DCC419505_122*(*)(::Enum_3_0A3761FE34514D6C_59))((::PBYTE)hIl2Cpp + CLASS_1_6A3BC2CC5488EC93_METHOD_1_507DCA0727AA7DDB_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_122* Method_1_B4FE8EFDD780CD9A(::Enum_3_0A3761FE34514D6C_59 a1)
	{
		return ((::Class_0_16E4307DCC419505_122*(*)(::Enum_3_0A3761FE34514D6C_59))((::PBYTE)hIl2Cpp + CLASS_1_6A3BC2CC5488EC93_METHOD_1_B4FE8EFDD780CD9A_OFFSET))(a1);
	}
};
