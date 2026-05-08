#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_GETFLOATPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x10E1E630)
#define MOLEMOLE_GETFLOATPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x10E1E750)
#define MOLEMOLE_GETFLOATPARAMETER_ONSTART_OFFSET UNITYSDK_OFFSET(0x10E1E310)
#define MOLEMOLE_GETFLOATPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10E1E460)
#define MOLEMOLE_GETFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1E7C0)
#define MOLEMOLE_GETFLOATPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x10E1E850)
#define MOLEMOLE_GETFLOATPARAMETER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10E1E8E0)
#define MOLEMOLE_GETFLOATPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10E1E970)

namespace MoleMole
{
	inline static constexpr unsigned int GetFloatParameter_TypeDefinitionIndex = 68910;

	class GetFloatParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* shareOwnerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER_ONRESET_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETFLOATPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
