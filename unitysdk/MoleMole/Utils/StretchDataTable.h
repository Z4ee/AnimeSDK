#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/NapDictionaryBasedDataTable_1.h"

namespace MoleMole::Utils { class StretchDataTableEntry; }

#define MOLEMOLE_UTILS_STRETCHDATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xF3AD310)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int StretchDataTable_TypeDefinitionIndex = 49396;

	class StretchDataTable : public ::MoleMole::Utils::NapDictionaryBasedDataTable_1<::MoleMole::Utils::StretchDataTableEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLE__CTOR_OFFSET))(this);
		}
	};
}
