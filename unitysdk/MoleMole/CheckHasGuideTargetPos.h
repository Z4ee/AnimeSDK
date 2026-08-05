#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define MOLEMOLE_CHECKHASGUIDETARGETPOS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16241480)
#define MOLEMOLE_CHECKHASGUIDETARGETPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x16241630)
#define MOLEMOLE_CHECKHASGUIDETARGETPOS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162416C0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckHasGuideTargetPos_TypeDefinitionIndex = 56305;

	class CheckHasGuideTargetPos : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHASGUIDETARGETPOS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHASGUIDETARGETPOS_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHASGUIDETARGETPOS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
