#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS6_0__CANCRAFT_B__0_OFFSET UNITYSDK_OFFSET(0xA47EC40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS6_0__CANCRAFT_B__1_OFFSET UNITYSDK_OFFSET(0xA47EDD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA47E2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass6_0_TypeDefinitionIndex = 59374;

	class GridFightEquipCraftMapInfo___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::GridFightEquipCraftRecipe*, ::System::Boolean>* __9__1; // 0x10
		::System::UInt32 itemIDB; // 0x18
		::System::UInt32 itemIDA; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCraft_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> kv)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS6_0__CANCRAFT_B__0_OFFSET))(this, kv);
		}

		::System::Boolean _CanCraft_b__1(::RPG::Client::GridFightEquipCraftRecipe* recipe)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS6_0__CANCRAFT_B__1_OFFSET))(this, recipe);
		}
	};
}
