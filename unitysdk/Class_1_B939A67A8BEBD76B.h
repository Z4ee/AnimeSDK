#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_575;
class Class_0_16E4307DCC419505_576;
namespace System { class String; }

#define CLASS_1_B939A67A8BEBD76B_METHOD_1_606CF306365F7210_OFFSET UNITYSDK_OFFSET(0x923D440)
#define CLASS_1_B939A67A8BEBD76B__CTOR_OFFSET UNITYSDK_OFFSET(0x923D540)

inline static constexpr unsigned int Class_1_B939A67A8BEBD76B_TypeDefinitionIndex = 55273;

class Class_1_B939A67A8BEBD76B : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_575** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_575**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B939A67A8BEBD76B_TypeDefinitionIndex)->GetStaticField(0x69F10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B939A67A8BEBD76B__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_576* Method_1_606CF306365F7210(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_576*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B939A67A8BEBD76B_METHOD_1_606CF306365F7210_OFFSET))(a1);
	}
};
