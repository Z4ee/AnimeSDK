#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18452B80)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18452C20)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18452BD0)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x18452B20)
#define RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18452C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterEnterRedStance_TypeDefinitionIndex = 56980;

	class LevelCharacterEnterRedStance : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x18
		::RPG::GameCore::GameEntity* Entity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterEnterRedStance* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelCharacterEnterRedStance*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENTERREDSTANCE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
