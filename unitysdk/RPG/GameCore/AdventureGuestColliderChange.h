#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }

#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB584CD0)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB584D70)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB584D20)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB584C30)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB584DC0)
#define RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB584DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureGuestColliderChange_TypeDefinitionIndex = 52203;

	class AdventureGuestColliderChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Guest; // 0x18
		::UnityEngine::Collider* GuestCollider; // 0x20
		::System::Boolean Enable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureGuestColliderChange* Init(::RPG::GameCore::GameEntity* guest, ::UnityEngine::Collider* collider, ::System::Boolean enable)
		{
			return ((::RPG::GameCore::AdventureGuestColliderChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE_INIT_OFFSET))(this, guest, collider, enable);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREGUESTCOLLIDERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
