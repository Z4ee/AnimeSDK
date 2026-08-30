#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SHAKEMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xE07BC50)
#define RPG_CLIENT_SHAKEMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE07BCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShakeModuleConfig_TypeDefinitionIndex = 69650;

	class ShakeModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::UnityEngine::AnimationCurve* AmplitudeAttenuationCurve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAKEMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAKEMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
