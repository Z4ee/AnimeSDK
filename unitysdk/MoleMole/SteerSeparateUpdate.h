#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerSeparate; }

#define MOLEMOLE_STEERSEPARATEUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A1AA210)
#define MOLEMOLE_STEERSEPARATEUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A1AA4C0)
#define MOLEMOLE_STEERSEPARATEUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1AA950)
#define MOLEMOLE_STEERSEPARATEUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AA9A0)
#define MOLEMOLE_STEERSEPARATEUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A1AAA40)
#define MOLEMOLE_STEERSEPARATEUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A1AAAD0)
#define MOLEMOLE_STEERSEPARATEUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1AAB60)

namespace MoleMole
{
	inline static constexpr unsigned int SteerSeparateUpdate_TypeDefinitionIndex = 58586;

	class SteerSeparateUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x68
		::MoleMole::Battle::MonoSteerSeparate* monoSeparate; // 0x70
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x78
		::System::Boolean Enable; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERSEPARATEUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
