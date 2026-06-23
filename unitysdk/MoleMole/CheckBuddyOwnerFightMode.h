#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"

class Class_3_271E6243562E73F4;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1702CC30)
#define MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1702CDF0)
#define MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1702CFD0)
#define MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1702D060)
#define MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1702D0F0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckBuddyOwnerFightMode_TypeDefinitionIndex = 71148;

	class CheckBuddyOwnerFightMode : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::Class_3_271E6243562E73F4* _buddyComponent; // 0x50
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::Config::FightModeType TargetFightMode; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYOWNERFIGHTMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
