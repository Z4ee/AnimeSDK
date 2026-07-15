#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS7_0__BUILDCATLOCKFOODCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x18457460)
#define CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18456160)

inline static constexpr unsigned int Class_1_A9010BD7FDF68FFC___c__DisplayClass7_0_TypeDefinitionIndex = 72516;

class Class_1_A9010BD7FDF68FFC___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::String* foodIconPath; // 0x10
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildCatLockFoodCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9010BD7FDF68FFC___C__DISPLAYCLASS7_0__BUILDCATLOCKFOODCOMMAND_B__0_OFFSET))(this);
	}
};
