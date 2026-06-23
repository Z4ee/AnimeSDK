#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICompareType.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_CF6254B260CF5CF4;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_COMPAREHP_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x127013F0)
#define MOLEMOLE_COMPAREHP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12701620)
#define MOLEMOLE_COMPAREHP__CTOR_OFFSET UNITYSDK_OFFSET(0x12701990)
#define MOLEMOLE_COMPAREHP___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12701A20)
#define MOLEMOLE_COMPAREHP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12701AB0)

namespace MoleMole
{
	inline static constexpr unsigned int CompareHP_TypeDefinitionIndex = 62417;

	class CompareHP : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::Class_3_F97B015544BE936B* dataComponent; // 0x50
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::System::Single TargetHPPercent; // 0x68
		::MoleMole::AICompareType CompareType; // 0x6C
		::MoleMole::AITargetType TargetType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREHP__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREHP_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREHP_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREHP___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREHP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
