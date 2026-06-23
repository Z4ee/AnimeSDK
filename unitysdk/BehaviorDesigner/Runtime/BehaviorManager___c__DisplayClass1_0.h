#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorManager; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace System { template <typename T> class Action_1; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03A60)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS1_0__TRYLOADBEHAVIOR_B__0_OFFSET UNITYSDK_OFFSET(0x1DE03A70)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager___c__DisplayClass1_0_TypeDefinitionIndex = 33231;

	class BehaviorManager___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x10
		::BehaviorDesigner::Runtime::BehaviorManager* __4__this; // 0x18
		::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* outerTreeReadyCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryLoadBehavior_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER___C__DISPLAYCLASS1_0__TRYLOADBEHAVIOR_B__0_OFFSET))(this);
		}
	};
}
