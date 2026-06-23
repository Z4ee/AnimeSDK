#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTDETECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3CF70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlertDetection_TypeDefinitionIndex = 59713;

	class ConfigMonsterAlertDetection : public ::System::Object
	{
	public:
		::System::String* BasedAttachPoint; // 0x10
		::System::Single AngleOffset; // 0x18
		::System::Single Angle; // 0x1C
		::System::Single Heigt; // 0x20
		::System::Single Radius; // 0x24
		::System::Single HeigtOffset; // 0x28
		::System::Single AlertGrowSpeed; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTDETECTION__CTOR_OFFSET))(this);
		}
	};
}
