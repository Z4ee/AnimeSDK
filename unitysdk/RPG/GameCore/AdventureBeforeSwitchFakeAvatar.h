#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_CLEAR_OFFSET UNITYSDK_OFFSET(0xA81DA10)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA81DA60)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA81DAB0)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_INIT_OFFSET UNITYSDK_OFFSET(0xA81D9B0)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA81DB00)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA81DB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeSwitchFakeAvatar_TypeDefinitionIndex = 45510;

	class AdventureBeforeSwitchFakeAvatar : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* After; // 0x18
		::RPG::GameCore::GameEntity* Before; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBeforeSwitchFakeAvatar* Init(::RPG::GameCore::GameEntity* before, ::RPG::GameCore::GameEntity* after)
		{
			return ((::RPG::GameCore::AdventureBeforeSwitchFakeAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_INIT_OFFSET))(this, before, after);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
