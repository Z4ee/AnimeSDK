#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerCamera; }

#define MOLEMOLE_STEERCAMERAUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EB62F0)
#define MOLEMOLE_STEERCAMERAUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x13EB6550)
#define MOLEMOLE_STEERCAMERAUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EB6960)
#define MOLEMOLE_STEERCAMERAUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB69B0)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EB6A50)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x13EB6AE0)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EB6B70)

namespace MoleMole
{
	inline static constexpr unsigned int SteerCameraUpdate_TypeDefinitionIndex = 54199;

	class SteerCameraUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x68
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x70
		::MoleMole::Battle::MonoSteerCamera* monoSteer; // 0x78
		::System::Boolean Enable; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERCAMERAUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
