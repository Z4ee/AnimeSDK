#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS175_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9830E40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS175_0__ISROLEMAIN_B__0_OFFSET UNITYSDK_OFFSET(0x98338D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass175_0_TypeDefinitionIndex = 52552;

	class GridFightGameRefData___c__DisplayClass175_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS175_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleMain_b__0(::System::UInt32 ID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS175_0__ISROLEMAIN_B__0_OFFSET))(this, ID);
		}
	};
}
