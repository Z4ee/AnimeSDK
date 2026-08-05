#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_POPDISABLEDYNAMICTARGETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1792A910)
#define MOLEMOLE_POPDISABLEDYNAMICTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1792AA80)
#define MOLEMOLE_POPDISABLEDYNAMICTARGETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1792AB10)

namespace MoleMole
{
	inline static constexpr unsigned int PopDisableDynamicTargetValue_TypeDefinitionIndex = 43674;

	class PopDisableDynamicTargetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* Tag; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPDISABLEDYNAMICTARGETVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPDISABLEDYNAMICTARGETVALUE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPDISABLEDYNAMICTARGETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
