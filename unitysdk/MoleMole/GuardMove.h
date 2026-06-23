#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_24B31638312672D4;
class Class_3_3B42BC0680587011;
class Class_3_6D73516CC6FEADD7;
class Class_3_CF6254B260CF5CF4;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x12BC2180)
#define MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x12BC2630)
#define MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12BC1D50)
#define MOLEMOLE_GUARDMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x12BC25E0)
#define MOLEMOLE_GUARDMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12BC2110)
#define MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12BC2270)
#define MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12BC2760)
#define MOLEMOLE_GUARDMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC29C0)
#define MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12BC2A50)
#define MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x12BC2AE0)
#define MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12BC2B70)
#define MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12BC2C00)
#define MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12BC2C90)

namespace MoleMole
{
	inline static constexpr unsigned int GuardMove_TypeDefinitionIndex = 69856;

	class GuardMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_2_24B31638312672D4* guardMoveTask; // 0x58
		::Class_3_3B42BC0680587011* characterInput; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::Class_3_6D73516CC6FEADD7* aiComponent; // 0x78
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x80
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x88
		::System::Single moveAngleOffset; // 0x90
		::System::Single rotateSpeed; // 0x94
		::System::Single _checkDistance; // 0x98
		::System::Single guardDistance; // 0x9C
		::System::Single moveTime; // 0xA0
		::System::Single _moveTimer; // 0xA4

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
