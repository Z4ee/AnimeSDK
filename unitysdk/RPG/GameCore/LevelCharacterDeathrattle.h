#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97DE00)
#define RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97DDB0)
#define RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97DDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterDeathrattle_TypeDefinitionIndex = 45664;

	class LevelCharacterDeathrattle : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDEATHRATTLE__CTOR_OFFSET))(this, pEntity);
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
