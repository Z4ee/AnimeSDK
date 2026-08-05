#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x15B94540)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS_ONRESET_OFFSET UNITYSDK_OFFSET(0x15B94730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B94690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x15B94770)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x15B94800)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x15B94890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B94920)

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int IsInCustomTags_TypeDefinitionIndex = 55358;

	class IsInCustomTags : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Tags; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISINCUSTOMTAGS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
