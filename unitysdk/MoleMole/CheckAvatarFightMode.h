#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKAVATARFIGHTMODE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12EE4F70)
#define MOLEMOLE_CHECKAVATARFIGHTMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12EE50C0)
#define MOLEMOLE_CHECKAVATARFIGHTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE5290)
#define MOLEMOLE_CHECKAVATARFIGHTMODE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12EE5320)
#define MOLEMOLE_CHECKAVATARFIGHTMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12EE53B0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAvatarFightMode_TypeDefinitionIndex = 72358;

	class CheckAvatarFightMode : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::MoleMole::Config::FightModeType TargetFightMode; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARFIGHTMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARFIGHTMODE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARFIGHTMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARFIGHTMODE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARFIGHTMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
