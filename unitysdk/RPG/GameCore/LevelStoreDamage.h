#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_C3FD3943CDE7D4EA;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELSTOREDAMAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DFB00)
#define RPG_GAMECORE_LEVELSTOREDAMAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DFAB0)
#define RPG_GAMECORE_LEVELSTOREDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DFAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelStoreDamage_TypeDefinitionIndex = 52290;

	class LevelStoreDamage : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::Class_1_C3FD3943CDE7D4EA* StoreData; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* pTarget, ::Class_1_C3FD3943CDE7D4EA* pStoreData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C3FD3943CDE7D4EA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE__CTOR_OFFSET))(this, pTarget, pStoreData);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
