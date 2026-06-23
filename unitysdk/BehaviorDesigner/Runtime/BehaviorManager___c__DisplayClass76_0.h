#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace System { template <typename T> class Action_1; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BCDF0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS76_0__ENABLEBEHAVIOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E5BCE00)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager___c__DisplayClass76_0_TypeDefinitionIndex = 33232;

	class BehaviorManager___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* finished; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnableBehavior_b__0(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* tree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS76_0__ENABLEBEHAVIOR_B__0_OFFSET))(this, tree);
		}
	};
}
