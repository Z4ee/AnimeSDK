#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_0_16E4307DCC419505_336;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97EDB0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97ED60)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xA97EE20)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA97EE40)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA97EE00)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET UNITYSDK_OFFSET(0xA97ECF0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xA97EE30)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA97EE50)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA97EE10)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xA97EE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRemoveShield_TypeDefinitionIndex = 45688;

	class LevelCharacterRemoveShield : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_336* _ModifierInstance_k__BackingField; // 0x20
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRemoveShield* Init(::RPG::GameCore::GameEntity* target, ::Class_0_16E4307DCC419505_336* modifierInstance, ::RPG::GameCore::ModifierDeathSource source)
		{
			return ((::RPG::GameCore::LevelCharacterRemoveShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_336*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET))(this, target, modifierInstance, source);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Target()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET))(this, value);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_336* get_ModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::Class_0_16E4307DCC419505_336* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET))(this, value);
		}
	};
}
