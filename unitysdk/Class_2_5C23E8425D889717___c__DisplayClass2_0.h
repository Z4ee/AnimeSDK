#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }

#define CLASS_2_5C23E8425D889717___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1456FFB0)
#define CLASS_2_5C23E8425D889717___C__DISPLAYCLASS2_0__PHASEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x14571320)

inline static constexpr unsigned int Class_2_5C23E8425D889717___c__DisplayClass2_0_TypeDefinitionIndex = 58445;

class Class_2_5C23E8425D889717___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::BattleGamePhase* battleGamePhase; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C23E8425D889717___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _PhaseExit_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C23E8425D889717___C__DISPLAYCLASS2_0__PHASEEXIT_B__0_OFFSET))(this);
	}
};
