#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_AA6DF3A878195D3F;
class Class_3_ECE1B0DC22E3457B;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_STEERGLOBALUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x180A0A90)
#define MOLEMOLE_STEERGLOBALUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x180A0CC0)
#define MOLEMOLE_STEERGLOBALUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x180A1060)
#define MOLEMOLE_STEERGLOBALUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x180A10B0)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x180A11B0)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x180A1240)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x180A12D0)

namespace MoleMole
{
	inline static constexpr unsigned int SteerGlobalUpdate_TypeDefinitionIndex = 55445;

	class SteerGlobalUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* RVOPriority; // 0x58
		::MoleMole::SharedGameEntity* Entity; // 0x60
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x68
		::Class_3_ECE1B0DC22E3457B* rvoComponent; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* NearWeight; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* CameraWeight; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* IdleLength; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* SeparateGatherWeight; // 0x90
		::MoleMole::Battle::Entity* ownerEntity; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* RVOWeight; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
