#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGFAILED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B919910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigFailed_TypeDefinitionIndex = 53004;

	class ConfigZipLine_ConfigFailed : public ::System::Object
	{
	public:
		::System::Single HitFailedWaitTime; // 0x10
		::System::Single FallFailedWaitTime; // 0x14
		::System::Boolean EnableHitFailHitFly; // 0x18
		::System::Single HitFailHitFlyAngle; // 0x1C
		::System::Single HitFailHitFlySpeedRatio; // 0x20
		::System::Single HitFailHitFlyRotateSpeed; // 0x24
		::System::Boolean EnableFallFailFreeFall; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGFAILED__CTOR_OFFSET))(this);
		}
	};
}
