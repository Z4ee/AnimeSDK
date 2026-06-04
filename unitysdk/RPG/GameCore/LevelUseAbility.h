#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELUSEABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE57100)
#define RPG_GAMECORE_LEVELUSEABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE571C0)
#define RPG_GAMECORE_LEVELUSEABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE57170)
#define RPG_GAMECORE_LEVELUSEABILITY_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xCE57210)
#define RPG_GAMECORE_LEVELUSEABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xCE570A0)
#define RPG_GAMECORE_LEVELUSEABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xCE57270)
#define RPG_GAMECORE_LEVELUSEABILITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE57280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUseAbility_TypeDefinitionIndex = 53057;

	class LevelUseAbility : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Class_0_16E4307DCC419505_358* AbilityInstance; // 0x18
		::RPG::GameCore::GameEntity* AbilityCater; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelUseAbility* Init(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_358* a2)
		{
			return ((::RPG::GameCore::LevelUseAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_GET_ABILITYNAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
