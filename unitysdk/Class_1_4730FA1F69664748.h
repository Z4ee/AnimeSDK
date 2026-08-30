#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1348;
class Class_1_1D0ECDB188DFDA23;
class Class_1_1D0ECDB188DFDA23_1;
class Class_1_5F4D64A4B97E38F9;
class Class_1_65971014D32EB66F;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define CLASS_1_4730FA1F69664748_METHOD_1_B60FCA80833CC657_OFFSET UNITYSDK_OFFSET(0x16FCC9D0)
#define CLASS_1_4730FA1F69664748__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCC900)

inline static constexpr unsigned int Class_1_4730FA1F69664748_TypeDefinitionIndex = 79603;

class Class_1_4730FA1F69664748 : public ::System::Object
{
public:
	::Class_1_1D0ECDB188DFDA23* LFCGFHMCEFD; // 0x10
	::Class_1_1D0ECDB188DFDA23_1* JPOICDFFNLN; // 0x18
	::Class_1_65971014D32EB66F* ODBKGBNKPPJ; // 0x20

	::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_4730FA1F69664748__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* Method_1_B60FCA80833CC657(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1348* a3)
	{
		return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1348*))((::PBYTE)hIl2Cpp + CLASS_1_4730FA1F69664748_METHOD_1_B60FCA80833CC657_OFFSET))(this, a1, a2, a3);
	}
};
