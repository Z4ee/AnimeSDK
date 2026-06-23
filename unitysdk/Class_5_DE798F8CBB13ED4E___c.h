#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define CLASS_5_DE798F8CBB13ED4E___C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x11D14520)
#define CLASS_5_DE798F8CBB13ED4E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D144D0)
#define CLASS_5_DE798F8CBB13ED4E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D14510)

inline static constexpr unsigned int Class_5_DE798F8CBB13ED4E___c_TypeDefinitionIndex = 49571;

class Class_5_DE798F8CBB13ED4E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__11_1()
	{
		return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE798F8CBB13ED4E___c_TypeDefinitionIndex)->GetStaticField(0x44360);
	}
	static ::Class_5_DE798F8CBB13ED4E___c** StaticGet___9()
	{
		return (::Class_5_DE798F8CBB13ED4E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE798F8CBB13ED4E___c_TypeDefinitionIndex)->GetStaticField(0x44368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E___C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
