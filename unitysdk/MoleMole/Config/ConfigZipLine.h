#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_SpeedMode.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_TransitionMode.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_TransitionRotationMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigEnterCollisionCheck; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterPointSelection; }
namespace MoleMole::Config { class ConfigZipLine_ConfigExitPointSelection; }
namespace MoleMole::Config { class ConfigZipLine_ConfigFailed; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace MoleMole::Config { class ConfigZipLine_ConfigRecovery; }
namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedLevel; }
namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_Boost; }
namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_MinMax; }
namespace MoleMole::Config { class ConfigZipLine_ConfigTurnBack; }
namespace MoleMole::Config { class ConfigZipLine_SpeedCalculator; }
namespace MoleMole::Config { class ConfigZipLine_SpeedMode_Tangent_Acceleration; }
namespace MoleMole::Config { class ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Acceleration; }
namespace MoleMole::Config { class ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Resistance; }
namespace MoleMole::Config { class ConfigZipLine_TransitionHUD; }
namespace MoleMole::Config { class ConfigZipLine_TransitionMode_FixedTargetPoint; }
namespace MoleMole::Config { class ConfigZipLine_TransitionMode_FloatTargetPoint; }
namespace MoleMole::Config { class ConfigZipLine_TransitionMode_PredicateTargetPoint; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1350A420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TypeDefinitionIndex = 52991;

	class ConfigZipLine : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean SwitchToLocalAvatar; // 0x58
		::System::Single enterSplineTime; // 0x5C
		::System::Single enterSplineTimeOut; // 0x60
		::System::Single exitSplineSpeedRatio; // 0x64
		::System::Single exitSplineMaxTime; // 0x68
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_MinMax* configSpeedModifier_MinMax; // 0x70
		::MoleMole::Config::ConfigZipLine_SpeedMode speedMode; // 0x78
		::MoleMole::Config::ConfigZipLine_SpeedMode_Tangent_Acceleration* speedMode_Tangent_Acceleration; // 0x80
		::MoleMole::Config::ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Acceleration* speedMode_Tangent_FinalSpeed_Acceleration; // 0x88
		::MoleMole::Config::ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Resistance* speedMode_Tangent_FinalSpeed_Resistance; // 0x90
		::MoleMole::Config::ConfigZipLine_SpeedCalculator* speedCalculator; // 0x98
		::MoleMole::Config::ConfigZipLine_TransitionMode transitionMode; // 0xA0
		::MoleMole::Config::ConfigZipLine_TransitionMode_FixedTargetPoint* transitionModeFixedTargetPoint; // 0xA8
		::MoleMole::Config::ConfigZipLine_TransitionMode_FloatTargetPoint* transitionModeFloatTargetPoint; // 0xB0
		::MoleMole::Config::ConfigZipLine_TransitionMode_PredicateTargetPoint* transitionModePredicateTargetPoint; // 0xB8
		::MoleMole::Config::ConfigZipLine_TransitionHUD* transitionHUD; // 0xC0
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_Boost* configSpeedModifier_Boost; // 0xC8
		::MoleMole::Config::ConfigZipLine_ConfigRecovery* configRecovery; // 0xD0
		::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* EnterPointScoreSelection; // 0xD8
		::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* SwitchPointScoreSelection; // 0xE0
		::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* ExitPointScoreSelection; // 0xE8
		::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* EnterPointSelection; // 0xF0
		::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck* EnterCollisionCheck; // 0xF8
		::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* SwitchPointSelection; // 0x100
		::MoleMole::Config::ConfigZipLine_ConfigExitPointSelection* exitPointSelection; // 0x108
		::MoleMole::Config::ConfigZipLine_ConfigSpeedLevel* configSpeedLevel; // 0x110
		::UnityEngine::Vector2 avatarPitchRange; // 0x118
		::UnityEngine::Vector2 avatarPitchRange_Other; // 0x120
		::System::Single avatarRollPredicateTime; // 0x128
		::MoleMole::Config::ConfigZipLine_ConfigFailed* configFailed; // 0x130
		::MoleMole::Config::ConfigZipLine_ConfigTurnBack* configTurnBack; // 0x138
		::MoleMole::Config::ConfigZipLine_TransitionRotationMode transitionRotationMode; // 0x140
		::System::Single sampleStep; // 0x144
		::System::Boolean useFastMode; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE__CTOR_OFFSET))(this);
		}
	};
}
