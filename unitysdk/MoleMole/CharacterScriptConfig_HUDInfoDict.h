#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterHUDInfo.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class CharacterScriptConfig_HUDInfoDictEntry; }
namespace System { class String; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICT__CTOR_OFFSET UNITYSDK_OFFSET(0x150E2FC0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_HUDInfoDict_TypeDefinitionIndex = 48414;

	class CharacterScriptConfig_HUDInfoDict : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::MoleMole::CharacterHUDInfo, ::MoleMole::CharacterScriptConfig_HUDInfoDictEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICT__CTOR_OFFSET))(this);
		}
	};
}
