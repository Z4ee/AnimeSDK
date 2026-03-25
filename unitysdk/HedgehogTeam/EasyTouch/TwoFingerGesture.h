#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x11A62880)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x11A62B40)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5ACE0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 31359;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::GameObject* oldPickedObject; // 0x18
		::UnityEngine::Camera* pickedCamera; // 0x20
		::UnityEngine::GameObject* pickedObject; // 0x28
		::System::Single timeSinceStartAction; // 0x30
		::System::Single startDistance; // 0x34
		::System::Single startTimeAction; // 0x38
		::System::Single oldFingerDistance; // 0x3C
		::System::Single lastTwistAngle; // 0x40
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x44
		::UnityEngine::Vector2 startPosition; // 0x48
		::System::Single fingerDistance; // 0x50
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x54
		::System::Single tapCurentTime; // 0x58
		::UnityEngine::Vector2 deltaPosition; // 0x5C
		::UnityEngine::Vector2 oldStartPosition; // 0x64
		::System::Int32 finger1; // 0x6C
		::System::Single lastPinch; // 0x70
		::System::Int32 finger0; // 0x74
		::System::Boolean inSingleDoubleTaps; // 0x78
		::System::Boolean lockPinch; // 0x79
		::System::Boolean lockTwist; // 0x7A
		::UnityEngine::Vector2 position; // 0x7C
		::System::Boolean dragStart; // 0x84
		::System::Boolean isOverGui; // 0x85
		::System::Boolean swipeStart; // 0x86
		::System::Boolean isGuiCamera; // 0x87

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
