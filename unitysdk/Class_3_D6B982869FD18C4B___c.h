#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C05CEFF8CC82AB4B;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D6B982869FD18C4B___C_METHOD_1_D7917F24844E103A_OFFSET UNITYSDK_OFFSET(0xD380E40)
#define CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD380DF0)
#define CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD380E30)

inline static constexpr unsigned int Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex = 66940;

class Class_3_D6B982869FD18C4B___c : public ::System::Object
{
public:
	static ::Class_3_D6B982869FD18C4B___c** StaticGet___9()
	{
		return (::Class_3_D6B982869FD18C4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x387A0);
	}
	static ::System::Action_1<::Class_3_C05CEFF8CC82AB4B*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_C05CEFF8CC82AB4B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x387A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7917F24844E103A(::Class_3_C05CEFF8CC82AB4B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C05CEFF8CC82AB4B*))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C_METHOD_1_D7917F24844E103A_OFFSET))(this, a1);
	}
};
