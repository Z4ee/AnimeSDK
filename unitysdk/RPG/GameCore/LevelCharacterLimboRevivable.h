#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3ACC0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3AD60)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3AD10)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_INIT_OFFSET UNITYSDK_OFFSET(0xCE3AC70)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3ADB0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3ADC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterLimboRevivable_TypeDefinitionIndex = 53012;

	class LevelCharacterLimboRevivable : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterLimboRevivable* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelCharacterLimboRevivable*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_INIT_OFFSET))(this, a1);
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
