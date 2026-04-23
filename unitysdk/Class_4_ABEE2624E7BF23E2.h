#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleGamePhase.h"

namespace RPG::Client { class BattleGamePhaseInitParams; }

#define CLASS_4_ABEE2624E7BF23E2__CTOR_OFFSET UNITYSDK_OFFSET(0x9263530)

inline static constexpr unsigned int Class_4_ABEE2624E7BF23E2_TypeDefinitionIndex = 65551;

class Class_4_ABEE2624E7BF23E2 : public ::RPG::Client::BattleGamePhase
{
public:
	::System::Void _ctor(::RPG::Client::BattleGamePhaseInitParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhaseInitParams*))((::PBYTE)hIl2Cpp + CLASS_4_ABEE2624E7BF23E2__CTOR_OFFSET))(this, a1);
	}
};
