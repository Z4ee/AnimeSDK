#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5C23E8425D889717;
namespace RPG::Client { class BattleGamePhase; }

#define CLASS_2_5C23E8425D889717___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13D01C40)
#define CLASS_2_5C23E8425D889717___C__DISPLAYCLASS5_0___MEMORYPHASEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x13D02670)

inline static constexpr unsigned int Class_2_5C23E8425D889717___c__DisplayClass5_0_TypeDefinitionIndex = 57188;

class Class_2_5C23E8425D889717___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_5C23E8425D889717* __4__this; // 0x10
	::RPG::Client::BattleGamePhase* battleGamePhase; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C23E8425D889717___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __MemoryPhaseExit_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C23E8425D889717___C__DISPLAYCLASS5_0___MEMORYPHASEEXIT_B__0_OFFSET))(this);
	}
};
