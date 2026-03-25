#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98B7040)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS8_0__GETROLESBYID_B__0_OFFSET UNITYSDK_OFFSET(0x98C0390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass8_0_TypeDefinitionIndex = 52923;

	class GridFightTeam___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByID_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS8_0__GETROLESBYID_B__0_OFFSET))(this, x);
		}
	};
}
