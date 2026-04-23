#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class GridFightEquipInfo; }
template <typename T1, typename T2> class __f__AnonymousType1_2;

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA47E120)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS5_0__GETRECIPESCANCRAFTBYADDITEM_B__2_OFFSET UNITYSDK_OFFSET(0xA47EB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass5_0_TypeDefinitionIndex = 59373;

	class GridFightEquipCraftMapInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* equipInfo; // 0x10
		::System::UInt32 itemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecipesCanCraftByAddItem_b__2(::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* __h__TransparentIdentifier0)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS5_0__GETRECIPESCANCRAFTBYADDITEM_B__2_OFFSET))(this, __h__TransparentIdentifier0);
		}
	};
}
