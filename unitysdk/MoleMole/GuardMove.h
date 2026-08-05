#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_24B31638312672D4;
class Class_3_06419CA21ECB69E6;
class Class_3_3B42BC0680587011;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D252341484B6EB1D;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x13841020)
#define MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x138414B0)
#define MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13840BF0)
#define MOLEMOLE_GUARDMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x13841460)
#define MOLEMOLE_GUARDMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x13840FB0)
#define MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13841110)
#define MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x138415E0)
#define MOLEMOLE_GUARDMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x13841840)
#define MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x138418D0)
#define MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x13841960)
#define MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x138419F0)
#define MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13841A80)
#define MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13841B10)

namespace MoleMole
{
	inline static constexpr unsigned int GuardMove_TypeDefinitionIndex = 75163;

	class GuardMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_D252341484B6EB1D* aiComponent; // 0x58
		::Class_3_06419CA21ECB69E6* attackTargetComponent; // 0x60
		::Class_3_3B42BC0680587011* characterInput; // 0x68
		::Class_2_24B31638312672D4* guardMoveTask; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::Class_3_C93CC3D2C2AC4067* characterModel; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::System::Single moveAngleOffset; // 0x90
		::System::Single rotateSpeed; // 0x94
		::System::Single guardDistance; // 0x98
		::System::Single _moveTimer; // 0x9C
		::System::Single _checkDistance; // 0xA0
		::System::Single moveTime; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
