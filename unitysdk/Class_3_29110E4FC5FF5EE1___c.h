#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D2F36DA3858F3459;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_29110E4FC5FF5EE1___C_METHOD_1_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0x139FC520)
#define CLASS_3_29110E4FC5FF5EE1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x139FC4D0)
#define CLASS_3_29110E4FC5FF5EE1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x139FC510)

inline static constexpr unsigned int Class_3_29110E4FC5FF5EE1___c_TypeDefinitionIndex = 62239;

class Class_3_29110E4FC5FF5EE1___c : public ::System::Object
{
public:
	static ::Class_3_29110E4FC5FF5EE1___c** StaticGet___9()
	{
		return (::Class_3_29110E4FC5FF5EE1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_29110E4FC5FF5EE1___c_TypeDefinitionIndex)->GetStaticField(0x30D20);
	}
	static ::System::Action_1<::Class_3_D2F36DA3858F3459*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_D2F36DA3858F3459*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_29110E4FC5FF5EE1___c_TypeDefinitionIndex)->GetStaticField(0x30D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_29110E4FC5FF5EE1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29110E4FC5FF5EE1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BFF96E989AC38879(::Class_3_D2F36DA3858F3459* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D2F36DA3858F3459*))((::PBYTE)hIl2Cpp + CLASS_3_29110E4FC5FF5EE1___C_METHOD_1_BFF96E989AC38879_OFFSET))(this, a1);
	}
};
