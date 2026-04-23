#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A2A50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS43_0__ISROLEUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xA4A6290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass43_0_TypeDefinitionIndex = 59519;

	class GridFightFormationTeam___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleUnlock_b__0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS43_0__ISROLEUNLOCK_B__0_OFFSET))(this, x);
		}
	};
}
