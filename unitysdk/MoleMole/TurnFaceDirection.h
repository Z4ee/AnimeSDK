#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_269D3BE91CDA4C29;
class Class_3_3A3A95CA33F5CFBC;
class Class_3_6D73516CC6FEADD7;
class Class_3_883E597458B91E77;
class Class_3_BA709FB56ED5FAC4;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_TURNFACEDIRECTION_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x17E26D60)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKCONTINUERATATEANGLEVALID_OFFSET UNITYSDK_OFFSET(0x17E271C0)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKFACETOPLAYERANGLEVALID_OFFSET UNITYSDK_OFFSET(0x17E27560)
#define MOLEMOLE_TURNFACEDIRECTION_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x17E27970)
#define MOLEMOLE_TURNFACEDIRECTION_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17E26680)
#define MOLEMOLE_TURNFACEDIRECTION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E26630)
#define MOLEMOLE_TURNFACEDIRECTION_ONEND_OFFSET UNITYSDK_OFFSET(0x17E27900)
#define MOLEMOLE_TURNFACEDIRECTION_ONROTATEDONE_OFFSET UNITYSDK_OFFSET(0x17E27460)
#define MOLEMOLE_TURNFACEDIRECTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E26BE0)
#define MOLEMOLE_TURNFACEDIRECTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E26E60)
#define MOLEMOLE_TURNFACEDIRECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E27AA0)
#define MOLEMOLE_TURNFACEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E27C80)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E27D60)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x17E27DF0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E27E80)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E27F10)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E27FA0)

namespace MoleMole
{
	inline static constexpr unsigned int TurnFaceDirection_TypeDefinitionIndex = 80712;

	class TurnFaceDirection : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_883E597458B91E77* _characterMovement; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_3_DFD5D1FDB9D2A4AC* _characterModel; // 0x68
		::Class_3_6D73516CC6FEADD7* _aiCharacter; // 0x70
		::BehaviorDesigner::Runtime::SharedBool* CanMoveInRotating; // 0x78
		::Class_3_BA709FB56ED5FAC4* _inputComponent; // 0x80
		::Class_3_3A3A95CA33F5CFBC* _dataComponent; // 0x88
		::MoleMole::Battle::Entity* _ownerEntity; // 0x90
		::Class_3_F33F9DC5F4112336* _animCharacter; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* RotateRightMaxAngle; // 0xA0
		::BehaviorDesigner::Runtime::SharedFloat* RotateLeftMaxAngle; // 0xA8
		::Class_2_269D3BE91CDA4C29* turnFaceDirectionTask; // 0xB0
		::System::Single RotateSpeed; // 0xB8
		::System::Boolean ApplyRotateSpeed; // 0xBC
		::System::Boolean _isRotating; // 0xBD
		::System::Boolean ContinueRotate; // 0xBE
		::System::Single _rotateTimer; // 0xC0
		::System::Single RotateTimeSpan; // 0xC4
		::UnityEngine::Vector3 _beforeAtkForwardDir; // 0xC8

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
