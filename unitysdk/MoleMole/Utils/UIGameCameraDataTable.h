#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/NapDictionaryBasedDataTable_1.h"

namespace MoleMole::Utils { class UIGameCameraDataTableEntry; }

#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1345B3F0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int UIGameCameraDataTable_TypeDefinitionIndex = 73252;

	class UIGameCameraDataTable : public ::MoleMole::Utils::NapDictionaryBasedDataTable_1<::MoleMole::Utils::UIGameCameraDataTableEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLE__CTOR_OFFSET))(this);
		}
	};
}
