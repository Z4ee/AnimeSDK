#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_269D3BE91CDA4C29;
class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D252341484B6EB1D;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_TURNFACEDIRECTION_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1B6CF330)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKCONTINUERATATEANGLEVALID_OFFSET UNITYSDK_OFFSET(0x1B6CF6E0)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKFACETOPLAYERANGLEVALID_OFFSET UNITYSDK_OFFSET(0x1B6CFB90)
#define MOLEMOLE_TURNFACEDIRECTION_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1B6D0140)
#define MOLEMOLE_TURNFACEDIRECTION_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6CEB70)
#define MOLEMOLE_TURNFACEDIRECTION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B6CEB20)
#define MOLEMOLE_TURNFACEDIRECTION_ONEND_OFFSET UNITYSDK_OFFSET(0x1B6D00D0)
#define MOLEMOLE_TURNFACEDIRECTION_ONROTATEDONE_OFFSET UNITYSDK_OFFSET(0x1B6CFA90)
#define MOLEMOLE_TURNFACEDIRECTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1B6CF0D0)
#define MOLEMOLE_TURNFACEDIRECTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B6CF430)
#define MOLEMOLE_TURNFACEDIRECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B6D0270)
#define MOLEMOLE_TURNFACEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6D0450)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B6D0530)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1B6D05C0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1B6D0650)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B6D06E0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B6D0770)

namespace MoleMole
{
	inline static constexpr unsigned int TurnFaceDirection_TypeDefinitionIndex = 61983;

	class TurnFaceDirection : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_3_883E597458B91E77* _characterMovement; // 0x60
		::Class_3_F33F9DC5F4112336* _animCharacter; // 0x68
		::Class_2_269D3BE91CDA4C29* turnFaceDirectionTask; // 0x70
		::Class_3_3B42BC0680587011* _inputComponent; // 0x78
		::Class_3_707412604A129938* _dataComponent; // 0x80
		::Class_3_D252341484B6EB1D* _aiCharacter; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* RotateRightMaxAngle; // 0x90
		::BehaviorDesigner::Runtime::SharedBool* CanMoveInRotating; // 0x98
		::Class_3_C93CC3D2C2AC4067* _characterModel; // 0xA0
		::MoleMole::Battle::Entity* _ownerEntity; // 0xA8
		::BehaviorDesigner::Runtime::SharedFloat* RotateLeftMaxAngle; // 0xB0
		::UnityEngine::Vector3 _beforeAtkForwardDir; // 0xB8
		::System::Single RotateTimeSpan; // 0xC4
		::System::Single _rotateTimer; // 0xC8
		::System::Boolean ContinueRotate; // 0xCC
		::System::Boolean _isRotating; // 0xCD
		::System::Boolean ApplyRotateSpeed; // 0xCE
		::System::Single RotateSpeed; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean CheckFaceToPlayerAngleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_CHECKFACETOPLAYERANGLEVALID_OFFSET))(this);
		}

		::System::Boolean CheckContinueRatateAngleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_CHECKCONTINUERATATEANGLEVALID_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_TOSTRING_OFFSET))(this);
		}

		::System::Void OnRotateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONROTATEDONE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
