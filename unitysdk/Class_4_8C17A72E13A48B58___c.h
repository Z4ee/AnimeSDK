#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_4_8C17A72E13A48B58___C_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xF62C930)
#define CLASS_4_8C17A72E13A48B58___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF62C8E0)
#define CLASS_4_8C17A72E13A48B58___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF62C920)

inline static constexpr unsigned int Class_4_8C17A72E13A48B58___c_TypeDefinitionIndex = 79002;

class Class_4_8C17A72E13A48B58___c : public ::System::Object
{
public:
	static ::Class_4_8C17A72E13A48B58___c** StaticGet___9()
	{
		return (::Class_4_8C17A72E13A48B58___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8C17A72E13A48B58___c_TypeDefinitionIndex)->GetStaticField(0x378B0);
	}
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8C17A72E13A48B58___c_TypeDefinitionIndex)->GetStaticField(0x378B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_8C17A72E13A48B58___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C17A72E13A48B58___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C17A72E13A48B58___C_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}
};
