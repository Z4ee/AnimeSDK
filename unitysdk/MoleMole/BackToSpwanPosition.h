#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_D252341484B6EB1D;
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BACKTOSPWANPOSITION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116C8A00)
#define MOLEMOLE_BACKTOSPWANPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116C8BC0)
#define MOLEMOLE_BACKTOSPWANPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x116C8C20)
#define MOLEMOLE_BACKTOSPWANPOSITION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116C8CD0)
#define MOLEMOLE_BACKTOSPWANPOSITION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116C8D60)

namespace MoleMole
{
	inline static constexpr unsigned int BackToSpwanPosition_TypeDefinitionIndex = 43716;

	class BackToSpwanPosition : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_D252341484B6EB1D* aiComponent; // 0x58
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x78
		::System::Single OffBattleStayTime; // 0x80
		::System::Single MinDistance; // 0x84
		::System::Single RotateSpeed; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKTOSPWANPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKTOSPWANPOSITION_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKTOSPWANPOSITION_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKTOSPWANPOSITION___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKTOSPWANPOSITION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
