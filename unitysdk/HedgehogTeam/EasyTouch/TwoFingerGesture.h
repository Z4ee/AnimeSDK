#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x167435B0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x167438A0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1673C300)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 40343;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* oldPickedObject; // 0x10
		::UnityEngine::GameObject* pickedUIElement; // 0x18
		::UnityEngine::GameObject* pickedObject; // 0x20
		::UnityEngine::Camera* pickedCamera; // 0x28
		::System::Boolean isOverGui; // 0x30
		::System::Boolean isGuiCamera; // 0x31
		::System::Boolean lockTwist; // 0x32
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x34
		::System::Boolean swipeStart; // 0x38
		::System::Boolean lockPinch; // 0x39
		::System::Boolean inSingleDoubleTaps; // 0x3A
		::System::Boolean dragStart; // 0x3B
		::System::Single fingerDistance; // 0x3C
		::System::Single tapCurentTime; // 0x40
		::UnityEngine::Vector2 deltaPosition; // 0x44
		::System::Single lastTwistAngle; // 0x4C
		::System::Single startDistance; // 0x50
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x54
		::System::Single oldFingerDistance; // 0x58
		::UnityEngine::Vector2 oldStartPosition; // 0x5C
		::UnityEngine::Vector2 startPosition; // 0x64
		::System::Single startTimeAction; // 0x6C
		::UnityEngine::Vector2 position; // 0x70
		::System::Single timeSinceStartAction; // 0x78
		::System::Int32 finger1; // 0x7C
		::System::Int32 finger0; // 0x80
		::System::Single lastPinch; // 0x84

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
