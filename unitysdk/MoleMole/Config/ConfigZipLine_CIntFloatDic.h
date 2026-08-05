#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MoleMole::Config { class ConfigZipLine_CIntFloatEntry; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC_FINDBYRANGE_OFFSET UNITYSDK_OFFSET(0x1170F570)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1170F930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CIntFloatDic_TypeDefinitionIndex = 53011;

	class ConfigZipLine_CIntFloatDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::Int32, ::System::Single, ::MoleMole::Config::ConfigZipLine_CIntFloatEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> FindByRange(::System::Single key)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC_FINDBYRANGE_OFFSET))(this, key);
		}
	};
}
