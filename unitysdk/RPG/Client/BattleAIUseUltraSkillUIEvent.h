#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_BATTLEAIUSEULTRASKILLUIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B9660)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAIUseUltraSkillUIEvent_TypeDefinitionIndex = 67972;

	class BattleAIUseUltraSkillUIEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::RPG::GameCore::GameEntity* Caster; // 0x18
		::System::Int32 SkillIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAIUSEULTRASKILLUIEVENT__CTOR_OFFSET))(this);
		}
	};
}
