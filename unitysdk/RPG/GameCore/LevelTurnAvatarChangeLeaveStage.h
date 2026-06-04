#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNAVATARCHANGELEAVESTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4E3A0)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGELEAVESTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4E3F0)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGELEAVESTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4E440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnAvatarChangeLeaveStage_TypeDefinitionIndex = 52960;

	class LevelTurnAvatarChangeLeaveStage : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* SourceEntity; // 0x10
		::System::UInt32 SourceAvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGELEAVESTAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGELEAVESTAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGELEAVESTAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
