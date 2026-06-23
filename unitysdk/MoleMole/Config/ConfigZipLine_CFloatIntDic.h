#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MoleMole::Config { class ConfigZipLine_CFloatIntEntry; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC_FINDBYRANGE_OFFSET UNITYSDK_OFFSET(0x144EAFE0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x144EB410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CFloatIntDic_TypeDefinitionIndex = 51230;

	class ConfigZipLine_CFloatIntDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::Single, ::System::Int32, ::MoleMole::Config::ConfigZipLine_CFloatIntEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32> FindByRange(::System::Single key)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC_FINDBYRANGE_OFFSET))(this, key);
		}
	};
}
