#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9198D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CFloatIntEntry_TypeDefinitionIndex = 53018;

	class ConfigZipLine_CFloatIntEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::Single, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTENTRY__CTOR_OFFSET))(this);
		}
	};
}
