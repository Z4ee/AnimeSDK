#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERLIMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3AB10)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3ABB0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3AB60)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0xCE3AA90)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3AC00)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3AC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterLimbo_TypeDefinitionIndex = 53011;

	class LevelCharacterLimbo : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::RPG::GameCore::GameEntity* Defender; // 0x20
		::RPG::GameCore::FixPoint DefenderBeforeHP; // 0x28
		::RPG::GameCore::FixPoint Damage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterLimbo* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::GameCore::LevelCharacterLimbo*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
