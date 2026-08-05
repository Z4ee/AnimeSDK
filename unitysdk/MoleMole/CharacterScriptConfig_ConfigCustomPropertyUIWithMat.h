#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterScriptConfig_ConfigCustomPropertyUI.h"

namespace System { class String; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B538380)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMat_TypeDefinitionIndex = 48406;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMat : public ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI
	{
	public:
		::System::String* MaterialPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMAT__CTOR_OFFSET))(this);
		}
	};
}
