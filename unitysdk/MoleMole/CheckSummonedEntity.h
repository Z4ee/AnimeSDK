#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICompareType.h"

namespace System { class String; }

#define MOLEMOLE_CHECKSUMMONEDENTITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x114557A0)
#define MOLEMOLE_CHECKSUMMONEDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x11455A70)
#define MOLEMOLE_CHECKSUMMONEDENTITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11455B00)

namespace MoleMole
{
	inline static constexpr unsigned int CheckSummonedEntity_TypeDefinitionIndex = 67407;

	class CheckSummonedEntity : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::String* SummonTag; // 0x50
		::System::Int32 SummonCheckCount; // 0x58
		::MoleMole::AICompareType CompareType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSUMMONEDENTITY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSUMMONEDENTITY_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSUMMONEDENTITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
