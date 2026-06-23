#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_RESETDYNAMICTARGETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18CF8320)
#define MOLEMOLE_RESETDYNAMICTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF8580)
#define MOLEMOLE_RESETDYNAMICTARGETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18CF8620)

namespace MoleMole
{
	inline static constexpr unsigned int ResetDynamicTargetValue_TypeDefinitionIndex = 67733;

	class ResetDynamicTargetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::System::Boolean ResetSelectTargetValues; // 0x60
		::System::Boolean ResetAllDynamicTargetValues; // 0x61
		::System::Boolean ResetAttackerTargetValues; // 0x62
		::System::Boolean ResetInRangeTargetValue; // 0x63

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETDYNAMICTARGETVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETDYNAMICTARGETVALUE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETDYNAMICTARGETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
