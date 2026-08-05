#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_PUSHDISABLEDYNAMICTARGETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1809B9C0)
#define MOLEMOLE_PUSHDISABLEDYNAMICTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1809BB30)
#define MOLEMOLE_PUSHDISABLEDYNAMICTARGETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1809BBC0)

namespace MoleMole
{
	inline static constexpr unsigned int PushDisableDynamicTargetValue_TypeDefinitionIndex = 87723;

	class PushDisableDynamicTargetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* Tag; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PUSHDISABLEDYNAMICTARGETVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PUSHDISABLEDYNAMICTARGETVALUE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PUSHDISABLEDYNAMICTARGETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
