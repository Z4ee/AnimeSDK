#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97E880)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97E920)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97E8D0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_INIT_OFFSET UNITYSDK_OFFSET(0xA97E830)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97E970)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97E980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterLimboRevivable_TypeDefinitionIndex = 45663;

	class LevelCharacterLimboRevivable : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterLimboRevivable* Init(::RPG::GameCore::GameEntity* target)
		{
			return ((::RPG::GameCore::LevelCharacterLimboRevivable*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_INIT_OFFSET))(this, target);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
