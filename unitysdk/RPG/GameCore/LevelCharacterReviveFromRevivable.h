#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3B3F0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3B490)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3B440)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_INIT_OFFSET UNITYSDK_OFFSET(0xCE3B390)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3B4E0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterReviveFromRevivable_TypeDefinitionIndex = 53039;

	class LevelCharacterReviveFromRevivable : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x18
		::RPG::GameCore::GameEntity* CasterEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterReviveFromRevivable* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelCharacterReviveFromRevivable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
