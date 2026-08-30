#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD174240)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__GETEQUIPSCANDRESSTOROLEBYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0xD178020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass8_0_TypeDefinitionIndex = 65029;

	class GridFightEquipInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsCanDressToRoleByItemID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS8_0__GETEQUIPSCANDRESSTOROLEBYITEMID_B__0_OFFSET))(this, a1);
		}
	};
}
