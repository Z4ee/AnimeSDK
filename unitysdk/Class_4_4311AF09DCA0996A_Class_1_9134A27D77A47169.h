#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/System/Object.h"

class Class_4_C2BA23F5AA27FA67;
namespace Nap::NapECS { class EcsEntity; }

#define CLASS_4_4311AF09DCA0996A_CLASS_1_9134A27D77A47169_METHOD_1_4085C592A174067A_OFFSET UNITYSDK_OFFSET(0x17692210)
#define CLASS_4_4311AF09DCA0996A_CLASS_1_9134A27D77A47169_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x17692900)
#define CLASS_4_4311AF09DCA0996A_CLASS_1_9134A27D77A47169__CTOR_OFFSET UNITYSDK_OFFSET(0x17692200)

inline static constexpr unsigned int Class_4_4311AF09DCA0996A_Class_1_9134A27D77A47169_TypeDefinitionIndex = 78183;

class Class_4_4311AF09DCA0996A_Class_1_9134A27D77A47169 : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* Field_1_0; // 0x10
	::Class_4_C2BA23F5AA27FA67* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_CLASS_1_9134A27D77A47169__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4085C592A174067A(::MoleMole::Config::EnterBattleState a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_CLASS_1_9134A27D77A47169_METHOD_1_4085C592A174067A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_CLASS_1_9134A27D77A47169_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}
};
