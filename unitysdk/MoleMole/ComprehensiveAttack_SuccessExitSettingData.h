#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComprehensiveAttack_ExitConditionType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_COMPREHENSIVEATTACK_SUCCESSEXITSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF7B60)

namespace MoleMole
{
	inline static constexpr unsigned int ComprehensiveAttack_SuccessExitSettingData_TypeDefinitionIndex = 66002;

	class ComprehensiveAttack_SuccessExitSettingData : public ::System::Object
	{
	public:
		::System::Int32 SuccessExitAnimatorIndex; // 0x10
		::MoleMole::ComprehensiveAttack_ExitConditionType SuccessExitType; // 0x14
		::System::Int32 SuccessExitFrameCount; // 0x18
		::System::Single SuccessExitNormalizedTime; // 0x1C
		::System::Int32 animatorIDHash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_SUCCESSEXITSETTINGDATA__CTOR_OFFSET))(this);
		}
	};
}
