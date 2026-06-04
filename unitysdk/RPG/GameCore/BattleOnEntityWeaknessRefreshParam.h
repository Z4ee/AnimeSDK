#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_BATTLEONENTITYWEAKNESSREFRESHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD37A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleOnEntityWeaknessRefreshParam_TypeDefinitionIndex = 53953;

	class BattleOnEntityWeaknessRefreshParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEONENTITYWEAKNESSREFRESHPARAM__CTOR_OFFSET))(this);
		}
	};
}
