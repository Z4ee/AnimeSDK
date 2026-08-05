#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9198F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CIntFloatEntry_TypeDefinitionIndex = 53015;

	class ConfigZipLine_CIntFloatEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::Int32, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATENTRY__CTOR_OFFSET))(this);
		}
	};
}
