#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class SharedStrList; }

#define MOLEMOLE_RANDOMSELECTFROMLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10823A30)
#define MOLEMOLE_RANDOMSELECTFROMLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x10823E60)
#define MOLEMOLE_RANDOMSELECTFROMLIST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10823EF0)

namespace MoleMole
{
	inline static constexpr unsigned int RandomSelectFromList_TypeDefinitionIndex = 76113;

	class RandomSelectFromList : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedStrList* TargetList; // 0x58
		::BehaviorDesigner::Runtime::SharedVariable* Output; // 0x60
		::System::Boolean AutoRemove; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTFROMLIST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTFROMLIST_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTFROMLIST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
