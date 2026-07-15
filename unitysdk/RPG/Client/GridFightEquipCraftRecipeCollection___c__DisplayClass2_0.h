#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipInfo; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION___C__DISPLAYCLASS2_0__CANCRAFT_B__0_OFFSET UNITYSDK_OFFSET(0x1A6832B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A683260)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipeCollection___c__DisplayClass2_0_TypeDefinitionIndex = 61593;

	class GridFightEquipCraftRecipeCollection___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* equipInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCraft_b__0(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION___C__DISPLAYCLASS2_0__CANCRAFT_B__0_OFFSET))(this, a1);
		}
	};
}
