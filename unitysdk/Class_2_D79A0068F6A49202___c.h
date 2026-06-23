#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
namespace System { class Action; }

#define CLASS_2_D79A0068F6A49202___C_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xE92C3B0)
#define CLASS_2_D79A0068F6A49202___C_METHOD_1_4C81D6FB33195411_OFFSET UNITYSDK_OFFSET(0xE92C3F0)
#define CLASS_2_D79A0068F6A49202___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE92C360)
#define CLASS_2_D79A0068F6A49202___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE92C3A0)

inline static constexpr unsigned int Class_2_D79A0068F6A49202___c_TypeDefinitionIndex = 46748;

class Class_2_D79A0068F6A49202___c : public ::System::Object
{
public:
	static ::Class_2_D79A0068F6A49202___c** StaticGet___9()
	{
		return (::Class_2_D79A0068F6A49202___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D79A0068F6A49202___c_TypeDefinitionIndex)->GetStaticField(0x3E5D0);
	}
	static ::System::Action** StaticGet___9__4_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D79A0068F6A49202___c_TypeDefinitionIndex)->GetStaticField(0x3E5D8);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__10_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D79A0068F6A49202___c_TypeDefinitionIndex)->GetStaticField(0x3E5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_4C81D6FB33195411(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C_METHOD_1_4C81D6FB33195411_OFFSET))(this, a1);
	}
};
