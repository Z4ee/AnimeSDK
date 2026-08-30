#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNAVATARCHANGEBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69ADB0)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGEBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69AE00)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGEBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE69ADA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnAvatarChangeBegin_TypeDefinitionIndex = 56893;

	class LevelTurnAvatarChangeBegin : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* SourceEntity; // 0x10
		::System::UInt32 TargetAvatarID; // 0x18
		::System::UInt32 SourceAvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
