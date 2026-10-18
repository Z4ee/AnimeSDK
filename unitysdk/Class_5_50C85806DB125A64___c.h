#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_415;
namespace System { template <typename T> class Action_1; }

#define CLASS_5_50C85806DB125A64___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC86260)
#define CLASS_5_50C85806DB125A64___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC862A0)
#define CLASS_5_50C85806DB125A64___C___ONPAUSEIMPLEMENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC862B0)
#define CLASS_5_50C85806DB125A64___C___ONRESUMEIMPLEMENT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1EC863D0)

inline static constexpr unsigned int Class_5_50C85806DB125A64___c_TypeDefinitionIndex = 44203;

class Class_5_50C85806DB125A64___c : public ::System::Object
{
public:
	static ::Class_5_50C85806DB125A64___c** StaticGet___9()
	{
		return (::Class_5_50C85806DB125A64___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_50C85806DB125A64___c_TypeDefinitionIndex)->GetStaticField(0x4D580);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_50C85806DB125A64___c_TypeDefinitionIndex)->GetStaticField(0x4D588);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_50C85806DB125A64___c_TypeDefinitionIndex)->GetStaticField(0x4D590);
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
