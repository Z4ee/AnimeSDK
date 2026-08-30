#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_0_16E4307DCC419505_415;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18453310)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x184532C0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x18453380)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x184533A0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x18453360)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET UNITYSDK_OFFSET(0x18453250)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x18453390)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x184533B0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x18453370)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x184533C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRemoveShield_TypeDefinitionIndex = 56971;

	class LevelCharacterRemoveShield : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_415* _ModifierInstance_k__BackingField; // 0x20
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRemoveShield* Init(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_415* a2, ::RPG::GameCore::ModifierDeathSource a3)
		{
			return ((::RPG::GameCore::LevelCharacterRemoveShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_415*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET))(this, a1, a2, a3);
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

		::Class_0_16E4307DCC419505_415* get_ModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_415*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::Class_0_16E4307DCC419505_415* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET))(this, a1);
		}
	};
}
