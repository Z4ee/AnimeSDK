#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_BOOST__CTOR_OFFSET UNITYSDK_OFFSET(0x12723530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_Boost_TypeDefinitionIndex = 51227;

	class ConfigZipLine_ConfigSpeedModifier_Boost : public ::System::Object
	{
	public:
		::System::Boolean boostWhenSwitch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_BOOST__CTOR_OFFSET))(this);
		}
	};
}
