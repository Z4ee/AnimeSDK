#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_1_9AD709374DC108D7___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x1533C620)
#define CLASS_1_9AD709374DC108D7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1533C5D0)
#define CLASS_1_9AD709374DC108D7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1533C610)

inline static constexpr unsigned int Class_1_9AD709374DC108D7___c_TypeDefinitionIndex = 49916;

class Class_1_9AD709374DC108D7___c : public ::System::Object
{
public:
	static ::Class_1_9AD709374DC108D7___c** StaticGet___9()
	{
		return (::Class_1_9AD709374DC108D7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD709374DC108D7___c_TypeDefinitionIndex)->GetStaticField(0x3C000);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__6_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD709374DC108D7___c_TypeDefinitionIndex)->GetStaticField(0x3C008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD709374DC108D7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD709374DC108D7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_9AD709374DC108D7___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
