#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_GETINTEGERPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x10E1ED20)
#define MOLEMOLE_GETINTEGERPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x10E1EE40)
#define MOLEMOLE_GETINTEGERPARAMETER_ONSTART_OFFSET UNITYSDK_OFFSET(0x10E1EA00)
#define MOLEMOLE_GETINTEGERPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10E1EB50)
#define MOLEMOLE_GETINTEGERPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1EEB0)
#define MOLEMOLE_GETINTEGERPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x10E1EF40)
#define MOLEMOLE_GETINTEGERPARAMETER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10E1EFD0)
#define MOLEMOLE_GETINTEGERPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10E1F060)

namespace MoleMole
{
	inline static constexpr unsigned int GetIntegerParameter_TypeDefinitionIndex = 76136;

	class GetIntegerParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x60
		::MoleMole::Battle::Entity* shareOwnerEntity; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER_ONRESET_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETINTEGERPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
