#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_ADDRECIPE_OFFSET UNITYSDK_OFFSET(0x97FD480)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_CANCRAFT_OFFSET UNITYSDK_OFFSET(0x97FE590)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_RECIPES_OFFSET UNITYSDK_OFFSET(0x97FE760)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0x97FE740)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_RECIPES_OFFSET UNITYSDK_OFFSET(0x97FE770)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0x97FE750)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x97FD440)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipeCollection_TypeDefinitionIndex = 52410;

	class GridFightEquipCraftRecipeCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* _Recipes_k__BackingField; // 0x10
		::System::UInt32 _TargetEquipItemID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 targetEquipItemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION__CTOR_OFFSET))(this, targetEquipItemID);
		}

		::System::Void AddRecipe(::RPG::Client::GridFightEquipCraftRecipe* recipe)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_ADDRECIPE_OFFSET))(this, recipe);
		}

		::System::Boolean CanCraft(::RPG::Client::GridFightEquipInfo* equipInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_CANCRAFT_OFFSET))(this, equipInfo);
		}

		::System::UInt32 get_TargetEquipItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_TARGETEQUIPITEMID_OFFSET))(this);
		}

		::System::Void set_TargetEquipItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_TARGETEQUIPITEMID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* get_Recipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_RECIPES_OFFSET))(this);
		}

		::System::Void set_Recipes(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_RECIPES_OFFSET))(this, value);
		}
	};
}
