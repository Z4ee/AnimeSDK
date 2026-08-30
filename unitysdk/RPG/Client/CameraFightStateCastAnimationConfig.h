#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CAMERAFIGHTSTATECASTANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC9E83F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateCastAnimationConfig_TypeDefinitionIndex = 69540;

	class CameraFightStateCastAnimationConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::System::Single BlendTime; // 0x20
		::UnityEngine::Vector3 CutPosOffset; // 0x24
		::UnityEngine::Vector3 CutAimOffset; // 0x30
		::System::Single NeedCutPosAngle; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATECASTANIMATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
