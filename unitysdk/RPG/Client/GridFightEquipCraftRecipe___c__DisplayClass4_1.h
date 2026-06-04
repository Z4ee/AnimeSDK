#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe___c__DisplayClass4_0; }
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1__CANCRAFTTOROLE_B__0_OFFSET UNITYSDK_OFFSET(0xBB1D000)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1CED0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe___c__DisplayClass4_1_TypeDefinitionIndex = 60301;

	class GridFightEquipCraftRecipe___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipCraftRecipe___c__DisplayClass4_0* CS___8__locals1; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> kv; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCraftToRole_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1__CANCRAFTTOROLE_B__0_OFFSET))(this, a1);
		}
	};
}
