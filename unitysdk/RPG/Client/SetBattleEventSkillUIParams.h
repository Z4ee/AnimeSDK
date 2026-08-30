#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_SETBATTLEEVENTSKILLUIPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xE078BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SetBattleEventSkillUIParams_TypeDefinitionIndex = 71585;

	class SetBattleEventSkillUIParams : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETBATTLEEVENTSKILLUIPARAMS__CTOR_OFFSET))(this);
		}
	};
}
