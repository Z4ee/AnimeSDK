#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTurnBasePreviewEffect.h"

#define MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35BE50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnBasePreviewEffect_Line_TypeDefinitionIndex = 48195;

	class ConfigTurnBasePreviewEffect_Line : public ::MoleMole::Config::ConfigTurnBasePreviewEffect
	{
	public:
		::System::Boolean DynamicLength; // 0x18
		::System::Single Length; // 0x1C
		::System::Single Width; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_LINE__CTOR_OFFSET))(this);
		}
	};
}
