#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_43BD383C98B4C0C5_130__CTOR_OFFSET UNITYSDK_OFFSET(0xD78BDB0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_130_TypeDefinitionIndex = 54427;

class Class_1_43BD383C98B4C0C5_130 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* MCLLALGABAB; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* CFOAICLAMHO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IEHDBDLFEGI; // 0x20
	::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0x28
	::RPG::GameCore::FixPoint FGBPFGEECBB; // 0x30
	::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0x38
	::RPG::GameCore::FixPoint KOEONAHJCOA; // 0x40
	::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0x48
	::System::Boolean IBHCHCFKBEP; // 0x90
	::System::Boolean ANNFMNICHCJ; // 0x91
	::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0x94
	::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0x98
	::RPG::GameCore::FixPoint JALMAHOCDNO; // 0xA0
	::RPG::GameCore::FixPoint PINNPLKBABH; // 0xA8
	::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0xB0
	::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0x100
	::RPG::GameCore::FixPoint ADMLFGINDGP; // 0x108
	::RPG::GameCore::FixPoint DFMNAOJMODP; // 0x110
	::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0x118
	::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0x120
	::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0x128
	::RPG::GameCore::FixPoint BNNONJNHNJC; // 0x130
	::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0x138
	::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0x140
	::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_130__CTOR_OFFSET))(this);
	}
};
