#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/MoveToTarget_AIMoveTargetState.h"

class Class_2_968DF98DC4CEA2DC;
class Class_3_06419CA21ECB69E6;
class Class_3_3B42BC0680587011;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D252341484B6EB1D;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1687D040)
#define MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1687D930)
#define MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1687CC60)
#define MOLEMOLE_MOVETOTARGET_ONEND_OFFSET UNITYSDK_OFFSET(0x1687D8E0)
#define MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET UNITYSDK_OFFSET(0x1687CFF0)
#define MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1687D140)
#define MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1687DA70)
#define MOLEMOLE_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1687DDC0)
#define MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1687DE70)
#define MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1687DF00)
#define MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1687DF90)
#define MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1687E020)
#define MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1687E0B0)

namespace MoleMole
{
	inline static constexpr unsigned int MoveToTarget_TypeDefinitionIndex = 48484;

	class MoveToTarget : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_F33F9DC5F4112336* animCharacter; // 0x58
		::Class_3_D252341484B6EB1D* aiComponent; // 0x60
		::Class_3_3B42BC0680587011* inputComp; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::System::String* targetAnchorName; // 0x78
		::Class_2_968DF98DC4CEA2DC* moveToTargetTask; // 0x80
		::Class_3_C93CC3D2C2AC4067* characterModel; // 0x88
		::Class_3_06419CA21ECB69E6* attackTargetComponent; // 0x90
		::System::Single moveTime; // 0x98
		::System::Single minDistance; // 0x9C
		::System::Single RotateSpeed; // 0xA0
		::System::Single _moveTimer; // 0xA4
		::MoleMole::MoveToTarget_AIMoveTargetState _moveState; // 0xA8
		::MoleMole::AIMoveTargetType type; // 0xAC
		::System::Single _targetDistance; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
