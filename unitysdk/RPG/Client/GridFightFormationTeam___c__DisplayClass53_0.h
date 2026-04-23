#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A3350)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS53_0__GETMEMBERBYPOS_B__0_OFFSET UNITYSDK_OFFSET(0xA4A6410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass53_0_TypeDefinitionIndex = 59521;

	class GridFightFormationTeam___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::UInt32 pos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMemberByPos_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS53_0__GETMEMBERBYPOS_B__0_OFFSET))(this, x);
		}
	};
}
