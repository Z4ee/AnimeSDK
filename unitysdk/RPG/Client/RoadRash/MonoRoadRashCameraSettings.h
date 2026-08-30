#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LittleGameRadialBlurEffect; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_038DE84100911ABE_OFFSET UNITYSDK_OFFSET(0xDE79C30)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_1_OFFSET UNITYSDK_OFFSET(0xDE79D90)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_2_OFFSET UNITYSDK_OFFSET(0xDE79E10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_3_OFFSET UNITYSDK_OFFSET(0xDE79E90)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_4_OFFSET UNITYSDK_OFFSET(0xDE79F10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0xDE79BB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xDE79F90)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCameraSettings_TypeDefinitionIndex = 75427;

	class MonoRoadRashCameraSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single BlendFOVDefaultHalfTime; // 0x18
		::System::Single SpeedToMinFOV; // 0x1C
		::System::Single SpeedToMaxFOV; // 0x20
		::System::Single MinSpeedToFOV; // 0x24
		::System::Single MaxSpeedToFOV; // 0x28
		::UnityEngine::AnimationCurve* SpeedToFOVCurve; // 0x30
		::System::Single FOVMin; // 0x38
		::System::Single FOVMax; // 0x3C
		::System::Single DriftDutchAngle; // 0x40
		::System::Single DriftDutchFadeInTime; // 0x44
		::System::Single DriftDutchFadeOutTime; // 0x48
		::UnityEngine::Vector3 UltimateTrackedObjectOffset; // 0x4C
		::System::Single UltimateTrackedObjectOffsetFadeInTime; // 0x58
		::System::Single UltimateTrackedObjectOffsetFadeOutTime; // 0x5C
		::System::Single UltimateRigHeight; // 0x60
		::System::Single UltimateRigRadius; // 0x64
		::System::Single UltimateRigFadeInTime; // 0x68
		::System::Single UltimateRigFadeOutTime; // 0x6C
		::System::Single BlendRigHeightDefaultHalfTime; // 0x70
		::System::Single SpeedToMinRigHeight; // 0x74
		::System::Single SpeedToMaxRigHeight; // 0x78
		::System::Single MinSpeedToRigHeight; // 0x7C
		::System::Single MaxSpeedToRigHeight; // 0x80
		::UnityEngine::AnimationCurve* SpeedToRigHeightCurve; // 0x88
		::System::Single BlendRigRadiusHalfTime; // 0x90
		::System::Single SpeedToMinRigRadius; // 0x94
		::System::Single SpeedToMaxRigRadius; // 0x98
		::System::Single MinSpeedToRigRadius; // 0x9C
		::System::Single MaxSpeedToRigRadius; // 0xA0
		::UnityEngine::AnimationCurve* SpeedToRigRadiusCurve; // 0xA8
		::System::Int32 HitWallShakeIndex; // 0xB0
		::System::Single HitWallShakeCooldown; // 0xB4
		::System::Int32 HitCarNormalShakeIndex; // 0xB8
		::System::Single HitCarNormalShakeCooldown; // 0xBC
		::System::Int32 HitCarSlamShakeIndex; // 0xC0
		::System::Single HitCarSlamShakeCooldown; // 0xC4
		::System::Int32 HitCarUltimateShakeIndex; // 0xC8
		::System::Single HitCarUltimateShakeCooldown; // 0xCC
		::System::Int32 CarLandedShakeIndex; // 0xD0
		::System::Single CarLandedShakeCooldown; // 0xD4
		::RPG::GameCore::LittleGameRadialBlurEffect* DefaultBlur; // 0xD8
		::UnityEngine::AnimationCurve* BlurBlendCurve; // 0xE0
		::System::Single BlurBlendDuration; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* Method_5_0B34AA51B95C62BE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_OFFSET))(this);
		}

		::System::String* Method_5_0B34AA51B95C62BE_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_1_OFFSET))(this);
		}

		::System::String* Method_5_0B34AA51B95C62BE_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_2_OFFSET))(this);
		}

		::System::String* Method_5_0B34AA51B95C62BE_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_3_OFFSET))(this);
		}

		::System::String* Method_5_0B34AA51B95C62BE_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_0B34AA51B95C62BE_4_OFFSET))(this);
		}

		::System::String* Method_5_038DE84100911ABE(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_METHOD_5_038DE84100911ABE_OFFSET))(this, a1);
		}
	};
}
