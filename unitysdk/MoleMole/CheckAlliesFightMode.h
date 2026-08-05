#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class Class_3_78151B04E265D845;
class Class_3_CB5FEA0F6B413476;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKALLIESFIGHTMODE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116D95D0)
#define MOLEMOLE_CHECKALLIESFIGHTMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116D9830)
#define MOLEMOLE_CHECKALLIESFIGHTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x116D98B0)
#define MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116D9940)
#define MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116D99D0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAlliesFightMode_TypeDefinitionIndex = 87678;

	class CheckAlliesFightMode : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::Class_3_78151B04E265D845* _FightModeComponent; // 0x50
		::Class_3_CB5FEA0F6B413476* _buddyFightModeComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::Battle::Entity* _ownerEntity; // 0x68
		::MoleMole::Config::BuddyFightModeType TargetFightMode; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
