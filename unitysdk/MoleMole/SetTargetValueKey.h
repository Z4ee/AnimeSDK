#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_SETTARGETVALUEKEY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1792DAF0)
#define MOLEMOLE_SETTARGETVALUEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1792DD00)
#define MOLEMOLE_SETTARGETVALUEKEY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1792DDA0)

namespace MoleMole
{
	inline static constexpr unsigned int SetTargetValueKey_TypeDefinitionIndex = 62227;

	class SetTargetValueKey : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::System::String* Key; // 0x60
		::System::Boolean ResetDynamicValue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUEKEY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUEKEY_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUEKEY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
