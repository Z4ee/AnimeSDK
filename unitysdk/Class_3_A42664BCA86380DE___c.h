#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E3A7B298AF84D5C8;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A42664BCA86380DE___C_METHOD_1_C805032703A305D8_OFFSET UNITYSDK_OFFSET(0x156E1130)
#define CLASS_3_A42664BCA86380DE___C_METHOD_1_DB42CCC5CAC2F1AC_OFFSET UNITYSDK_OFFSET(0x156E1190)
#define CLASS_3_A42664BCA86380DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E10E0)
#define CLASS_3_A42664BCA86380DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156E1120)

inline static constexpr unsigned int Class_3_A42664BCA86380DE___c_TypeDefinitionIndex = 48941;

class Class_3_A42664BCA86380DE___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_E3A7B298AF84D5C8*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_E3A7B298AF84D5C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x42D70);
	}
	static ::Class_3_A42664BCA86380DE___c** StaticGet___9()
	{
		return (::Class_3_A42664BCA86380DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x42D78);
	}
	static ::System::Action_1<::Class_3_E3A7B298AF84D5C8*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::Class_3_E3A7B298AF84D5C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x42D80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C805032703A305D8(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C_METHOD_1_C805032703A305D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB42CCC5CAC2F1AC(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C_METHOD_1_DB42CCC5CAC2F1AC_OFFSET))(this, a1);
	}
};
