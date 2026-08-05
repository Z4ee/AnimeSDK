#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_Switch; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONMODE_FIXEDTARGETPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B562820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionMode_FixedTargetPoint_TypeDefinitionIndex = 52995;

	class ConfigZipLine_TransitionMode_FixedTargetPoint : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_Switch* configSpeedModifier_Switch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONMODE_FIXEDTARGETPOINT__CTOR_OFFSET))(this);
		}
	};
}
