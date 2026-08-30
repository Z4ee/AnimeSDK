#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_9C2CC447D2CA6459_CLASS_1_0E9A944B01BE33D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1592A810)

inline static constexpr unsigned int Class_2_9C2CC447D2CA6459_Class_1_0E9A944B01BE33D0_TypeDefinitionIndex = 71537;

class Class_2_9C2CC447D2CA6459_Class_1_0E9A944B01BE33D0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::TurnBasedGameMode* HKEACDBJCOD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C2CC447D2CA6459_CLASS_1_0E9A944B01BE33D0__CTOR_OFFSET))(this);
	}
};
