#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define CLASS_3_48CD54D7224F0892_2___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142307F0)
#define CLASS_3_48CD54D7224F0892_2___C__DISPLAYCLASS2_0___PLAYICESTORM_B__1_OFFSET UNITYSDK_OFFSET(0x14230860)

inline static constexpr unsigned int Class_3_48CD54D7224F0892_2___c__DisplayClass2_0_TypeDefinitionIndex = 72522;

class Class_3_48CD54D7224F0892_2___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48CD54D7224F0892_2___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayIceStorm_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48CD54D7224F0892_2___C__DISPLAYCLASS2_0___PLAYICESTORM_B__1_OFFSET))(this);
	}
};
