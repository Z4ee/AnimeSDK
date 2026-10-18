#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x167340F0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x167343D0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1672CE70)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 40343;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::GameObject* oldPickedObject; // 0x18
		::UnityEngine::GameObject* pickedObject; // 0x20
		::UnityEngine::Camera* pickedCamera; // 0x28
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x30
		::System::Single tapCurentTime; // 0x34
		::UnityEngine::Vector2 oldStartPosition; // 0x38
		::UnityEngine::Vector2 position; // 0x40
		::System::Boolean swipeStart; // 0x48
		::System::Boolean lockPinch; // 0x49
		::System::Boolean lockTwist; // 0x4A
		::System::Single oldFingerDistance; // 0x4C
		::System::Boolean inSingleDoubleTaps; // 0x50
		::System::Boolean isOverGui; // 0x51
		::System::Boolean isGuiCamera; // 0x52
		::System::Boolean dragStart; // 0x53
		::System::Int32 finger0; // 0x54
		::System::Single fingerDistance; // 0x58
		::System::Single lastPinch; // 0x5C
		::UnityEngine::Vector2 deltaPosition; // 0x60
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x68
		::System::Single startTimeAction; // 0x6C
		::System::Single timeSinceStartAction; // 0x70
		::System::Single lastTwistAngle; // 0x74
		::System::Int32 finger1; // 0x78
		::UnityEngine::Vector2 startPosition; // 0x7C
		::System::Single startDistance; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET))(this);
		}

		::System::Void ClearPickedObjectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET))(this);
		}

		::System::Void ClearPickedUIData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET))(this);
		}
	};
}
