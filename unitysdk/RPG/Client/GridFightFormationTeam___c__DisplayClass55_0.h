#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A35E0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS55_0__GETEQUIPBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xA4A6460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass55_0_TypeDefinitionIndex = 59523;

	class GridFightFormationTeam___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipByUID_b__0(::RPG::Client::GridFightEquipItemData* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS55_0__GETEQUIPBYUID_B__0_OFFSET))(this, equip);
		}
	};
}
