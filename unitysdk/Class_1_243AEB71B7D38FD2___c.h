#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B26E06FC40F846CD_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_243AEB71B7D38FD2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA96350)
#define CLASS_1_243AEB71B7D38FD2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA96390)
#define CLASS_1_243AEB71B7D38FD2___C___STARTFINISHEDENDMATCHPROMISE_B__65_0_OFFSET UNITYSDK_OFFSET(0xCA963A0)

inline static constexpr unsigned int Class_1_243AEB71B7D38FD2___c_TypeDefinitionIndex = 80538;

class Class_1_243AEB71B7D38FD2___c : public ::System::Object
{
public:
	static ::Class_1_243AEB71B7D38FD2___c** StaticGet___9()
	{
		return (::Class_1_243AEB71B7D38FD2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_243AEB71B7D38FD2___c_TypeDefinitionIndex)->GetStaticField(0x5BD50);
	}
	static ::System::Action_1<::Class_1_B26E06FC40F846CD_1*>** StaticGet___9__65_0()
	{
		return (::System::Action_1<::Class_1_B26E06FC40F846CD_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_243AEB71B7D38FD2___c_TypeDefinitionIndex)->GetStaticField(0x5BD58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C__CTOR_OFFSET))(this);
	}

	::System::Void __StartFinishedEndMatchPromise_b__65_0(::Class_1_B26E06FC40F846CD_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD_1*))((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C___STARTFINISHEDENDMATCHPROMISE_B__65_0_OFFSET))(this, a1);
	}
};
