#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_27518451A20BB161_69___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1912A780)
#define CLASS_3_27518451A20BB161_69___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1912A7B0)
#define CLASS_3_27518451A20BB161_69___C___EXECUTESEQUENCE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1912A7C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_69___c_TypeDefinitionIndex = 53153;

class Class_3_27518451A20BB161_69___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_07C3C4D2990C49EE*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_07C3C4D2990C49EE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_69___c_TypeDefinitionIndex)->GetStaticField(0x17A00);
	}
	static ::Class_3_27518451A20BB161_69___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_69___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_69___c_TypeDefinitionIndex)->GetStaticField(0x17A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69___C__CTOR_OFFSET))(this);
	}

	::System::Void __ExecuteSequence_b__2_0(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69___C___EXECUTESEQUENCE_B__2_0_OFFSET))(this, a1);
	}
};
