#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D6DA183EF60F02C8;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_11FD92D4A34B6425___C_METHOD_1_D9E16EE20DF16DFD_OFFSET UNITYSDK_OFFSET(0x13B0E030)
#define CLASS_3_11FD92D4A34B6425___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B0DFE0)
#define CLASS_3_11FD92D4A34B6425___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B0E020)

inline static constexpr unsigned int Class_3_11FD92D4A34B6425___c_TypeDefinitionIndex = 78448;

class Class_3_11FD92D4A34B6425___c : public ::System::Object
{
public:
	static ::Class_3_11FD92D4A34B6425___c** StaticGet___9()
	{
		return (::Class_3_11FD92D4A34B6425___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_11FD92D4A34B6425___c_TypeDefinitionIndex)->GetStaticField(0x35F90);
	}
	static ::System::Action_1<::Class_3_D6DA183EF60F02C8*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_D6DA183EF60F02C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_11FD92D4A34B6425___c_TypeDefinitionIndex)->GetStaticField(0x35F98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_11FD92D4A34B6425___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11FD92D4A34B6425___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9E16EE20DF16DFD(::Class_3_D6DA183EF60F02C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_11FD92D4A34B6425___C_METHOD_1_D9E16EE20DF16DFD_OFFSET))(this, a1);
	}
};
