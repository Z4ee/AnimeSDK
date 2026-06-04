#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1FA90)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS7_0__GETEQUIPSCANDRESSTOROLEBYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0xBB23600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass7_0_TypeDefinitionIndex = 60752;

	class GridFightEquipInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsCanDressToRoleByItemID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS7_0__GETEQUIPSCANDRESSTOROLEBYITEMID_B__0_OFFSET))(this, a1);
		}
	};
}
