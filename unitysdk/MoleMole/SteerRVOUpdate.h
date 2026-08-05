#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
class Class_3_ECE1B0DC22E3457B;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerRVO; }

#define MOLEMOLE_STEERRVOUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x173A8280)
#define MOLEMOLE_STEERRVOUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x173A85A0)
#define MOLEMOLE_STEERRVOUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x173A8A60)
#define MOLEMOLE_STEERRVOUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A8AB0)
#define MOLEMOLE_STEERRVOUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x173A8B50)
#define MOLEMOLE_STEERRVOUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x173A8BE0)
#define MOLEMOLE_STEERRVOUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x173A8C70)

namespace MoleMole
{
	inline static constexpr unsigned int SteerRVOUpdate_TypeDefinitionIndex = 90119;

	class SteerRVOUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::MonoSteerRVO* monoRVO; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_3_C93CC3D2C2AC4067* modelComponent; // 0x70
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x78
		::Class_3_ECE1B0DC22E3457B* rvoComponent; // 0x80
		::System::Boolean Enable; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERRVOUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
