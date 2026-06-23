#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/MoveToTarget_AIMoveTargetState.h"

class Class_2_968DF98DC4CEA2DC;
class Class_3_3B42BC0680587011;
class Class_3_6D73516CC6FEADD7;
class Class_3_CF6254B260CF5CF4;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x10D74FF0)
#define MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x10D75710)
#define MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D74C10)
#define MOLEMOLE_MOVETOTARGET_ONEND_OFFSET UNITYSDK_OFFSET(0x10D756C0)
#define MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET UNITYSDK_OFFSET(0x10D74FA0)
#define MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D750F0)
#define MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10D75860)
#define MOLEMOLE_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x10D75BB0)
#define MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D75C60)
#define MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x10D75CF0)
#define MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10D75D80)
#define MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D75E10)
#define MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10D75EA0)

namespace MoleMole
{
	inline static constexpr unsigned int MoveToTarget_TypeDefinitionIndex = 70249;

	class MoveToTarget : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_F33F9DC5F4112336* animCharacter; // 0x58
		::Class_3_3B42BC0680587011* inputComp; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x70
		::System::String* targetAnchorName; // 0x78
		::Class_2_968DF98DC4CEA2DC* moveToTargetTask; // 0x80
		::Class_3_6D73516CC6FEADD7* aiComponent; // 0x88
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x90
		::System::Single _moveTimer; // 0x98
		::System::Single moveTime; // 0x9C
		::MoleMole::MoveToTarget_AIMoveTargetState _moveState; // 0xA0
		::System::Single RotateSpeed; // 0xA4
		::System::Single minDistance; // 0xA8
		::System::Single _targetDistance; // 0xAC
		::MoleMole::AIMoveTargetType type; // 0xB0

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
