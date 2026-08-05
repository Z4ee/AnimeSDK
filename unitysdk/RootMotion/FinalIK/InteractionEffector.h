#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKEffector; }
namespace RootMotion::FinalIK { class InteractionObject; }
namespace RootMotion::FinalIK { class InteractionSystem; }
namespace RootMotion::FinalIK { class InteractionTarget; }
namespace RootMotion::FinalIK { class Poser; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_EFFECTORTYPE_OFFSET UNITYSDK_OFFSET(0x1F6ED810)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_ININTERACTION_OFFSET UNITYSDK_OFFSET(0x1F6ED870)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_INTERACTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1F6ED850)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1F6ED830)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1F6F11D0)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F6ED9F0)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_ONPOSTFBBIK_OFFSET UNITYSDK_OFFSET(0x1F6F1330)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_PAUSE_OFFSET UNITYSDK_OFFSET(0x1F6EE500)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_PICKUP_OFFSET UNITYSDK_OFFSET(0x1F6F0880)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_RESETTODEFAULTS_OFFSET UNITYSDK_OFFSET(0x1F6EDDC0)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_RESUME_OFFSET UNITYSDK_OFFSET(0x1F6EE7E0)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_SET_EFFECTORTYPE_OFFSET UNITYSDK_OFFSET(0x1F6ED820)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_SET_INTERACTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1F6ED860)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1F6ED840)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_START_1_OFFSET UNITYSDK_OFFSET(0x1F6EEB50)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_START_OFFSET UNITYSDK_OFFSET(0x1F6EE950)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_STOP_OFFSET UNITYSDK_OFFSET(0x1F6F0EF0)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_STOREDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1F6EDB10)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_TRIGGERUNTRIGGEREDEVENTS_OFFSET UNITYSDK_OFFSET(0x1F6F0590)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6EF810)
#define ROOTMOTION_FINALIK_INTERACTIONEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6ED980)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionEffector_TypeDefinitionIndex = 38875;

	class InteractionEffector : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector _effectorType_k__BackingField; // 0x10
		::System::Boolean _isPaused_k__BackingField; // 0x14
		::RootMotion::FinalIK::InteractionObject* _interactionObject_k__BackingField; // 0x18
		::RootMotion::FinalIK::Poser* poser; // 0x20
		::RootMotion::FinalIK::IKEffector* effector; // 0x28
		::System::Single timer; // 0x30
		::System::Single length; // 0x34
		::System::Single weight; // 0x38
		::System::Single fadeInSpeed; // 0x3C
		::System::Single defaultPositionWeight; // 0x40
		::System::Single defaultRotationWeight; // 0x44
		::System::Single defaultPull; // 0x48
		::System::Single defaultReach; // 0x4C
		::System::Single defaultPush; // 0x50
		::System::Single defaultPushParent; // 0x54
		::System::Single defaultBendGoalWeight; // 0x58
		::System::Single resetTimer; // 0x5C
		::System::Boolean positionWeightUsed; // 0x60
		::System::Boolean rotationWeightUsed; // 0x61
		::System::Boolean pullUsed; // 0x62
		::System::Boolean reachUsed; // 0x63
		::System::Boolean pushUsed; // 0x64
		::System::Boolean pushParentUsed; // 0x65
		::System::Boolean bendGoalWeightUsed; // 0x66
		::System::Boolean pickedUp; // 0x67
		::System::Boolean defaults; // 0x68
		::System::Boolean pickUpOnPostFBBIK; // 0x69
		::UnityEngine::Vector3 pickUpPosition; // 0x6C
		::UnityEngine::Vector3 pausePositionRelative; // 0x78
		::UnityEngine::Quaternion pickUpRotation; // 0x84
		::UnityEngine::Quaternion pauseRotationRelative; // 0x94
		::RootMotion::FinalIK::InteractionTarget* interactionTarget; // 0xA8
		::UnityEngine::Transform* target; // 0xB0
		::System::Collections::Generic::List_1<::System::Boolean>* triggered; // 0xB8
		::RootMotion::FinalIK::InteractionSystem* interactionSystem; // 0xC0
		::System::Boolean started; // 0xC8

		::System::Void _ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR__CTOR_OFFSET))(this, effectorType);
		}

		::RootMotion::FinalIK::FullBodyBipedEffector get_effectorType()
		{
			return ((::RootMotion::FinalIK::FullBodyBipedEffector(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_EFFECTORTYPE_OFFSET))(this);
		}

		::System::Void set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_SET_EFFECTORTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_isPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_SET_ISPAUSED_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::InteractionObject* get_interactionObject()
		{
			return ((::RootMotion::FinalIK::InteractionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_INTERACTIONOBJECT_OFFSET))(this);
		}

		::System::Void set_interactionObject(::RootMotion::FinalIK::InteractionObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_SET_INTERACTIONOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_inInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_ININTERACTION_OFFSET))(this);
		}

		::System::Void Initiate(::RootMotion::FinalIK::InteractionSystem* interactionSystem)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::InteractionSystem*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_INITIATE_OFFSET))(this, interactionSystem);
		}

		::System::Void StoreDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_STOREDEFAULTS_OFFSET))(this);
		}

		::System::Boolean ResetToDefaults(::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_RESETTODEFAULTS_OFFSET))(this, speed, deltaTime);
		}

		::System::Boolean Pause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_PAUSE_OFFSET))(this);
		}

		::System::Boolean Resume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_RESUME_OFFSET))(this);
		}

		::System::Boolean Start(::RootMotion::FinalIK::InteractionObject* interactionObject, ::System::String* tag, ::System::Single fadeInTime, ::System::Boolean interrupt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_START_OFFSET))(this, interactionObject, tag, fadeInTime, interrupt);
		}

		::System::Boolean Start_1(::RootMotion::FinalIK::InteractionObject* interactionObject, ::RootMotion::FinalIK::InteractionTarget* interactionTarget, ::System::Single fadeInTime, ::System::Boolean interrupt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject*, ::RootMotion::FinalIK::InteractionTarget*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_START_1_OFFSET))(this, interactionObject, interactionTarget, fadeInTime, interrupt);
		}

		::System::Void Update(::UnityEngine::Transform* root, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_UPDATE_OFFSET))(this, root, speed, deltaTime);
		}

		::System::Single get_progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void TriggerUntriggeredEvents(::System::Boolean checkTime, ::System::Boolean& pickUp, ::System::Boolean& pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_TRIGGERUNTRIGGEREDEVENTS_OFFSET))(this, checkTime, pickUp, pause);
		}

		::System::Void PickUp(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_PICKUP_OFFSET))(this, root);
		}

		::System::Boolean Stop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_STOP_OFFSET))(this);
		}

		::System::Void OnPostFBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONEFFECTOR_ONPOSTFBBIK_OFFSET))(this);
		}
	};
}
