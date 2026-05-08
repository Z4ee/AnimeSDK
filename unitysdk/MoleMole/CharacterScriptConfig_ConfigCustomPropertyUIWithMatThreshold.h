#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterScriptConfig_ConfigCustomPropertyUI.h"

namespace System { class String; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C89870)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_TypeDefinitionIndex = 46574;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold : public ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI
	{
	public:
		::System::String* MaterialPath; // 0x58
		::System::Single Threshold; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD__CTOR_OFFSET))(this);
		}
	};
}
