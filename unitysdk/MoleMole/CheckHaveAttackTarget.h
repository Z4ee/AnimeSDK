#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_06419CA21ECB69E6;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKHAVEATTACKTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B538660)
#define MOLEMOLE_CHECKHAVEATTACKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B538810)
#define MOLEMOLE_CHECKHAVEATTACKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5389B0)
#define MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B538A40)
#define MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B538AD0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckHaveAttackTarget_TypeDefinitionIndex = 79157;

	class CheckHaveAttackTarget : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::Class_3_06419CA21ECB69E6* attackTargetComponent; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
