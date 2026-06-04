#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB43F40)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS54_0__GETEQUIPSBYID_B__0_OFFSET UNITYSDK_OFFSET(0xBB472E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass54_0_TypeDefinitionIndex = 60457;

	class GridFightFormationTeam___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsByID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS54_0__GETEQUIPSBYID_B__0_OFFSET))(this, a1);
		}
	};
}
