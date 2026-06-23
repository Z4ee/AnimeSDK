#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_CFloatIntDic; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x158B9980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedLevel_TypeDefinitionIndex = 51231;

	class ConfigZipLine_ConfigSpeedLevel : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigZipLine_CFloatIntDic* speed2SpeedLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDLEVEL__CTOR_OFFSET))(this);
		}
	};
}
