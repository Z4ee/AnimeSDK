#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELTURNAVATARCHANGEFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19780F30)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGEFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19780F80)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19780F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnAvatarChangeFinish_TypeDefinitionIndex = 54176;

	class LevelTurnAvatarChangeFinish : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGEFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
