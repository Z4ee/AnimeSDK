#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98B71F0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS10_0__GETPROJBYID_B__0_OFFSET UNITYSDK_OFFSET(0x98C01C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass10_0_TypeDefinitionIndex = 52918;

	class GridFightTeam___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 projID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetProjByID_b__0(::RPG::Client::GridFightProjection* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS10_0__GETPROJBYID_B__0_OFFSET))(this, x);
		}
	};
}
