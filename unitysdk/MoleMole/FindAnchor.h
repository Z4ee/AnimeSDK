#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole { class SharedStrList; }

#define MOLEMOLE_FINDANCHOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182C9610)
#define MOLEMOLE_FINDANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x182C9F70)
#define MOLEMOLE_FINDANCHOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182CA000)

namespace MoleMole
{
	inline static constexpr unsigned int FindAnchor_TypeDefinitionIndex = 63723;

	class FindAnchor : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* prefix; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* radius; // 0x60
		::MoleMole::SharedStrList* OutList; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FINDANCHOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FINDANCHOR_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FINDANCHOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
