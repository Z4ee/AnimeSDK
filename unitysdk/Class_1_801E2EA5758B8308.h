#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowDamageTextType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_801E2EA5758B8308__CTOR_OFFSET UNITYSDK_OFFSET(0x1819E500)

inline static constexpr unsigned int Class_1_801E2EA5758B8308_TypeDefinitionIndex = 55803;

class Class_1_801E2EA5758B8308 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::ShowDamageTextType GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_801E2EA5758B8308__CTOR_OFFSET))(this);
	}
};
