#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CurveEdgePointSetting.h"
#include "unitysdk/RPG/Client/ECurveMoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoCurveMovableObjectLogic; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD741ED0)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xD741D80)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_GET_CUSTOMDIRECTION_OFFSET UNITYSDK_OFFSET(0xD741DA0)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_GET_FREEZEROTATE_OFFSET UNITYSDK_OFFSET(0xD741D30)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_ISINANIMIDLESTATE_OFFSET UNITYSDK_OFFSET(0xD741DC0)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xD741D90)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_SET_CUSTOMDIRECTION_OFFSET UNITYSDK_OFFSET(0xD741DB0)
#define RPG_CLIENT_MONOCURVEMOVEMENTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD741F60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementObject_TypeDefinitionIndex = 68518;

	class MonoCurveMovementObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* uniqueName; // 0x18
		::System::String* levelGraphConfigPath; // 0x20
		::UnityEngine::Transform* mover; // 0x28
		::UnityEngine::Transform* moverMotion; // 0x30
		::System::Boolean freezeRotateX; // 0x38
		::System::Single freezeRotateXValue; // 0x3C
		::System::Boolean freezeRotateY; // 0x40
		::System::Single freezeRotateYValue; // 0x44
		::System::Boolean freezeRotateZ; // 0x48
		::System::Single freezeRotateZValue; // 0x4C
		::System::Single speed; // 0x50
		::System::Single decalSpeedRatio; // 0x54
		::System::Single length; // 0x58
		::System::Boolean reverseDirection; // 0x5C
		::RPG::Client::CurveEdgePointSetting startPoint; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::CurveEdgePointSetting>* finishPoints; // 0x70
		::Il2CppArray<::RPG::Client::MonoCurveMovableObjectLogic*>* logics; // 0x78
		::UnityEngine::Collider* positiveCollider; // 0x80
		::UnityEngine::Collider* negativeCollider; // 0x88
		::System::Single moveDetectTriggeredLimitDistance; // 0x90
		::UnityEngine::Collider* moveDetectTrigger; // 0x98
		::UnityEngine::Collider* moveAllowTrigger; // 0xA0
		::UnityEngine::Collider* moveDisallowTrigger; // 0xA8
		::System::Boolean useCustomTrigger; // 0xB0
		::RPG::GameCore::OptionTriggerInfo* triggerInfo; // 0xB8
		::System::String* animStateIdleName; // 0xC0
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0xC8
		::RPG::Client::ECurveMoveDirection _CustomDirection_k__BackingField; // 0xD0
		::System::Int32 HGFEMDBFDBO; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FreezeRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_GET_FREEZEROTATE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_SET_ANIMATORREF_OFFSET))(this, a1);
		}

		::RPG::Client::ECurveMoveDirection get_CustomDirection()
		{
			return ((::RPG::Client::ECurveMoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_GET_CUSTOMDIRECTION_OFFSET))(this);
		}

		::System::Void set_CustomDirection(::RPG::Client::ECurveMoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_SET_CUSTOMDIRECTION_OFFSET))(this, a1);
		}

		::System::Boolean IsInAnimIdleState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_ISINANIMIDLESTATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTOBJECT_AWAKE_OFFSET))(this);
		}
	};
}
