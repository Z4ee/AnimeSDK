#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERAFIGHTSTATELIGHTTEAMDOLLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BA600)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateLightTeamDollyConfig_TypeDefinitionIndex = 65046;

	class CameraFightStateLightTeamDollyConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::UnityEngine::Vector3 DollyOffset; // 0x20
		::System::Single ShrinkRatio; // 0x2C
		::UnityEngine::AnimationCurve* CenterDisWeight; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATELIGHTTEAMDOLLYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
