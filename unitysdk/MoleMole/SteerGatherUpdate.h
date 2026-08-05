#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerGather; }

#define MOLEMOLE_STEERGATHERUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14A22520)
#define MOLEMOLE_STEERGATHERUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x14A22780)
#define MOLEMOLE_STEERGATHERUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A22C40)
#define MOLEMOLE_STEERGATHERUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A22C90)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14A22D30)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x14A22DC0)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A22E50)

namespace MoleMole
{
	inline static constexpr unsigned int SteerGatherUpdate_TypeDefinitionIndex = 88982;

	class SteerGatherUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::Class_3_C93CC3D2C2AC4067* modelComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::MoleMole::Battle::MonoSteerGather* monoSteer; // 0x70
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x78
		::System::Boolean Enable; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
