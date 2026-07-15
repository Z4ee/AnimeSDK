#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1267;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define CLASS_1_65971014D32EB66F_METHOD_1_DE4BEDE065ECDB87_OFFSET UNITYSDK_OFFSET(0x18BAFA70)
#define CLASS_1_65971014D32EB66F__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAF9F0)

inline static constexpr unsigned int Class_1_65971014D32EB66F_TypeDefinitionIndex = 75964;

class Class_1_65971014D32EB66F : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_65971014D32EB66F__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* Method_1_DE4BEDE065ECDB87(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1267* a3)
	{
		return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1267*))((::PBYTE)hIl2Cpp + CLASS_1_65971014D32EB66F_METHOD_1_DE4BEDE065ECDB87_OFFSET))(this, a1, a2, a3);
	}
};
