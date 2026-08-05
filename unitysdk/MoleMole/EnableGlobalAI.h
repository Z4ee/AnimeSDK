#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_0D4C1A014C7CC9DE;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_ENABLEGLOBALAI_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A990790)
#define MOLEMOLE_ENABLEGLOBALAI_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A990980)
#define MOLEMOLE_ENABLEGLOBALAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A990A50)
#define MOLEMOLE_ENABLEGLOBALAI___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A990AE0)
#define MOLEMOLE_ENABLEGLOBALAI___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A990B70)

namespace MoleMole
{
	inline static constexpr unsigned int EnableGlobalAI_TypeDefinitionIndex = 67785;

	class EnableGlobalAI : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_3_0D4C1A014C7CC9DE* _levelAIComponent; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* enableGlobalAI; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
