#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC76BE0)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC76C80)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC76C30)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xCC76B90)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xCC76CD0)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC76CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDamagePerformFinish_TypeDefinitionIndex = 52837;

	class AbilityDamagePerformFinish : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityDamagePerformFinish* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AbilityDamagePerformFinish*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
