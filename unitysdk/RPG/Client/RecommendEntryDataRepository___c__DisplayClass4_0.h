#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RecommendEntryData; }

#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDE61820)
#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS4_0__GETBYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0xDE61850)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendEntryDataRepository___c__DisplayClass4_0_TypeDefinitionIndex = 66809;

	class RecommendEntryDataRepository___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetByItemID_b__0(::RPG::Client::RecommendEntryData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RecommendEntryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS4_0__GETBYITEMID_B__0_OFFSET))(this, a1);
		}
	};
}
