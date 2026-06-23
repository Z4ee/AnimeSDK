#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_D8C63F13DC2B644E___C_METHOD_1_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x13AABF30)
#define CLASS_2_D8C63F13DC2B644E___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13AABF20)
#define CLASS_2_D8C63F13DC2B644E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AABED0)
#define CLASS_2_D8C63F13DC2B644E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AABF10)

inline static constexpr unsigned int Class_2_D8C63F13DC2B644E___c_TypeDefinitionIndex = 47559;

class Class_2_D8C63F13DC2B644E___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8C63F13DC2B644E___c_TypeDefinitionIndex)->GetStaticField(0x36EA0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8C63F13DC2B644E___c_TypeDefinitionIndex)->GetStaticField(0x36EA8);
	}
	static ::Class_2_D8C63F13DC2B644E___c** StaticGet___9()
	{
		return (::Class_2_D8C63F13DC2B644E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8C63F13DC2B644E___c_TypeDefinitionIndex)->GetStaticField(0x36EB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D8C63F13DC2B644E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C63F13DC2B644E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C63F13DC2B644E___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C63F13DC2B644E___C_METHOD_1_B078C58C2CD24B5E_OFFSET))(this);
	}
};
