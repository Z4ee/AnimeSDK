#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/BaseFinger.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_SwipeDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_CLONE_OFFSET UNITYSDK_OFFSET(0x11A7A0F0)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTFIRSTPICKEDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x11A7A620)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x11A7A660)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETSWIPEORDRAGANGLE_OFFSET UNITYSDK_OFFSET(0x11A7A300)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_1_OFFSET UNITYSDK_OFFSET(0x11A7A210)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x11A7A190)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A7A470)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x11A7A440)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x11A7A3D0)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A57590)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int Gesture_TypeDefinitionIndex = 31356;

	class Gesture : public ::HedgehogTeam::EasyTouch::BaseFinger
	{
	public:
		::System::Single twistAngle; // 0x78
		::System::Single deltaPinch; // 0x7C
		::System::Single twoFingerDistance; // 0x80
		::HedgehogTeam::EasyTouch::EasyTouch_EvtType type; // 0x84
		::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection swipe; // 0x88
		::System::Single swipeLength; // 0x8C
		::UnityEngine::Vector2 swipeVector; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE__CTOR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_CLONE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTouchToWorldPoint(::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_OFFSET))(this, z);
		}

		::UnityEngine::Vector3 GetTouchToWorldPoint_1(::UnityEngine::Vector3 position3D)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_1_OFFSET))(this, position3D);
		}

		::System::Single GetSwipeOrDragAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETSWIPEORDRAGANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector2 NormalizedPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_NORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Boolean IsOverUIElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERUIELEMENT_OFFSET))(this);
		}

		::System::Boolean IsOverRectTransform(::UnityEngine::RectTransform* tr, ::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERRECTTRANSFORM_OFFSET))(this, tr, camera);
		}

		::UnityEngine::GameObject* GetCurrentFirstPickedUIElement(::System::Boolean isTwoFinger)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTFIRSTPICKEDUIELEMENT_OFFSET))(this, isTwoFinger);
		}

		::UnityEngine::GameObject* GetCurrentPickedObject(::System::Boolean isTwoFinger)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTPICKEDOBJECT_OFFSET))(this, isTwoFinger);
		}
	};
}
