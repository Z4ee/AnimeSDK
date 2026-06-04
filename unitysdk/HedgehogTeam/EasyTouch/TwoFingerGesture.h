#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x146E95A0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x146E9880)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x146E2360)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 37379;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::GameObject* oldPickedObject; // 0x18
		::UnityEngine::Camera* pickedCamera; // 0x20
		::UnityEngine::GameObject* pickedObject; // 0x28
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x30
		::System::Int32 finger0; // 0x34
		::System::Single tapCurentTime; // 0x38
		::UnityEngine::Vector2 oldStartPosition; // 0x3C
		::System::Int32 finger1; // 0x44
		::System::Boolean inSingleDoubleTaps; // 0x48
		::System::Boolean isGuiCamera; // 0x49
		::System::Boolean lockPinch; // 0x4A
		::System::Single fingerDistance; // 0x4C
		::UnityEngine::Vector2 startPosition; // 0x50
		::System::Single timeSinceStartAction; // 0x58
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x5C
		::System::Single lastPinch; // 0x60
		::System::Single oldFingerDistance; // 0x64
		::System::Single lastTwistAngle; // 0x68
		::UnityEngine::Vector2 deltaPosition; // 0x6C
		::System::Single startTimeAction; // 0x74
		::UnityEngine::Vector2 position; // 0x78
		::System::Single startDistance; // 0x80
		::System::Boolean isOverGui; // 0x84
		::System::Boolean dragStart; // 0x85
		::System::Boolean swipeStart; // 0x86
		::System::Boolean lockTwist; // 0x87

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
