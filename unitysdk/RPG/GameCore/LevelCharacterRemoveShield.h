#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_0_16E4307DCC419505_356;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3B1D0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3B180)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xCE3B240)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE3B260)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xCE3B220)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET UNITYSDK_OFFSET(0xCE3B110)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xCE3B250)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE3B270)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xCE3B230)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3B280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRemoveShield_TypeDefinitionIndex = 53037;

	class LevelCharacterRemoveShield : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Class_0_16E4307DCC419505_356* _ModifierInstance_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x20
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRemoveShield* Init(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_356* a2, ::RPG::GameCore::ModifierDeathSource a3)
		{
			return ((::RPG::GameCore::LevelCharacterRemoveShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_356*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_Target(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_356* get_ModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_356*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::Class_0_16E4307DCC419505_356* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET))(this, a1);
		}
	};
}
