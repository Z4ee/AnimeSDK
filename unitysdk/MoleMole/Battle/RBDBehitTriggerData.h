#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_576D2B842B630070.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_RBDBEHITTRIGGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE94A0F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBehitTriggerData_TypeDefinitionIndex = 44588;

	class RBDBehitTriggerData : public ::System::Object
	{
	public:
		::Enum_3_576D2B842B630070 m_triggerType; // 0x10
		::System::Single m_fAngleFilter; // 0x14
		::System::Single m_fBreakLevel; // 0x18
		::System::Single m_fSpeed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBEHITTRIGGERDATA__CTOR_OFFSET))(this);
		}
	};
}
