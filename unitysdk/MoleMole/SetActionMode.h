#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_0D4C1A014C7CC9DE;
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_SETACTIONMODE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19988EA0)
#define MOLEMOLE_SETACTIONMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19989090)
#define MOLEMOLE_SETACTIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19989200)
#define MOLEMOLE_SETACTIONMODE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19989290)
#define MOLEMOLE_SETACTIONMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19989320)

namespace MoleMole
{
	inline static constexpr unsigned int SetActionMode_TypeDefinitionIndex = 54662;

	class SetActionMode : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_3_0D4C1A014C7CC9DE* _levelAIComponent; // 0x70
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETACTIONMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETACTIONMODE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETACTIONMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETACTIONMODE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETACTIONMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
