#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELTURNAVATARCHANGENEWAVATARPREPARE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4E450)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGENEWAVATARPREPARE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4E4A0)
#define RPG_GAMECORE_LEVELTURNAVATARCHANGENEWAVATARPREPARE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnAvatarChangeNewAvatarPrepare_TypeDefinitionIndex = 52961;

	class LevelTurnAvatarChangeNewAvatarPrepare : public ::System::Object
	{
	public:
		::System::UInt32 TargetAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGENEWAVATARPREPARE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGENEWAVATARPREPARE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNAVATARCHANGENEWAVATARPREPARE_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
