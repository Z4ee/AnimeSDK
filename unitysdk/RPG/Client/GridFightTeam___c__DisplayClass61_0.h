#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98BCEF0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS61_0__GETROLEBYIDANDSTAR_B__0_OFFSET UNITYSDK_OFFSET(0x98C0300)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass61_0_TypeDefinitionIndex = 52920;

	class GridFightTeam___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::UInt32 star; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleByIDAndStar_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS61_0__GETROLEBYIDANDSTAR_B__0_OFFSET))(this, x);
		}
	};
}
