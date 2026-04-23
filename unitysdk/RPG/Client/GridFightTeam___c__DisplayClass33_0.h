#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA59B800)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS33_0__GETMEMBERSBYTRAITID_B__1_OFFSET UNITYSDK_OFFSET(0xA5A4BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass33_0_TypeDefinitionIndex = 59998;

	class GridFightTeam___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersByTraitID_b__1(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS33_0__GETMEMBERSBYTRAITID_B__1_OFFSET))(this, x);
		}
	};
}
