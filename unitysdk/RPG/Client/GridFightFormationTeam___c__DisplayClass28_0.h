#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB43250)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS28_0__GETSEASONROLE_B__0_OFFSET UNITYSDK_OFFSET(0xBB47090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass28_0_TypeDefinitionIndex = 60453;

	class GridFightFormationTeam___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSeasonRole_b__0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS28_0__GETSEASONROLE_B__0_OFFSET))(this, a1);
		}
	};
}
