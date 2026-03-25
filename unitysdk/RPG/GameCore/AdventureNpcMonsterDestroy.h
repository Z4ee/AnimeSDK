#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84A5E0)
#define RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY_GETMONSTER_OFFSET UNITYSDK_OFFSET(0xA84A680)
#define RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84A630)
#define RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0xA84A5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureNpcMonsterDestroy_TypeDefinitionIndex = 45523;

	class AdventureNpcMonsterDestroy : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Monster; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY__CTOR_OFFSET))(this, monster);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERDESTROY_GETMONSTER_OFFSET))(this);
		}
	};
}
