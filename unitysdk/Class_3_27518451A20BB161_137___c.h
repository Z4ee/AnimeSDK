#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_415;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_27518451A20BB161_137___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1608B9F0)
#define CLASS_3_27518451A20BB161_137___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1608BA30)
#define CLASS_3_27518451A20BB161_137___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1608BA40)

inline static constexpr unsigned int Class_3_27518451A20BB161_137___c_TypeDefinitionIndex = 54111;

class Class_3_27518451A20BB161_137___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_137___c_TypeDefinitionIndex)->GetStaticField(0x25840);
	}
	static ::Class_3_27518451A20BB161_137___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_137___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_137___c_TypeDefinitionIndex)->GetStaticField(0x25848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
	}
};
