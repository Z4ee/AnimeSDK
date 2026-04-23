#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleCollegeAimData; }

#define RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFC230)
#define RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS5_0__INDEXOFAIMDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9DFC930)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeData___c__DisplayClass5_0_TypeDefinitionIndex = 57912;

	class BattleCollegeData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 aimID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IndexOfAimData_b__0(::RPG::Client::BattleCollegeAimData* aimData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__DISPLAYCLASS5_0__INDEXOFAIMDATA_B__0_OFFSET))(this, aimData);
		}
	};
}
