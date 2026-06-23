#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_ConfigTurnBack_ERotateType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGTURNBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3D650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigTurnBack_TypeDefinitionIndex = 51224;

	class ConfigZipLine_ConfigTurnBack : public ::System::Object
	{
	public:
		::System::Single TurnBack_SpeedCurveDuration; // 0x10
		::UnityEngine::AnimationCurve* TurnBack_SpeedCurve; // 0x18
		::MoleMole::Config::ConfigZipLine_ConfigTurnBack_ERotateType RotateType; // 0x20
		::UnityEngine::AnimationCurve* RotateRotateCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGTURNBACK__CTOR_OFFSET))(this);
		}
	};
}
