#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_Switch; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONMODE_FLOATTARGETPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x162BF940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionMode_FloatTargetPoint_TypeDefinitionIndex = 51244;

	class ConfigZipLine_TransitionMode_FloatTargetPoint : public ::System::Object
	{
	public:
		::System::Single switchSpeed; // 0x10
		::System::Single maxTime; // 0x14
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_Switch* configSpeedModifier_Switch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONMODE_FLOATTARGETPOINT__CTOR_OFFSET))(this);
		}
	};
}
