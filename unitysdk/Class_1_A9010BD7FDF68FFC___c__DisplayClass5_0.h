#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS5_0__BUILDCATTARGETLOCKCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1A844750)
#define CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A842800)

inline static constexpr unsigned int Class_1_A9010BD7FDF68FFC___c__DisplayClass5_0_TypeDefinitionIndex = 75951;

class Class_1_A9010BD7FDF68FFC___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x10
	::System::UInt32 targetCatConfigID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildCatTargetLockCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS5_0__BUILDCATTARGETLOCKCOMMAND_B__0_OFFSET))(this);
	}
};
