#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterScriptConfig_ConfigCustomPropertyUI.h"

namespace System { class String; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x14845190)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_TypeDefinitionIndex = 48416;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold : public ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI
	{
	public:
		::System::String* MaterialPath; // 0x60
		::System::Single Threshold; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD__CTOR_OFFSET))(this);
		}
	};
}
