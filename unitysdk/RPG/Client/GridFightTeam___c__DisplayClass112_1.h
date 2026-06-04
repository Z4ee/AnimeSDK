#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS112_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBC14BC0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS112_1__GETALLTRACKEDUNOWNEDROLES_B__1_OFFSET UNITYSDK_OFFSET(0xBC15B20)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS112_1__GETALLTRACKEDUNOWNEDROLES_B__2_OFFSET UNITYSDK_OFFSET(0xBC15B60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass112_1_TypeDefinitionIndex = 60931;

	class GridFightTeam___c__DisplayClass112_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* gameRefRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS112_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllTrackedUnownedRoles_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS112_1__GETALLTRACKEDUNOWNEDROLES_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllTrackedUnownedRoles_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS112_1__GETALLTRACKEDUNOWNEDROLES_B__2_OFFSET))(this, a1);
		}
	};
}
