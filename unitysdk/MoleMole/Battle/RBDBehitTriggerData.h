#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A23A633D4312D81.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_RBDBEHITTRIGGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE56A0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBehitTriggerData_TypeDefinitionIndex = 58391;

	class RBDBehitTriggerData : public ::System::Object
	{
	public:
		::Enum_3_2A23A633D4312D81 m_triggerType; // 0x10
		::System::Single m_fAngleFilter; // 0x14
		::System::Single m_fBreakLevel; // 0x18
		::System::Single m_fSpeed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBEHITTRIGGERDATA__CTOR_OFFSET))(this);
		}
	};
}
