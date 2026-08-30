#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_43BD383C98B4C0C5_130__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FB6A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_130_TypeDefinitionIndex = 54640;

class Class_1_43BD383C98B4C0C5_130 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* CFOAICLAMHO; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* MCLLALGABAB; // 0x18
	::RPG::GameCore::FixPoint JALMAHOCDNO; // 0x20
	::RPG::GameCore::FixPoint FGBPFGEECBB; // 0x28
	::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0x30
	::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0x38
	::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0x40
	::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0x48
	::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0x50
	::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0x98
	::RPG::GameCore::FixPoint DFMNAOJMODP; // 0xE8
	::System::Boolean ANNFMNICHCJ; // 0xF0
	::System::Boolean IBHCHCFKBEP; // 0xF1
	::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0xF4
	::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0xF8
	::RPG::GameCore::FixPoint ADMLFGINDGP; // 0x100
	::RPG::GameCore::FixPoint KOEONAHJCOA; // 0x108
	::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0x110
	::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0x118
	::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0x120
	::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0x128
	::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0x130
	::RPG::GameCore::FixPoint PINNPLKBABH; // 0x138
	::RPG::GameCore::FixPoint BNNONJNHNJC; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_130__CTOR_OFFSET))(this);
	}
};
