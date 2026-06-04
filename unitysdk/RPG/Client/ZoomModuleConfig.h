#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ZOOMMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xCC51C90)
#define RPG_CLIENT_ZOOMMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC51CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ZoomModuleConfig_TypeDefinitionIndex = 65152;

	class ZoomModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single ZoomVelocity; // 0x18
		::System::Single ZoomInitDistanceRatio; // 0x1C
		::System::Single ZoomMaxDistanceRatio; // 0x20
		::System::Single ZoomMinDistanceRatio; // 0x24
		::System::Single ZoomSmoothTime; // 0x28
		::System::Single SmoothVelocityMax; // 0x2C
		::System::Single ZoomRecoveryStartTime; // 0x30
		::System::Single ZoomRecoveryVelocityAdditiveRatio; // 0x34
		::System::Single ZoomInitDistanceOnFreelook3rdModuleInit; // 0x38
		::System::Single ZoomRecoveryStartTimeDuringReset; // 0x3C
		::System::Single ZoomRecoveryVelocityAdditiveRatioDuringReset; // 0x40
		::System::Single ZoomRecoveryVelocityAdditiveRatioLerpDuration; // 0x44
		::System::Single AimOffsetLerpStep; // 0x48
		::System::Single AimOffsetLerpRatio; // 0x4C
		::UnityEngine::AnimationCurve* ZoomVelocityScaleByZoomRatioCurve; // 0x50
		::UnityEngine::AnimationCurve* FovScaleByZoomRatioCurve; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZOOMMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZOOMMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
