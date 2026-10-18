#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B26E06FC40F846CD_2;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_243AEB71B7D38FD2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA0A540)
#define CLASS_1_243AEB71B7D38FD2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A580)
#define CLASS_1_243AEB71B7D38FD2___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET UNITYSDK_OFFSET(0xCA0A590)

inline static constexpr unsigned int Class_1_243AEB71B7D38FD2___c_TypeDefinitionIndex = 81865;

class Class_1_243AEB71B7D38FD2___c : public ::System::Object
{
public:
	static ::Class_1_243AEB71B7D38FD2___c** StaticGet___9()
	{
		return (::Class_1_243AEB71B7D38FD2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_243AEB71B7D38FD2___c_TypeDefinitionIndex)->GetStaticField(0x1F120);
	}
	static ::System::Action_1<::Class_1_B26E06FC40F846CD_2*>** StaticGet___9__66_0()
	{
		return (::System::Action_1<::Class_1_B26E06FC40F846CD_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_243AEB71B7D38FD2___c_TypeDefinitionIndex)->GetStaticField(0x1F128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C__CTOR_OFFSET))(this);
	}

	::System::Void __StartFinishedEndMatchPromise_b__66_0(::Class_1_B26E06FC40F846CD_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD_2*))((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET))(this, a1);
	}
};
