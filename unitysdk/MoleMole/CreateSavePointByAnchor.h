#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_CREATESAVEPOINTBYANCHOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B21E8B0)
#define MOLEMOLE_CREATESAVEPOINTBYANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21ED70)
#define MOLEMOLE_CREATESAVEPOINTBYANCHOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B21EE00)

namespace MoleMole
{
	inline static constexpr unsigned int CreateSavePointByAnchor_TypeDefinitionIndex = 83211;

	class CreateSavePointByAnchor : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedString* AnchorName; // 0x60
		::BehaviorDesigner::Runtime::SharedString* SavePointName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CREATESAVEPOINTBYANCHOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CREATESAVEPOINTBYANCHOR_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CREATESAVEPOINTBYANCHOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
