#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_CLEAR_OFFSET UNITYSDK_OFFSET(0x106C3700)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106C37A0)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106C3750)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_INIT_OFFSET UNITYSDK_OFFSET(0x106C36B0)
#define RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY__CTOR_OFFSET UNITYSDK_OFFSET(0x106C37F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBehaviorFlagVisualDirty_TypeDefinitionIndex = 54050;

	class AbilityBehaviorFlagVisualDirty : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBehaviorFlagVisualDirty* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AbilityBehaviorFlagVisualDirty*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEHAVIORFLAGVISUALDIRTY_INIT_OFFSET))(this, a1);
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
	};
}
