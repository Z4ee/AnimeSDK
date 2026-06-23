#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_B9D5951434CC70FD;
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKSKILLREADY_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12C55390)
#define MOLEMOLE_CHECKSKILLREADY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C55540)
#define MOLEMOLE_CHECKSKILLREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C55650)
#define MOLEMOLE_CHECKSKILLREADY___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12C556E0)
#define MOLEMOLE_CHECKSKILLREADY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C55770)

namespace MoleMole
{
	inline static constexpr unsigned int CheckSkillReady_TypeDefinitionIndex = 50006;

	class CheckSkillReady : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* sharedOwnerEntity; // 0x50
		::Class_3_B9D5951434CC70FD* _skillComponent; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedString* SkillName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLREADY__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLREADY_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLREADY_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLREADY___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLREADY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
