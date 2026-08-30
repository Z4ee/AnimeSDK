#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD349F00)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS27_0___CALCULATEROLESCORE_B__0_OFFSET UNITYSDK_OFFSET(0xD34A080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamCalculator___c__DisplayClass27_0_TypeDefinitionIndex = 64886;

	class GridFightTeamCalculator___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateRoleScore_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS27_0___CALCULATEROLESCORE_B__0_OFFSET))(this, a1);
		}
	};
}
