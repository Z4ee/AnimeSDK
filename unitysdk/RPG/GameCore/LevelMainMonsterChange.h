#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE01B40)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE01AF0)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_NEWENTITY_OFFSET UNITYSDK_OFFSET(0x1BE01BB0)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_OLDENTITY_OFFSET UNITYSDK_OFFSET(0x1BE01B90)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1BE01A90)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_NEWENTITY_OFFSET UNITYSDK_OFFSET(0x1BE01BC0)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_OLDENTITY_OFFSET UNITYSDK_OFFSET(0x1BE01BA0)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE01BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMainMonsterChange_TypeDefinitionIndex = 54295;

	class LevelMainMonsterChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _NewEntity_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _OldEntity_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelMainMonsterChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelMainMonsterChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OldEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_OLDENTITY_OFFSET))(this);
		}

		::System::Void set_OldEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_OLDENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_NewEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_NEWENTITY_OFFSET))(this);
		}

		::System::Void set_NewEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_NEWENTITY_OFFSET))(this, a1);
		}
	};
}
