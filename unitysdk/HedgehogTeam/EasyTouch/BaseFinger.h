#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TouchType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_COPYGESTURE_OFFSET UNITYSDK_OFFSET(0x12C260A0)
#define HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_GETGESTURE_OFFSET UNITYSDK_OFFSET(0x12C25FD0)
#define HEDGEHOGTEAM_EASYTOUCH_BASEFINGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C26150)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int BaseFinger_TypeDefinitionIndex = 37020;

	class BaseFinger : public ::System::Object
	{
	public:
		::UnityEngine::Camera* pickedCamera; // 0x10
		::UnityEngine::GameObject* pickedUIElement; // 0x18
		::UnityEngine::GameObject* pickedObject; // 0x20
		::System::Single actionTime; // 0x28
		::System::Single azimuthAngle; // 0x2C
		::System::Single radiusVariance; // 0x30
		::UnityEngine::Vector2 deltaPosition; // 0x34
		::System::Single maximumPossiblePressure; // 0x3C
		::System::Single deltaTime; // 0x40
		::System::Single pressure; // 0x44
		::System::Int32 touchCount; // 0x48
		::UnityEngine::TouchType touchType; // 0x4C
		::System::Single radius; // 0x50
		::UnityEngine::Vector2 position; // 0x54
		::System::Int32 fingerIndex; // 0x5C
		::System::Single altitudeAngle; // 0x60
		::System::Boolean isOverGui; // 0x64
		::System::Boolean isGuiCamera; // 0x65
		::UnityEngine::Vector2 startPosition; // 0x68
		::UnityEngine::Vector2 deltaInch; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_BASEFINGER__CTOR_OFFSET))(this);
		}

		::HedgehogTeam::EasyTouch::Gesture* GetGesture()
		{
			return ((::HedgehogTeam::EasyTouch::Gesture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_GETGESTURE_OFFSET))(this);
		}

		::System::Void CopyGesture(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_COPYGESTURE_OFFSET))(this, gesture);
		}
	};
}
