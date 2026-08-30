#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleCollegeAimData; }

#define RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F13C0)
#define RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS3_0__GETAIMDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC8F1BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeData___c__DisplayClass3_0_TypeDefinitionIndex = 62944;

	class BattleCollegeData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 aimID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAimData_b__0(::RPG::Client::BattleCollegeAimData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS3_0__GETAIMDATA_B__0_OFFSET))(this, a1);
		}
	};
}
