#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGFEVERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF13AC00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFeverMode_TypeDefinitionIndex = 47836;

	class ConfigFeverMode : public ::System::Object
	{
	public:
		::System::Single DownLevelLockTime; // 0x10
		::System::Single FeverRatioWhenReduce; // 0x14
		::System::Single FeverReduceCDTime; // 0x18
		::System::Single FeverReduceNumPerSecond; // 0x1C
		::System::Single FeverValueAfterExitFeverMode; // 0x20
		::System::Single FeverRatioWhenAdd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFEVERMODE__CTOR_OFFSET))(this);
		}
	};
}
