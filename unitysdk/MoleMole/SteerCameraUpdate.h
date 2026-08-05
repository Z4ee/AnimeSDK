#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerCamera; }

#define MOLEMOLE_STEERCAMERAUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14A21B60)
#define MOLEMOLE_STEERCAMERAUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x14A21DC0)
#define MOLEMOLE_STEERCAMERAUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A22280)
#define MOLEMOLE_STEERCAMERAUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A222D0)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14A22370)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x14A22400)
#define MOLEMOLE_STEERCAMERAUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A22490)

namespace MoleMole
{
	inline static constexpr unsigned int SteerCameraUpdate_TypeDefinitionIndex = 66501;

	class SteerCameraUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x60
		::Class_3_C93CC3D2C2AC4067* modelComponent; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
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
