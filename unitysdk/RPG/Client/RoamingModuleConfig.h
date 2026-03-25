#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ROAMINGMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xA2E4C70)
#define RPG_CLIENT_ROAMINGMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E4CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoamingModuleConfig_TypeDefinitionIndex = 56976;

	class RoamingModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single MoveRaidus; // 0x18
		::System::Single MoveBaseSpeed; // 0x1C
		::System::Single MoveForwardSpeed; // 0x20
		::System::Single RotationXScale; // 0x24
		::System::Single RotationYScale; // 0x28
		::System::Single RotationXScaleInMobile; // 0x2C
		::System::Single RotationYScaleInMobile; // 0x30
		::System::Single CenterPosStep; // 0x34
		::UnityEngine::Vector2 CenterPosRange; // 0x38
		::System::Single RoamingZoomScale; // 0x40
		::System::Single RoamingZoomScaleForPinch; // 0x44
		::System::Single InitFovRatio; // 0x48
		::System::Single MaxFov; // 0x4C
		::System::Single MinFov; // 0x50
		::System::Single CutInBlendTime; // 0x54
		::UnityEngine::AnimationCurve* CutInBlendCurve; // 0x58
		::System::Single CutOutBlendTime; // 0x60
		::UnityEngine::AnimationCurve* CutOutBlendCurve; // 0x68
		::UnityEngine::Vector3 ResetSpericalPosThirdPerson; // 0x70
		::UnityEngine::Vector3 ResetSpericalPosFirstPerson; // 0x7C
		::UnityEngine::Vector2 ResetAxisValueThirdPersonLocked; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROAMINGMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROAMINGMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
