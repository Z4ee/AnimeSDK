#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define CLASS_3_48CD54D7224F0892_1___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12505070)
#define CLASS_3_48CD54D7224F0892_1___C__DISPLAYCLASS2_0___PLAYKAFKAUSE_B__1_OFFSET UNITYSDK_OFFSET(0x125050E0)

inline static constexpr unsigned int Class_3_48CD54D7224F0892_1___c__DisplayClass2_0_TypeDefinitionIndex = 71498;

class Class_3_48CD54D7224F0892_1___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48CD54D7224F0892_1___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayKafkaUse_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48CD54D7224F0892_1___C__DISPLAYCLASS2_0___PLAYKAFKAUSE_B__1_OFFSET))(this);
	}
};
