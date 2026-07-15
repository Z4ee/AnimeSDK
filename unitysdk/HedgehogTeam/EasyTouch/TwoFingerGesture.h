#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B4E5B90)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x1B4E5E70)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DEA40)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 38187;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::Camera* pickedCamera; // 0x10
		::UnityEngine::GameObject* pickedUIElement; // 0x18
		::UnityEngine::GameObject* oldPickedObject; // 0x20
		::UnityEngine::GameObject* pickedObject; // 0x28
		::System::Single timeSinceStartAction; // 0x30
		::UnityEngine::Vector2 startPosition; // 0x34
		::System::Single startDistance; // 0x3C
		::System::Boolean swipeStart; // 0x40
		::System::Boolean isOverGui; // 0x41
		::System::Boolean lockPinch; // 0x42
		::System::Boolean inSingleDoubleTaps; // 0x43
		::System::Single oldFingerDistance; // 0x44
		::System::Single startTimeAction; // 0x48
		::System::Single lastPinch; // 0x4C
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x50
		::System::Boolean isGuiCamera; // 0x54
		::System::Boolean lockTwist; // 0x55
		::System::Boolean dragStart; // 0x56
		::System::Single lastTwistAngle; // 0x58
		::System::Int32 finger0; // 0x5C
		::UnityEngine::Vector2 deltaPosition; // 0x60
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x68
		::System::Int32 finger1; // 0x6C
		::UnityEngine::Vector2 position; // 0x70
		::System::Single tapCurentTime; // 0x78
		::System::Single fingerDistance; // 0x7C
		::UnityEngine::Vector2 oldStartPosition; // 0x80

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
