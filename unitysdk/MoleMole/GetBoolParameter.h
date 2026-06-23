#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_GETBOOLPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1417E570)
#define MOLEMOLE_GETBOOLPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1417E690)
#define MOLEMOLE_GETBOOLPARAMETER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1417E250)
#define MOLEMOLE_GETBOOLPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1417E3A0)
#define MOLEMOLE_GETBOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1417E6E0)
#define MOLEMOLE_GETBOOLPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1417E770)
#define MOLEMOLE_GETBOOLPARAMETER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1417E800)
#define MOLEMOLE_GETBOOLPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1417E890)

namespace MoleMole
{
	inline static constexpr unsigned int GetBoolParameter_TypeDefinitionIndex = 76649;

	class GetBoolParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x60
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::MoleMole::Battle::Entity* shareOwnerEntity; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER_ONRESET_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETBOOLPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
