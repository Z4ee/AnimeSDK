#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS178_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF27B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS178_0__ISROLEMAIN_B__0_OFFSET UNITYSDK_OFFSET(0x1ABF5040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass178_0_TypeDefinitionIndex = 61813;

	class GridFightGameRefData___c__DisplayClass178_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS178_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleMain_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS178_0__ISROLEMAIN_B__0_OFFSET))(this, a1);
		}
	};
}
