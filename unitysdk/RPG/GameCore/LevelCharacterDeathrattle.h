#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x184526C0)
#define RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18452670)
#define RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1841AFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterDeathrattle_TypeDefinitionIndex = 56947;

	class LevelCharacterDeathrattle : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
