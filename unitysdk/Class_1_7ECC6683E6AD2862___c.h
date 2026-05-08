#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define CLASS_1_7ECC6683E6AD2862___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x13269E40)
#define CLASS_1_7ECC6683E6AD2862___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13269DF0)
#define CLASS_1_7ECC6683E6AD2862___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13269E30)

inline static constexpr unsigned int Class_1_7ECC6683E6AD2862___c_TypeDefinitionIndex = 79582;

class Class_1_7ECC6683E6AD2862___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__23_1()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7ECC6683E6AD2862___c_TypeDefinitionIndex)->GetStaticField(0x397C0);
	}
	static ::Class_1_7ECC6683E6AD2862___c** StaticGet___9()
	{
		return (::Class_1_7ECC6683E6AD2862___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7ECC6683E6AD2862___c_TypeDefinitionIndex)->GetStaticField(0x397C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7ECC6683E6AD2862___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECC6683E6AD2862___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_1_7ECC6683E6AD2862___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
