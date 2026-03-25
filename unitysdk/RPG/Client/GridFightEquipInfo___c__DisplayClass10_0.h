#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CONTAINSEQUIPID_B__0_OFFSET UNITYSDK_OFFSET(0x98040D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CONTAINSEQUIPID_B__1_OFFSET UNITYSDK_OFFSET(0x9804100)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9800DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass10_0_TypeDefinitionIndex = 52751;

	class GridFightEquipInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsEquipID_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CONTAINSEQUIPID_B__0_OFFSET))(this, x);
		}

		::System::Boolean _ContainsEquipID_b__1(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS10_0__CONTAINSEQUIPID_B__1_OFFSET))(this, x);
		}
	};
}
