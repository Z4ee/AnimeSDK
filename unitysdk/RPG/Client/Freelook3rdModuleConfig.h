#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Freelook3rdRecenterParams; }
namespace RPG::Client { class Freelook3rdRigParams; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_FREELOOK3RDMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xBA69BE0)
#define RPG_CLIENT_FREELOOK3RDMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBA69C30)

namespace RPG::Client
{
	inline static constexpr unsigned int Freelook3rdModuleConfig_TypeDefinitionIndex = 65143;

	class Freelook3rdModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single InitFOV; // 0x18
		::System::Single InitAxisY; // 0x1C
		::UnityEngine::Vector2 CenterPos; // 0x20
		::RPG::Client::Freelook3rdRigParams* TopRigParams; // 0x28
		::RPG::Client::Freelook3rdRigParams* MiddleRigParams; // 0x30
		::RPG::Client::Freelook3rdRigParams* BottomRigParams; // 0x38
		::UnityEngine::Vector3 RigFollowDamping; // 0x40
		::UnityEngine::Vector2 RigAimDamping; // 0x4C
		::System::Boolean EnableRecenterY; // 0x54
		::RPG::Client::Freelook3rdRecenterParams* RecenterY; // 0x58
		::System::Boolean OpenAimOffsetByZoomRatio; // 0x60
		::UnityEngine::AnimationCurve* CameraRootTransitionCurve; // 0x68
		::System::Single StartDitherElevation; // 0x70
		::System::Single EndDitherElevation; // 0x74
		::System::Boolean DialogModeUseSingleVCam; // 0x78
		::System::Single DialogModeBlendTime; // 0x7C
		::UnityEngine::AnimationCurve* DialogModeBlendCurve; // 0x80
		::System::Single DialogModeRecoveryBlendTime; // 0x88
		::UnityEngine::AnimationCurve* DialogModeRecoveryBlendCurve; // 0x90
		::System::Single DialogModeStartDitherElevation; // 0x98
		::System::Single DialogModeEndDitherElevation; // 0x9C
		::System::Single DialogModeInitZoomDis; // 0xA0
		::System::Single DialogModeAxisXAdditiveValue; // 0xA4
		::System::Single DialogModeChangeTime; // 0xA8
		::System::String* DialogModeChangeCurvePath; // 0xB0
		::System::Single DialogModeRecoveryTime; // 0xB8
		::System::String* DialogModeRecoveryCurvePath; // 0xC0
		::System::Boolean EnableFollowAndLookAtSmoothOnMove; // 0xC8
		::System::Single FollowAndLookAtSmoothYRatio; // 0xCC
		::System::Boolean EnableSlopeRecenter; // 0xD0
		::System::Single SlopeAngleMin; // 0xD4
		::System::Single SlopeRecenterTime; // 0xD8
		::System::Single SlopeRecenterLerpRatio; // 0xDC
		::System::Single SlopeRecenterAdditiveAxisYAngle; // 0xE0
		::UnityEngine::Vector2 MouseInputAccelAndDecelTime; // 0xE4
		::UnityEngine::Vector2 OtherInputAccelAndDecelTime; // 0xEC
		::System::Single DialogCameraAdaptMinAngle; // 0xF4
		::UnityEngine::AnimationCurve* DialogCameraAdaptAxisYValueCurve; // 0xF8
		::UnityEngine::Vector2 AxisYRange; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOK3RDMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOK3RDMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
