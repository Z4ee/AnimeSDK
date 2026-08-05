#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_GETFLOATPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x118C9E00)
#define MOLEMOLE_GETFLOATPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x118C9F20)
#define MOLEMOLE_GETFLOATPARAMETER_ONSTART_OFFSET UNITYSDK_OFFSET(0x118C9AE0)
#define MOLEMOLE_GETFLOATPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x118C9C30)
#define MOLEMOLE_GETFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x118C9F90)
#define MOLEMOLE_GETFLOATPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x118CA020)
#define MOLEMOLE_GETFLOATPARAMETER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x118CA0B0)
#define MOLEMOLE_GETFLOATPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x118CA140)

namespace MoleMole
{
	inline static constexpr unsigned int GetFloatParameter_TypeDefinitionIndex = 64850;

	class GetFloatParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::MoleMole::Battle::Entity* shareOwnerEntity; // 0x78
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
