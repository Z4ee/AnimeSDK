#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class SidePuzzleTargetData; }

#define CLASS_1_7D93990153DD34ED___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0AEF30)
#define CLASS_1_7D93990153DD34ED___C__DISPLAYCLASS4_0___ONQUESTUPDATED_B__0_OFFSET UNITYSDK_OFFSET(0x1A0B1990)

inline static constexpr unsigned int Class_1_7D93990153DD34ED___c__DisplayClass4_0_TypeDefinitionIndex = 76357;

class Class_1_7D93990153DD34ED___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::UInt32 questID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnQuestUpdated_b__0(::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED___C__DISPLAYCLASS4_0___ONQUESTUPDATED_B__0_OFFSET))(this, a1);
	}
};
