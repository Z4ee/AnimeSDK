#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B26E06FC40F846CD_2;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0992EEB08DCE94E1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA114D0)
#define CLASS_1_0992EEB08DCE94E1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA11510)
#define CLASS_1_0992EEB08DCE94E1___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET UNITYSDK_OFFSET(0xCA11520)

inline static constexpr unsigned int Class_1_0992EEB08DCE94E1___c_TypeDefinitionIndex = 81866;

class Class_1_0992EEB08DCE94E1___c : public ::System::Object
{
public:
	static ::Class_1_0992EEB08DCE94E1___c** StaticGet___9()
	{
		return (::Class_1_0992EEB08DCE94E1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0992EEB08DCE94E1___c_TypeDefinitionIndex)->GetStaticField(0x1F690);
	}
	static ::System::Action_1<::Class_1_B26E06FC40F846CD_2*>** StaticGet___9__66_0()
	{
		return (::System::Action_1<::Class_1_B26E06FC40F846CD_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0992EEB08DCE94E1___c_TypeDefinitionIndex)->GetStaticField(0x1F698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0992EEB08DCE94E1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0992EEB08DCE94E1___C__CTOR_OFFSET))(this);
	}

	::System::Void __StartFinishedEndMatchPromise_b__66_0(::Class_1_B26E06FC40F846CD_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD_2*))((::PBYTE)hIl2Cpp + CLASS_1_0992EEB08DCE94E1___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET))(this, a1);
	}
};
