#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace MoleMole::Config { class ConfigZipLineMap_CStringConfigZipLineEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35D5A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineMap_CStringConfigZipLineDic_TypeDefinitionIndex = 78720;

	class ConfigZipLineMap_CStringConfigZipLineDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::MoleMole::Config::ConfigZipLine*, ::MoleMole::Config::ConfigZipLineMap_CStringConfigZipLineEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEDIC__CTOR_OFFSET))(this);
		}
	};
}
