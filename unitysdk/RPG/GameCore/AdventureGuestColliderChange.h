#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }

#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x193F8D50)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x193F8DF0)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x193F8DA0)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x193F8CB0)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureGuestColliderChange_TypeDefinitionIndex = 56833;

	class AdventureGuestColliderChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Guest; // 0x18
		::UnityEngine::Collider* GuestCollider; // 0x20
		::System::Boolean Enable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureGuestColliderChange* Init(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::AdventureGuestColliderChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
