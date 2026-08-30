#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1348;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define CLASS_1_1D0ECDB188DFDA23_1_METHOD_1_DE4BEDE065ECDB87_OFFSET UNITYSDK_OFFSET(0x1A7E3B10)
#define CLASS_1_1D0ECDB188DFDA23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E3BB0)

inline static constexpr unsigned int Class_1_1D0ECDB188DFDA23_1_TypeDefinitionIndex = 79633;

class Class_1_1D0ECDB188DFDA23_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0ECDB188DFDA23_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* Method_1_DE4BEDE065ECDB87(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1348* a3)
	{
		return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1348*))((::PBYTE)hIl2Cpp + CLASS_1_1D0ECDB188DFDA23_1_METHOD_1_DE4BEDE065ECDB87_OFFSET))(this, a1, a2, a3);
	}
};
