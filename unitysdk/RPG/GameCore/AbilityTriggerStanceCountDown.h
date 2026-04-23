#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB555A50)
#define RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB555AF0)
#define RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB555AA0)
#define RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0xB524D80)
#define RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xB555B40)
#define RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB555B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTriggerStanceCountDown_TypeDefinitionIndex = 52127;

	class AbilityTriggerStanceCountDown : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Source; // 0x20
		::System::Boolean IsExtraStance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityTriggerStanceCountDown* Init(::RPG::GameCore::GameEntity* pSource, ::RPG::GameCore::GameEntity* pTarget, ::System::Boolean isExtraStance)
		{
			return ((::RPG::GameCore::AbilityTriggerStanceCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_INIT_OFFSET))(this, pSource, pTarget, isExtraStance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTRIGGERSTANCECOUNTDOWN___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
