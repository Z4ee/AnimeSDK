#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D1590D0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x1D1593B0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D151ED0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 39046;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::Camera* pickedCamera; // 0x10
		::UnityEngine::GameObject* oldPickedObject; // 0x18
		::UnityEngine::GameObject* pickedUIElement; // 0x20
		::UnityEngine::GameObject* pickedObject; // 0x28
		::System::Single timeSinceStartAction; // 0x30
		::System::Single startDistance; // 0x34
		::System::Single lastPinch; // 0x38
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x3C
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x40
		::System::Single fingerDistance; // 0x44
		::System::Int32 finger0; // 0x48
		::UnityEngine::Vector2 startPosition; // 0x4C
		::System::Single lastTwistAngle; // 0x54
		::UnityEngine::Vector2 position; // 0x58
		::System::Int32 finger1; // 0x60
		::System::Single oldFingerDistance; // 0x64
		::UnityEngine::Vector2 deltaPosition; // 0x68
		::System::Boolean lockTwist; // 0x70
		::System::Boolean inSingleDoubleTaps; // 0x71
		::System::Boolean dragStart; // 0x72
		::UnityEngine::Vector2 oldStartPosition; // 0x74
		::System::Boolean isOverGui; // 0x7C
		::System::Boolean isGuiCamera; // 0x7D
		::System::Boolean swipeStart; // 0x7E
		::System::Boolean lockPinch; // 0x7F
		::System::Single tapCurentTime; // 0x80
		::System::Single startTimeAction; // 0x84

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
