#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComprehensiveAttack_ExitConditionType.h"
#include "unitysdk/MoleMole/ComprehensiveAttack_ForceExitStatusType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_COMPREHENSIVEATTACK_FORCEEXITSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x162976F0)

namespace MoleMole
{
	inline static constexpr unsigned int ComprehensiveAttack_ForceExitSettingData_TypeDefinitionIndex = 66004;

	class ComprehensiveAttack_ForceExitSettingData : public ::System::Object
	{
	public:
		::System::Int32 ExitAnimatorIndex; // 0x10
		::MoleMole::ComprehensiveAttack_ForceExitStatusType ExitStatus; // 0x14
		::MoleMole::ComprehensiveAttack_ExitConditionType ExitType; // 0x18
		::System::Single ExitNormalizedTime; // 0x1C
		::System::Int32 ExitFrameCount; // 0x20
		::System::Int32 animatorIDHash; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_FORCEEXITSETTINGDATA__CTOR_OFFSET))(this);
		}
	};
}
