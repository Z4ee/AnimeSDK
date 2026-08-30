#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD349FE0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS28_0___CALCULATEEMBLEMSCORE_B__1_OFFSET UNITYSDK_OFFSET(0xD34A120)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamCalculator___c__DisplayClass28_0_TypeDefinitionIndex = 64887;

	class GridFightTeamCalculator___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateEmblemScore_b__1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS28_0___CALCULATEEMBLEMSCORE_B__1_OFFSET))(this, a1);
		}
	};
}
