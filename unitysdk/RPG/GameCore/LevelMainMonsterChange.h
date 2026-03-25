#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98F8B0)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98F860)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_NEWENTITY_OFFSET UNITYSDK_OFFSET(0xA98F920)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_OLDENTITY_OFFSET UNITYSDK_OFFSET(0xA98F900)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA98F800)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_NEWENTITY_OFFSET UNITYSDK_OFFSET(0xA98F930)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_OLDENTITY_OFFSET UNITYSDK_OFFSET(0xA98F910)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA98F940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMainMonsterChange_TypeDefinitionIndex = 45732;

	class LevelMainMonsterChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _OldEntity_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _NewEntity_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelMainMonsterChange* Init(::RPG::GameCore::GameEntity* oldEntity, ::RPG::GameCore::GameEntity* newEntity)
		{
			return ((::RPG::GameCore::LevelMainMonsterChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_INIT_OFFSET))(this, oldEntity, newEntity);
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

		::System::Void set_OldEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_OLDENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_NewEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_NEWENTITY_OFFSET))(this);
		}

		::System::Void set_NewEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_NEWENTITY_OFFSET))(this, value);
		}
	};
}
