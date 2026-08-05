#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FB850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_Switch_TypeDefinitionIndex = 53008;

	class ConfigZipLine_ConfigSpeedModifier_Switch : public ::System::Object
	{
	public:
		::System::Single speedRatio_switchStart; // 0x10
		::System::Single speedRatio_HalfLife; // 0x14
		::System::Single speedRatio_switchEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_SWITCH__CTOR_OFFSET))(this);
		}
	};
}
