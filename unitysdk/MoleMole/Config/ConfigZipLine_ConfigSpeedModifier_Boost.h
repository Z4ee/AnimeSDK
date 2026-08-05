#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_BOOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1350AA50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_Boost_TypeDefinitionIndex = 53023;

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
