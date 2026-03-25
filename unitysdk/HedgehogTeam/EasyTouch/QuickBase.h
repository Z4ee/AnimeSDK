#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase_AffectedAxesAction.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase_DirectAction.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase_GameObjectType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Rigidbody; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x11A7A6A0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_DISABLEDALLSWIPEEXCEPTED_OFFSET UNITYSDK_OFFSET(0x11A7B5E0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_DISABLEDQUICKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A7B480)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_DODIRECTACTION_OFFSET UNITYSDK_OFFSET(0x11A7AE70)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_ENABLEDQUICKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A7B320)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_GETINFLUENCEDAXIS_OFFSET UNITYSDK_OFFSET(0x11A7AE10)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11A7AE00)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A7ADF0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_START_OFFSET UNITYSDK_OFFSET(0x11A7A7E0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7B7A0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickBase_TypeDefinitionIndex = 31266;

	class QuickBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* quickActionName; // 0x18
		::System::Boolean isMultiTouch; // 0x20
		::System::Boolean is2Finger; // 0x21
		::System::Boolean isOnTouch; // 0x22
		::System::Boolean enablePickOverUI; // 0x23
		::System::Boolean resetPhysic; // 0x24
		::HedgehogTeam::EasyTouch::QuickBase_DirectAction directAction; // 0x28
		::HedgehogTeam::EasyTouch::QuickBase_AffectedAxesAction axesAction; // 0x2C
		::System::Single sensibility; // 0x30
		::UnityEngine::CharacterController* directCharacterController; // 0x38
		::System::Boolean inverseAxisValue; // 0x40
		::UnityEngine::Rigidbody* cachedRigidBody; // 0x48
		::System::Boolean isKinematic; // 0x50
		::UnityEngine::Rigidbody2D* cachedRigidBody2D; // 0x58
		::System::Boolean isKinematic2D; // 0x60
		::HedgehogTeam::EasyTouch::QuickBase_GameObjectType realType; // 0x64
		::System::Int32 fingerIndex; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetInfluencedAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_GETINFLUENCEDAXIS_OFFSET))(this);
		}

		::System::Void DoDirectAction(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_DODIRECTACTION_OFFSET))(this, value);
		}

		::System::Void EnabledQuickComponent(::System::String* quickActionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_ENABLEDQUICKCOMPONENT_OFFSET))(this, quickActionName);
		}

		::System::Void DisabledQuickComponent(::System::String* quickActionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_DISABLEDQUICKCOMPONENT_OFFSET))(this, quickActionName);
		}

		::System::Void DisabledAllSwipeExcepted(::System::String* quickActionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKBASE_DISABLEDALLSWIPEEXCEPTED_OFFSET))(this, quickActionName);
		}
	};
}
