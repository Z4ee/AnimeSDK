#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class CameraLookAtScreenRangeConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERALOOKATCONFIGDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C859430)
#define RPG_CLIENT_CAMERALOOKATCONFIGDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C8593F0)
#define RPG_CLIENT_CAMERALOOKATCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C859320)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraLookAtConfigData_TypeDefinitionIndex = 69531;

	class CameraLookAtConfigData : public ::System::Object
	{
	public:
		::System::Boolean Reset; // 0x10
		::System::Single MaxAngle; // 0x14
		::UnityEngine::Transform* LookAtTargetTransform; // 0x18
		::UnityEngine::Vector2 AxisValueOffset; // 0x20
		::System::Single LookAtTransitionDuration; // 0x28
		::RPG::Client::CameraBlendCurve* LookAtTransitionCurve; // 0x30
		::System::Boolean LockCameraInput; // 0x38
		::System::Boolean LockCameraZoom; // 0x39
		::System::Boolean UnlockCameraAfterLookAtOffsetRecover; // 0x3A
		::System::Single LookAtDuration; // 0x3C
		::System::Boolean FollowLookAt; // 0x40
		::System::Boolean KeepInputForwardDirection; // 0x41
		::RPG::GameCore::CameraLookAtScreenRangeConfig* ScreenRange; // 0x48
		::RPG::Client::CameraBlendCurve* ScreenRangeMouseSpeedRatioCurve; // 0x50
		::System::Boolean UseCalcDirectionMode; // 0x58
		::System::Boolean ResetYAxisValue; // 0x59

		::System::Void _ctor(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::String* a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Single a10, ::System::Boolean a11, ::System::Boolean a12, ::RPG::GameCore::CameraLookAtScreenRangeConfig* a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::CameraLookAtScreenRangeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERALOOKATCONFIGDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERALOOKATCONFIGDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERALOOKATCONFIGDATA_DISPOSE_OFFSET))(this);
		}
	};
}
