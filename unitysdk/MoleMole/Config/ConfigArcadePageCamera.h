#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"

namespace MoleMole::Config { class ConfigArcadeCameraBlendCurve; }
namespace MoleMole::Config { class ConfigArcadeCameraPoint; }

#define MOLEMOLE_CONFIG_CONFIGARCADEPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x186ABA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigArcadePageCamera_TypeDefinitionIndex = 82909;

	class ConfigArcadePageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* SpinningTableToEntranceBlend; // 0x10
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* ArcadeMachineToPlayGameBlend; // 0x18
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* SpinningTableToPlayGameBlend; // 0x20
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* PlayGameToArcadeMachineBlend; // 0x28
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* ArcadeMachineToSpinningTableBlend; // 0x30
		::MoleMole::Config::ConfigArcadeCameraPoint* SpinningTablePoint; // 0x38
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* PlayGameToSpinningTableBlend; // 0x40
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* SpinningTableToArcadeMachineBlend; // 0x48
		::MoleMole::Config::ConfigArcadeCameraPoint* EntrancePoint; // 0x50
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* EntranceToSpinningTableBlend; // 0x58
		::MoleMole::Config::ConfigArcadeCameraPoint* ArcadeMachinePoint; // 0x60
		::MoleMole::Config::ConfigArcadeCameraPoint* PlayGamePoint; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARCADEPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
