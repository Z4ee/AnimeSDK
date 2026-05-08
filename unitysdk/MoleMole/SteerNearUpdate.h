#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_DFD5D1FDB9D2A4AC;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerNear; }

#define MOLEMOLE_STEERNEARUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1236C730)
#define MOLEMOLE_STEERNEARUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1236C9F0)
#define MOLEMOLE_STEERNEARUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1236CFA0)
#define MOLEMOLE_STEERNEARUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1236CFF0)
#define MOLEMOLE_STEERNEARUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1236D0B0)
#define MOLEMOLE_STEERNEARUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1236D140)
#define MOLEMOLE_STEERNEARUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1236D1D0)

namespace MoleMole
{
	inline static constexpr unsigned int SteerNearUpdate_TypeDefinitionIndex = 59820;

	class SteerNearUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* MaxDistance; // 0x58
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* MinDistance; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80
		::MoleMole::Battle::MonoSteerNear* monoSteer; // 0x88
		::System::Boolean Enable; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERNEARUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
