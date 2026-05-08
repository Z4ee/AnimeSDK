#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/ArcanaType.h"

class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKARCANA_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1100D2F0)
#define MOLEMOLE_CHECKARCANA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1100D4B0)
#define MOLEMOLE_CHECKARCANA__CTOR_OFFSET UNITYSDK_OFFSET(0x1100D560)
#define MOLEMOLE_CHECKARCANA___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1100D5F0)
#define MOLEMOLE_CHECKARCANA___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1100D680)

namespace MoleMole
{
	inline static constexpr unsigned int CheckArcana_TypeDefinitionIndex = 43378;

	class CheckArcana : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::Class_3_F97B015544BE936B* dataComponent; // 0x50
		::MoleMole::SharedGameEntity* sharedOwnerEntity; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::System::Int32 Position; // 0x68
		::MoleMole::Config::ArcanaType Type; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKARCANA___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
