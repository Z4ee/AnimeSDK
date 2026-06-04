#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1FAA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS9_0__GETEQUIPSCOUNTBYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0xBB23630)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS9_0__GETEQUIPSCOUNTBYITEMID_B__1_OFFSET UNITYSDK_OFFSET(0xBB236A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass9_0_TypeDefinitionIndex = 60753;

	class GridFightEquipInfo___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsCountByItemID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS9_0__GETEQUIPSCOUNTBYITEMID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEquipsCountByItemID_b__1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS9_0__GETEQUIPSCOUNTBYITEMID_B__1_OFFSET))(this, a1);
		}
	};
}
