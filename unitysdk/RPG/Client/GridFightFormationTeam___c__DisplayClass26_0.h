#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB43040)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS26_0__GETROLESBYID_B__0_OFFSET UNITYSDK_OFFSET(0xBB47050)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass26_0_TypeDefinitionIndex = 60451;

	class GridFightFormationTeam___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByID_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS26_0__GETROLESBYID_B__0_OFFSET))(this, a1);
		}
	};
}
