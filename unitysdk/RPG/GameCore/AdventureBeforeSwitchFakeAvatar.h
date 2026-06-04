#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCC0A50)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCCC0AA0)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCCC0AF0)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR_INIT_OFFSET UNITYSDK_OFFSET(0xCCC09F0)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xCCC0B40)
#define RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCC0B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeSwitchFakeAvatar_TypeDefinitionIndex = 52857;

	class AdventureBeforeSwitchFakeAvatar : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Before; // 0x18
		::RPG::GameCore::GameEntity* After; // 0x20

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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORESWITCHFAKEAVATAR___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
