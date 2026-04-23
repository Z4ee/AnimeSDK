#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_0_16E4307DCC419505_343;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CCE90)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CCE40)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xB6CCF00)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6CCF20)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xB6CCEE0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET UNITYSDK_OFFSET(0xB6CCDD0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xB6CCF10)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6CCF30)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xB6CCEF0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CCF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRemoveShield_TypeDefinitionIndex = 52340;

	class LevelCharacterRemoveShield : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_343* _ModifierInstance_k__BackingField; // 0x20
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRemoveShield* Init(::RPG::GameCore::GameEntity* target, ::Class_0_16E4307DCC419505_343* modifierInstance, ::RPG::GameCore::ModifierDeathSource source)
		{
			return ((::RPG::GameCore::LevelCharacterRemoveShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_343*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET))(this, target, modifierInstance, source);
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

		::Class_0_16E4307DCC419505_343* get_ModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::Class_0_16E4307DCC419505_343* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET))(this, value);
		}
	};
}
