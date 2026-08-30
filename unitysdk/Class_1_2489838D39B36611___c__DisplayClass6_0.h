#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_2489838D39B36611;

#define CLASS_1_2489838D39B36611___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCD050)
#define CLASS_1_2489838D39B36611___C__DISPLAYCLASS6_0___REGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0x17DCD370)

inline static constexpr unsigned int Class_1_2489838D39B36611___c__DisplayClass6_0_TypeDefinitionIndex = 77625;

class Class_1_2489838D39B36611___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_2489838D39B36611* __4__this; // 0x10
	::RPG::Client::LittleGame::CakeRace::CakeRaceEventType eventType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterEvent_b__0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2489838D39B36611___C__DISPLAYCLASS6_0___REGISTEREVENT_B__0_OFFSET))(this, a1);
	}
};
