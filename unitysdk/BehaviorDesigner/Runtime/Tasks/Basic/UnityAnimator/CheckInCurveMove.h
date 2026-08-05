#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x187019B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18701600)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x18701AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18701750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18701B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18701BA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x18701C30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18701CC0)

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int CheckInCurveMove_TypeDefinitionIndex = 83180;

	class CheckInCurveMove : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x60
		::MoleMole::AITargetType TargetType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_ONUPDATE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_GETTARGETENTITY_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_CHECKINCURVEMOVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
