#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB509CA0)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB509D40)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB509CF0)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_INIT_OFFSET UNITYSDK_OFFSET(0xB509C50)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB509D90)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB509DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBehaviorFlagVisualDirty_TypeDefinitionIndex = 52141;

	class AbilityBehaviorFlagVisualDirty : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBehaviorFlagVisualDirty* Init(::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::RPG::GameCore::AbilityBehaviorFlagVisualDirty*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_INIT_OFFSET))(this, pTarget);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
