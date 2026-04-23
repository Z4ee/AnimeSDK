#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_0_16E4307DCC419505_345;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELUSEABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6E89F0)
#define RPG_GAMECORE_LEVELUSEABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6E8AB0)
#define RPG_GAMECORE_LEVELUSEABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6E8A60)
#define RPG_GAMECORE_LEVELUSEABILITY_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xB6E8B00)
#define RPG_GAMECORE_LEVELUSEABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xB6E8990)
#define RPG_GAMECORE_LEVELUSEABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E8B60)
#define RPG_GAMECORE_LEVELUSEABILITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6E8B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUseAbility_TypeDefinitionIndex = 52360;

	class LevelUseAbility : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Class_0_16E4307DCC419505_345* AbilityInstance; // 0x18
		::RPG::GameCore::GameEntity* AbilityCater; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelUseAbility* Init(::RPG::GameCore::GameEntity* pCaster, ::Class_0_16E4307DCC419505_345* ability)
		{
			return ((::RPG::GameCore::LevelUseAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_INIT_OFFSET))(this, pCaster, ability);
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
