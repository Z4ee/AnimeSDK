#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_Switch; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONMODE_PREDICATETARGETPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3D6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionMode_PredicateTargetPoint_TypeDefinitionIndex = 51254;

	class ConfigZipLine_TransitionMode_PredicateTargetPoint : public ::System::Object
	{
	public:
		::System::Single maxTime; // 0x10
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_Switch* configSpeedModifier_Switch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONMODE_PREDICATETARGETPOINT__CTOR_OFFSET))(this);
		}
	};
}
