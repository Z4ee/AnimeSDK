#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGFEVERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB04BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFeverMode_TypeDefinitionIndex = 78137;

	class ConfigFeverMode : public ::System::Object
	{
	public:
		::System::Single FeverValueAfterExitFeverMode; // 0x10
		::System::Single FeverReduceNumPerSecond; // 0x14
		::System::Single FeverRatioWhenAdd; // 0x18
		::System::Single DownLevelLockTime; // 0x1C
		::System::Single FeverRatioWhenReduce; // 0x20
		::System::Single FeverReduceCDTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFEVERMODE__CTOR_OFFSET))(this);
		}
	};
}
