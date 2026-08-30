#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemData; }

#define RPG_CLIENT_COMPOSEITEMDATA_COMPOSEITEMDATACOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC64120)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemData_ComposeItemDataCount_TypeDefinitionIndex = 65821;

	class ComposeItemData_ComposeItemDataCount : public ::System::Object
	{
	public:
		::RPG::Client::ComposeItemData* ComposeItemData; // 0x10
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_COMPOSEITEMDATACOUNT__CTOR_OFFSET))(this);
		}
	};
}
