#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x12C314D0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x12C31790)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C297F0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 37079;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* oldPickedObject; // 0x10
		::UnityEngine::GameObject* pickedObject; // 0x18
		::UnityEngine::Camera* pickedCamera; // 0x20
		::UnityEngine::GameObject* pickedUIElement; // 0x28
		::System::Single tapCurentTime; // 0x30
		::UnityEngine::Vector2 startPosition; // 0x34
		::System::Single startTimeAction; // 0x3C
		::UnityEngine::Vector2 deltaPosition; // 0x40
		::System::Single fingerDistance; // 0x48
		::System::Single oldFingerDistance; // 0x4C
		::System::Boolean lockTwist; // 0x50
		::System::Boolean isGuiCamera; // 0x51
		::System::Boolean inSingleDoubleTaps; // 0x52
		::System::Boolean isOverGui; // 0x53
		::System::Boolean swipeStart; // 0x54
		::System::Boolean dragStart; // 0x55
		::System::Boolean lockPinch; // 0x56
		::System::Int32 finger1; // 0x58
		::UnityEngine::Vector2 oldStartPosition; // 0x5C
		::UnityEngine::Vector2 position; // 0x64
		::System::Single lastTwistAngle; // 0x6C
		::System::Int32 finger0; // 0x70
		::System::Single startDistance; // 0x74
		::System::Single lastPinch; // 0x78
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x7C
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x80
		::System::Single timeSinceStartAction; // 0x84

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
