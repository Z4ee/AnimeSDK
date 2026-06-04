#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4F2D0)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xCE4F3C0)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4F370)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4F320)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xCE4F400)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_INIT_OFFSET UNITYSDK_OFFSET(0xCE4F270)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4F440)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4F450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnModifierPhase1End_TypeDefinitionIndex = 52947;

	class LevelTurnModifierPhase1End : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x18
		::System::UInt32 _TurnCounter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnModifierPhase1End* Init(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelTurnModifierPhase1End*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END_GETTURNCOUNTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE1END___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
