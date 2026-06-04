#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB19210)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS3_0__REMOVEEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0xBB1ABA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c__DisplayClass3_0_TypeDefinitionIndex = 60729;

	class GridFightEquipComponent___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEquip_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS3_0__REMOVEEQUIP_B__0_OFFSET))(this, a1);
		}
	};
}
