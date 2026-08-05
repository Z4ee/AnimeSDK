#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_19;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6590C9B24EBB629A___C_METHOD_1_0671A658DD7403FF_OFFSET UNITYSDK_OFFSET(0x14631480)
#define CLASS_1_6590C9B24EBB629A___C_METHOD_1_D0FD5BE6E93E76AB_OFFSET UNITYSDK_OFFSET(0x14631660)
#define CLASS_1_6590C9B24EBB629A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14631430)
#define CLASS_1_6590C9B24EBB629A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14631470)

inline static constexpr unsigned int Class_1_6590C9B24EBB629A___c_TypeDefinitionIndex = 54730;

class Class_1_6590C9B24EBB629A___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_472679C84451629A_19*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_3_472679C84451629A_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6590C9B24EBB629A___c_TypeDefinitionIndex)->GetStaticField(0x35C00);
	}
	static ::Class_1_6590C9B24EBB629A___c** StaticGet___9()
	{
		return (::Class_1_6590C9B24EBB629A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6590C9B24EBB629A___c_TypeDefinitionIndex)->GetStaticField(0x35C08);
	}
	static ::System::Action_1<::Class_3_472679C84451629A_19*>** StaticGet___9__0_1()
	{
		return (::System::Action_1<::Class_3_472679C84451629A_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6590C9B24EBB629A___c_TypeDefinitionIndex)->GetStaticField(0x35C10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6590C9B24EBB629A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6590C9B24EBB629A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0671A658DD7403FF(::Class_3_472679C84451629A_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_19*))((::PBYTE)hIl2Cpp + CLASS_1_6590C9B24EBB629A___C_METHOD_1_0671A658DD7403FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0FD5BE6E93E76AB(::Class_3_472679C84451629A_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_19*))((::PBYTE)hIl2Cpp + CLASS_1_6590C9B24EBB629A___C_METHOD_1_D0FD5BE6E93E76AB_OFFSET))(this, a1);
	}
};
