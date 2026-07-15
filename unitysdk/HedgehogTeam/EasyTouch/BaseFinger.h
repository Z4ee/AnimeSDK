#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TouchType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_COPYGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4DB300)
#define HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_GETGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4DB240)
#define HEDGEHOGTEAM_EASYTOUCH_BASEFINGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DB3A0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int BaseFinger_TypeDefinitionIndex = 38128;

	class BaseFinger : public ::System::Object
	{
	public:
		::UnityEngine::Camera* pickedCamera; // 0x10
		::UnityEngine::GameObject* pickedUIElement; // 0x18
		::UnityEngine::GameObject* pickedObject; // 0x20
		::System::Int32 touchCount; // 0x28
		::UnityEngine::Vector2 deltaPosition; // 0x2C
		::UnityEngine::TouchType touchType; // 0x34
		::System::Single azimuthAngle; // 0x38
		::System::Boolean isOverGui; // 0x3C
		::System::Boolean isGuiCamera; // 0x3D
		::System::Single pressure; // 0x40
		::System::Single maximumPossiblePressure; // 0x44
		::UnityEngine::Vector2 deltaInch; // 0x48
		::System::Single altitudeAngle; // 0x50
		::UnityEngine::Vector2 startPosition; // 0x54
		::UnityEngine::Vector2 position; // 0x5C
		::System::Int32 fingerIndex; // 0x64
		::System::Single deltaTime; // 0x68
		::System::Single actionTime; // 0x6C
		::System::Single radiusVariance; // 0x70
		::System::Single radius; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_BASEFINGER__CTOR_OFFSET))(this);
		}

		::HedgehogTeam::EasyTouch::Gesture* GetGesture()
		{
			return ((::HedgehogTeam::EasyTouch::Gesture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_GETGESTURE_OFFSET))(this);
		}

		::System::Void CopyGesture(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_BASEFINGER_COPYGESTURE_OFFSET))(this, a1);
		}
	};
}
