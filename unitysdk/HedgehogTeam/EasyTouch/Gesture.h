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

#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D1669D0)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTFIRSTPICKEDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1D166F00)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1D166F40)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETSWIPEORDRAGANGLE_OFFSET UNITYSDK_OFFSET(0x1D166BE0)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_1_OFFSET UNITYSDK_OFFSET(0x1D166AF0)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1D166A70)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D166D50)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1D166D20)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1D166CB0)
#define HEDGEHOGTEAM_EASYTOUCH_GESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14E780)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int Gesture_TypeDefinitionIndex = 39043;

	class Gesture : public ::HedgehogTeam::EasyTouch::BaseFinger
	{
	public:
		::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection swipe; // 0x78
		::UnityEngine::Vector2 swipeVector; // 0x7C
		::System::Single twistAngle; // 0x84
		::HedgehogTeam::EasyTouch::EasyTouch_EvtType type; // 0x88
		::System::Single deltaPinch; // 0x8C
		::System::Single twoFingerDistance; // 0x90
		::System::Single swipeLength; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE__CTOR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_CLONE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTouchToWorldPoint(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetTouchToWorldPoint_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETTOUCHTOWORLDPOINT_1_OFFSET))(this, a1);
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

		::System::Boolean IsOverRectTransform(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_ISOVERRECTTRANSFORM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetCurrentFirstPickedUIElement(::System::Boolean a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTFIRSTPICKEDUIELEMENT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetCurrentPickedObject(::System::Boolean a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_GESTURE_GETCURRENTPICKEDOBJECT_OFFSET))(this, a1);
		}
	};
}
