#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKISANIMATORNAME_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13479740)
#define MOLEMOLE_CHECKISANIMATORNAME_ONRESET_OFFSET UNITYSDK_OFFSET(0x1347A150)
#define MOLEMOLE_CHECKISANIMATORNAME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x134798F0)
#define MOLEMOLE_CHECKISANIMATORNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1347A1E0)
#define MOLEMOLE_CHECKISANIMATORNAME___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1347A270)
#define MOLEMOLE_CHECKISANIMATORNAME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1347A300)
#define MOLEMOLE_CHECKISANIMATORNAME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1347A390)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsAnimatorName_TypeDefinitionIndex = 67495;

	class CheckIsAnimatorName : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* maxStartFrame; // 0x50
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* index; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedString* name; // 0x78
		::BehaviorDesigner::Runtime::SharedInt* endFrame; // 0x80
		::BehaviorDesigner::Runtime::SharedBool* maxEndFrame; // 0x88
		::BehaviorDesigner::Runtime::SharedInt* startFrame; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
