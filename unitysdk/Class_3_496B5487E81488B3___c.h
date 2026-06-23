#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_496B5487E81488B3___C_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x15D285E0)
#define CLASS_3_496B5487E81488B3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D28590)
#define CLASS_3_496B5487E81488B3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D285D0)

inline static constexpr unsigned int Class_3_496B5487E81488B3___c_TypeDefinitionIndex = 49265;

class Class_3_496B5487E81488B3___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__17_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_496B5487E81488B3___c_TypeDefinitionIndex)->GetStaticField(0x3FD20);
	}
	static ::Class_3_496B5487E81488B3___c** StaticGet___9()
	{
		return (::Class_3_496B5487E81488B3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_496B5487E81488B3___c_TypeDefinitionIndex)->GetStaticField(0x3FD28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_496B5487E81488B3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_496B5487E81488B3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_496B5487E81488B3___C_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};
