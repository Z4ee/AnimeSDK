#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA217ABF4E3B4F3F;
namespace RPG::Client { class BattleGamePageContext; }

#define CLASS_2_D8A9B7E75FE2A68B_2___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA59DFF0)
#define CLASS_2_D8A9B7E75FE2A68B_2___C__DISPLAYCLASS5_0___ONBIND_B__0_OFFSET UNITYSDK_OFFSET(0xA59FED0)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_2___c__DisplayClass5_0_TypeDefinitionIndex = 67508;

class Class_2_D8A9B7E75FE2A68B_2___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::BattleGamePageContext* phaseUI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_b__0(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___C__DISPLAYCLASS5_0___ONBIND_B__0_OFFSET))(this, a1);
	}
};
