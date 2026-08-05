#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Basic/UnityAnimator/EntityTargetType.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1454D820)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1454DE80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1454D970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1454DEC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1454DF50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1454DFE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1454E070)

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int IsInZoneTags_TypeDefinitionIndex = 90944;

	class IsInZoneTags : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::BehaviorDesigner::Runtime::SharedString* CustomTargetKey; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* SharedTagsList; // 0x68
		::BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator::EntityTargetType TargetType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINZONETAGS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
