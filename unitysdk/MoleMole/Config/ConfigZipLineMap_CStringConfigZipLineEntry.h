#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4680A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineMap_CStringConfigZipLineEntry_TypeDefinitionIndex = 55232;

	class ConfigZipLineMap_CStringConfigZipLineEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::MoleMole::Config::ConfigZipLine*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEENTRY__CTOR_OFFSET))(this);
		}
	};
}
