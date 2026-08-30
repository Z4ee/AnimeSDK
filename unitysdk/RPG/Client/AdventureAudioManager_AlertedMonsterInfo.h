#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ALERTEDMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC6B50D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager_AlertedMonsterInfo_TypeDefinitionIndex = 60588;

	class AdventureAudioManager_AlertedMonsterInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsMaxAlert; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ALERTEDMONSTERINFO__CTOR_OFFSET))(this, a1);
		}
	};
}
