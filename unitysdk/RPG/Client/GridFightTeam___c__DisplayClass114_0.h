#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CC910)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_0__GETALLTRACKEDUNOWNEDROLES_B__0_OFFSET UNITYSDK_OFFSET(0x1C5CE320)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass114_0_TypeDefinitionIndex = 65228;

	class GridFightTeam___c__DisplayClass114_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* traitRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllTrackedUnownedRoles_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS114_0__GETALLTRACKEDUNOWNEDROLES_B__0_OFFSET))(this, a1);
		}
	};
}
