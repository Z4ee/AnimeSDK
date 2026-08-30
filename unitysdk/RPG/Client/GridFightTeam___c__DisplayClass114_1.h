#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CC920)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_1__GETALLTRACKEDUNOWNEDROLES_B__1_OFFSET UNITYSDK_OFFSET(0x1C5CE3C0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_1__GETALLTRACKEDUNOWNEDROLES_B__2_OFFSET UNITYSDK_OFFSET(0x1C5CE460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass114_1_TypeDefinitionIndex = 65229;

	class GridFightTeam___c__DisplayClass114_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* gameRefRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllTrackedUnownedRoles_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_1__GETALLTRACKEDUNOWNEDROLES_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllTrackedUnownedRoles_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_1__GETALLTRACKEDUNOWNEDROLES_B__2_OFFSET))(this, a1);
		}
	};
}
