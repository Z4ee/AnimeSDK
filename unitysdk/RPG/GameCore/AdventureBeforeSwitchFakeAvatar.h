#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_CLEAR_OFFSET UNITYSDK_OFFSET(0x11262770)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x112627C0)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11262810)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_INIT_OFFSET UNITYSDK_OFFSET(0x11262710)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x11262860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeSwitchFakeAvatar_TypeDefinitionIndex = 56790;

	class AdventureBeforeSwitchFakeAvatar : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* After; // 0x18
		::RPG::GameCore::GameEntity* Before; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBeforeSwitchFakeAvatar* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventureBeforeSwitchFakeAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_INIT_OFFSET))(this, a1, a2);
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
	};
}
