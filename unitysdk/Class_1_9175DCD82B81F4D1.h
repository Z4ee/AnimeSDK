#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9175DCD82B81F4D1__CTOR_OFFSET UNITYSDK_OFFSET(0x17077B40)

inline static constexpr unsigned int Class_1_9175DCD82B81F4D1_TypeDefinitionIndex = 53040;

class Class_1_9175DCD82B81F4D1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::RPG::GameCore::MonsterWeaknessSpecialType Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9175DCD82B81F4D1__CTOR_OFFSET))(this);
	}
};
