#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/System/Object.h"

class Class_4_FFDCB461A077D183;
namespace Nap::NapECS { class EcsEntity; }

#define CLASS_4_B80768819CA0A955_CLASS_1_9134A27D77A47169_METHOD_1_4085C592A174067A_OFFSET UNITYSDK_OFFSET(0x169F2C20)
#define CLASS_4_B80768819CA0A955_CLASS_1_9134A27D77A47169_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x169F2B10)
#define CLASS_4_B80768819CA0A955_CLASS_1_9134A27D77A47169__CTOR_OFFSET UNITYSDK_OFFSET(0x169F2B00)

inline static constexpr unsigned int Class_4_B80768819CA0A955_Class_1_9134A27D77A47169_TypeDefinitionIndex = 81572;

class Class_4_B80768819CA0A955_Class_1_9134A27D77A47169 : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* Field_1_1; // 0x10
	::Class_4_FFDCB461A077D183* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_CLASS_1_9134A27D77A47169__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_CLASS_1_9134A27D77A47169_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_1_4085C592A174067A(::MoleMole::Config::EnterBattleState a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_CLASS_1_9134A27D77A47169_METHOD_1_4085C592A174067A_OFFSET))(this, a1, a2);
	}
};
