#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELTURNAVATARCHANGEENTERSTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19780E70)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGEENTERSTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19780EC0)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGEENTERSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19780F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnAvatarChangeEnterStage_TypeDefinitionIndex = 54175;

	class LevelTurnAvatarChangeEnterStage : public ::System::Object
	{
	public:
		::System::UInt32 TargetAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEENTERSTAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEENTERSTAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEENTERSTAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
