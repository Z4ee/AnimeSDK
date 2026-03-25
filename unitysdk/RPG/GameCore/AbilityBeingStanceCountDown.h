#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7C6E70)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7C6F10)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7C6EC0)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0xA7C6E00)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C6F60)
#define RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7C6F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeingStanceCountDown_TypeDefinitionIndex = 45478;

	class AbilityBeingStanceCountDown : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Source; // 0x20
		::System::Boolean IsExtraStance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeingStanceCountDown* Init(::RPG::GameCore::GameEntity* pSource, ::RPG::GameCore::GameEntity* pTarget, ::System::Boolean isExtraStance)
		{
			return ((::RPG::GameCore::AbilityBeingStanceCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_INIT_OFFSET))(this, pSource, pTarget, isExtraStance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGSTANCECOUNTDOWN___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
