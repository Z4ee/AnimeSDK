#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

#define CLASS_2_3671DCF57496B272_METHOD_2_263ED3330B36E108_OFFSET UNITYSDK_OFFSET(0x165106E0)
#define CLASS_2_3671DCF57496B272_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16510650)
#define CLASS_2_3671DCF57496B272_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16510740)
#define CLASS_2_3671DCF57496B272__CCTOR_OFFSET UNITYSDK_OFFSET(0x165105D0)
#define CLASS_2_3671DCF57496B272__CTOR_OFFSET UNITYSDK_OFFSET(0x16510640)

inline static constexpr unsigned int Class_2_3671DCF57496B272_TypeDefinitionIndex = 59421;

class Class_2_3671DCF57496B272 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x54; // 0x0
	::MoleMole::Config::EnterBattleState Field_2_1; // 0x20
	::MoleMole::Config::EnterBattleState Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3671DCF57496B272__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3671DCF57496B272__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3671DCF57496B272_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_263ED3330B36E108(::MoleMole::Config::EnterBattleState a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_2_3671DCF57496B272_METHOD_2_263ED3330B36E108_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3671DCF57496B272_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
