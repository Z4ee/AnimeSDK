#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_4C3EA8CBA8A5645C___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9512A10)
#define CLASS_1_4C3EA8CBA8A5645C___C__DISPLAYCLASS50_0__ONNORMALEVENTDONE_B__0_OFFSET UNITYSDK_OFFSET(0x95134D0)

inline static constexpr unsigned int Class_1_4C3EA8CBA8A5645C___c__DisplayClass50_0_TypeDefinitionIndex = 55690;

class Class_1_4C3EA8CBA8A5645C___c__DisplayClass50_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity; // 0x10
	::System::Int32 bonusPrice; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnNormalEventDone_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C___C__DISPLAYCLASS50_0__ONNORMALEVENTDONE_B__0_OFFSET))(this);
	}
};
