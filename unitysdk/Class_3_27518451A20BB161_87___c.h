#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_343;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_27518451A20BB161_87___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FA0D40)
#define CLASS_3_27518451A20BB161_87___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA0D80)
#define CLASS_3_27518451A20BB161_87___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x8FA0D90)

inline static constexpr unsigned int Class_3_27518451A20BB161_87___c_TypeDefinitionIndex = 49678;

class Class_3_27518451A20BB161_87___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_0_16E4307DCC419505_343*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_343*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_87___c_TypeDefinitionIndex)->GetStaticField(0x60750);
	}
	static ::Class_3_27518451A20BB161_87___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_87___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_87___c_TypeDefinitionIndex)->GetStaticField(0x60758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0(::Class_0_16E4307DCC419505_343* instance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87___C__ONTASKBEGIN_B__2_0_OFFSET))(this, instance);
	}
};
