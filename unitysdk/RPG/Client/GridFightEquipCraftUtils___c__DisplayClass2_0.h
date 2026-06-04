#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1DB40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS2_0__GETALLAVAILABLECRAFTCOMBINATIONS_B__0_OFFSET UNITYSDK_OFFSET(0xBB1EBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils___c__DisplayClass2_0_TypeDefinitionIndex = 60735;

	class GridFightEquipCraftUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllAvailableCraftCombinations_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS2_0__GETALLAVAILABLECRAFTCOMBINATIONS_B__0_OFFSET))(this, a1);
		}
	};
}
