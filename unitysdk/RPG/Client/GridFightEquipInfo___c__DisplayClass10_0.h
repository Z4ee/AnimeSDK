#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97D1A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__GETEQUIPSCOUNTBYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0x1C981160)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__GETEQUIPSCOUNTBYITEMID_B__1_OFFSET UNITYSDK_OFFSET(0x1C981190)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass10_0_TypeDefinitionIndex = 65023;

	class GridFightEquipInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsCountByItemID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__GETEQUIPSCOUNTBYITEMID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEquipsCountByItemID_b__1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__GETEQUIPSCOUNTBYITEMID_B__1_OFFSET))(this, a1);
		}
	};
}
