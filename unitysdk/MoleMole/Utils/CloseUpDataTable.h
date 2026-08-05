#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/NapDictionaryBasedDataTable_1.h"

namespace MoleMole::Utils { class CloseUpDataTableEntry; }

#define MOLEMOLE_UTILS_CLOSEUPDATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14106620)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int CloseUpDataTable_TypeDefinitionIndex = 83150;

	class CloseUpDataTable : public ::MoleMole::Utils::NapDictionaryBasedDataTable_1<::MoleMole::Utils::CloseUpDataTableEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLE__CTOR_OFFSET))(this);
		}
	};
}
