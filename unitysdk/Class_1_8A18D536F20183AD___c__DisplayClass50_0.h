#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_8A18D536F20183AD___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161EEA00)
#define CLASS_1_8A18D536F20183AD___C__DISPLAYCLASS50_0__ONNORMALEVENTDONE_B__0_OFFSET UNITYSDK_OFFSET(0x161EEFB0)

inline static constexpr unsigned int Class_1_8A18D536F20183AD___c__DisplayClass50_0_TypeDefinitionIndex = 60500;

class Class_1_8A18D536F20183AD___c__DisplayClass50_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity; // 0x10
	::System::Int32 bonusPrice; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnNormalEventDone_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD___C__DISPLAYCLASS50_0__ONNORMALEVENTDONE_B__0_OFFSET))(this);
	}
};
