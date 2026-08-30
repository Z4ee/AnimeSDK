#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B9BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA___C__DISPLAYCLASS1_0__GETWORKPHASEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C4BA010)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkData___c__DisplayClass1_0_TypeDefinitionIndex = 78982;

	class LimaoNewsWorkData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 workPhaseID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetWorkPhaseData_b__0(::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKDATA___C__DISPLAYCLASS1_0__GETWORKPHASEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
