#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD332C90)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS11_0__GETPROJBYID_B__0_OFFSET UNITYSDK_OFFSET(0xD341670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass11_0_TypeDefinitionIndex = 65230;

	class GridFightTeam___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 projID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetProjByID_b__0(::RPG::Client::GridFightProjection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS11_0__GETPROJBYID_B__0_OFFSET))(this, a1);
		}
	};
}
