#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD10484486A703;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_888D1E1A4D89818B___C_METHOD_1_25053ACCDCEFF59A_OFFSET UNITYSDK_OFFSET(0x13404540)
#define CLASS_3_888D1E1A4D89818B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134044F0)
#define CLASS_3_888D1E1A4D89818B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13404530)

inline static constexpr unsigned int Class_3_888D1E1A4D89818B___c_TypeDefinitionIndex = 63641;

class Class_3_888D1E1A4D89818B___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_32CD10484486A703*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_32CD10484486A703*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_888D1E1A4D89818B___c_TypeDefinitionIndex)->GetStaticField(0x494A0);
	}
	static ::Class_3_888D1E1A4D89818B___c** StaticGet___9()
	{
		return (::Class_3_888D1E1A4D89818B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_888D1E1A4D89818B___c_TypeDefinitionIndex)->GetStaticField(0x494A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_888D1E1A4D89818B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_888D1E1A4D89818B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25053ACCDCEFF59A(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_888D1E1A4D89818B___C_METHOD_1_25053ACCDCEFF59A_OFFSET))(this, a1);
	}
};
