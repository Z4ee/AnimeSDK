#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x18453150)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x184531F0)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x184531A0)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_INIT_OFFSET UNITYSDK_OFFSET(0x184530F0)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x18453240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRedStanceBreak_TypeDefinitionIndex = 56981;

	class LevelCharacterRedStanceBreak : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRedStanceBreak* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelCharacterRedStanceBreak*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
