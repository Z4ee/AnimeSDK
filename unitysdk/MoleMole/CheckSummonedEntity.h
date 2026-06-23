#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICompareType.h"

namespace System { class String; }

#define MOLEMOLE_CHECKSUMMONEDENTITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C55800)
#define MOLEMOLE_CHECKSUMMONEDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C55AE0)
#define MOLEMOLE_CHECKSUMMONEDENTITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C55B70)

namespace MoleMole
{
	inline static constexpr unsigned int CheckSummonedEntity_TypeDefinitionIndex = 66339;

	class CheckSummonedEntity : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::String* SummonTag; // 0x50
		::MoleMole::AICompareType CompareType; // 0x58
		::System::Int32 SummonCheckCount; // 0x5C

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
