#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS7_0__CANUSEDTOCRAFT_B__0_OFFSET UNITYSDK_OFFSET(0x1C979D40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS7_0__CANUSEDTOCRAFT_B__1_OFFSET UNITYSDK_OFFSET(0x1C979E90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C979100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass7_0_TypeDefinitionIndex = 64584;

	class GridFightEquipCraftMapInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::GridFightEquipCraftRecipe*, ::System::Boolean>* __9__1; // 0x10
		::System::UInt32 itemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanUsedToCraft_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS7_0__CANUSEDTOCRAFT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _CanUsedToCraft_b__1(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS7_0__CANUSEDTOCRAFT_B__1_OFFSET))(this, a1);
		}
	};
}
