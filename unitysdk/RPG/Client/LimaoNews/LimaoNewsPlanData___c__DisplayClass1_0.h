#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD3CD080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA___C__DISPLAYCLASS1_0__GETPLANPHASEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD3CD150)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanData___c__DisplayClass1_0_TypeDefinitionIndex = 80303;

	class LimaoNewsPlanData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 planPhaseID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPlanPhaseData_b__0(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA___C__DISPLAYCLASS1_0__GETPLANPHASEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
