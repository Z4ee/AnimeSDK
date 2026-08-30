#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsWorkRecordData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BEF60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA___C__DISPLAYCLASS1_0__GETWORKRECORDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C4BEFF0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkResultData___c__DisplayClass1_0_TypeDefinitionIndex = 78986;

	class LimaoNewsWorkResultData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 recordID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetWorkRecordData_b__0(::RPG::Client::LimaoNews::LimaoNewsWorkRecordData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA___C__DISPLAYCLASS1_0__GETWORKRECORDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
