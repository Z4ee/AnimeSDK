#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterHUDInfo.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace System { class String; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA8740)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_HUDInfoDictEntry_TypeDefinitionIndex = 48413;

	class CharacterScriptConfig_HUDInfoDictEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::MoleMole::CharacterHUDInfo>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICTENTRY__CTOR_OFFSET))(this);
		}
	};
}
