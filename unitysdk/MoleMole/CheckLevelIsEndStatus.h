#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define MOLEMOLE_CHECKLEVELISENDSTATUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12A2D630)
#define MOLEMOLE_CHECKLEVELISENDSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D7A0)
#define MOLEMOLE_CHECKLEVELISENDSTATUS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12A2D830)

namespace MoleMole
{
	inline static constexpr unsigned int CheckLevelIsEndStatus_TypeDefinitionIndex = 59594;

	class CheckLevelIsEndStatus : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Boolean IsInvert; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKLEVELISENDSTATUS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKLEVELISENDSTATUS_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKLEVELISENDSTATUS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
