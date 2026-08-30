#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RecommendEntryData; }

#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDE143B0)
#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS3_0__GETBYID_B__0_OFFSET UNITYSDK_OFFSET(0xDE143C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendEntryDataRepository___c__DisplayClass3_0_TypeDefinitionIndex = 66807;

	class RecommendEntryDataRepository___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetByID_b__0(::RPG::Client::RecommendEntryData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RecommendEntryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY___C__DISPLAYCLASS3_0__GETBYID_B__0_OFFSET))(this, a1);
		}
	};
}
