#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_43BD383C98B4C0C5_130__CTOR_OFFSET UNITYSDK_OFFSET(0xD81C020)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_130_TypeDefinitionIndex = 54640;

class Class_1_43BD383C98B4C0C5_130 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* CFOAICLAMHO; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* MCLLALGABAB; // 0x18
	::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0x20
	::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0x28
	::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0x30
	::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0x38
	::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0x40
	::RPG::GameCore::FixPoint JALMAHOCDNO; // 0x48
	::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0x50
	::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0x58
	::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0xA0
	::RPG::GameCore::FixPoint ADMLFGINDGP; // 0xA8
	::RPG::GameCore::FixPoint KOEONAHJCOA; // 0xB0
	::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0xB8
	::RPG::GameCore::FixPoint PINNPLKBABH; // 0xC0
	::RPG::GameCore::FixPoint BNNONJNHNJC; // 0xC8
	::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0xD0
	::System::Boolean ANNFMNICHCJ; // 0xD4
	::System::Boolean IBHCHCFKBEP; // 0xD5
	::RPG::GameCore::FixPoint FGBPFGEECBB; // 0xD8
	::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0xE0
	::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0xE8
	::RPG::GameCore::FixPoint DFMNAOJMODP; // 0x138
	::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_130__CTOR_OFFSET))(this);
	}
};
