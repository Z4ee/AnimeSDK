#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/TeleportToAvatar_Boolean.h"
#include "unitysdk/MoleMole/TeleportToAvatar_Integer.h"
#include "unitysdk/MoleMole/TeleportToAvatar_Trigger.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TELEPORTTOAVATAR_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1265B500)
#define MOLEMOLE_TELEPORTTOAVATAR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1265BC60)
#define MOLEMOLE_TELEPORTTOAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1265C2F0)
#define MOLEMOLE_TELEPORTTOAVATAR___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1265C380)
#define MOLEMOLE_TELEPORTTOAVATAR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1265C410)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar_TypeDefinitionIndex = 54672;

	class TeleportToAvatar : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::AnimatorParamControl* AnimatorParamControl; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::TeleportToAvatar_Boolean>* BooleanAnimatorParamControl; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::TeleportToAvatar_Integer>* IntegerAnimatorParamControl; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::TeleportToAvatar_Trigger>* TriggerAnimatorParamControl; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
