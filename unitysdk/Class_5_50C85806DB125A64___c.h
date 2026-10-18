#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_415;
namespace System { template <typename T> class Action_1; }

#define CLASS_5_50C85806DB125A64___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC58BB0)
#define CLASS_5_50C85806DB125A64___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC58BF0)
#define CLASS_5_50C85806DB125A64___C___ONPAUSEIMPLEMENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC58C00)
#define CLASS_5_50C85806DB125A64___C___ONRESUMEIMPLEMENT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1EC58D20)

inline static constexpr unsigned int Class_5_50C85806DB125A64___c_TypeDefinitionIndex = 44203;

class Class_5_50C85806DB125A64___c : public ::System::Object
{
public:
	static ::Class_5_50C85806DB125A64___c** StaticGet___9()
	{
		return (::Class_5_50C85806DB125A64___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_50C85806DB125A64___c_TypeDefinitionIndex)->GetStaticField(0x49A70);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_50C85806DB125A64___c_TypeDefinitionIndex)->GetStaticField(0x49A78);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_50C85806DB125A64___c_TypeDefinitionIndex)->GetStaticField(0x49A80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnPauseImplement_b__7_0(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___C___ONPAUSEIMPLEMENT_B__7_0_OFFSET))(this, a1);
	}

	::System::Void __OnResumeImplement_b__8_0(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___C___ONRESUMEIMPLEMENT_B__8_0_OFFSET))(this, a1);
	}
};
