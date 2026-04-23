#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A31A0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS52_0__GETMEMBERSBYTRAITID_B__0_OFFSET UNITYSDK_OFFSET(0xA4A6310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass52_0_TypeDefinitionIndex = 59520;

	class GridFightFormationTeam___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersByTraitID_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS52_0__GETMEMBERSBYTRAITID_B__0_OFFSET))(this, x);
		}
	};
}
