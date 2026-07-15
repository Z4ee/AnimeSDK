#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_ADDRECIPE_OFFSET UNITYSDK_OFFSET(0x1A681F90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_CANCRAFT_OFFSET UNITYSDK_OFFSET(0x1A683100)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_RECIPES_OFFSET UNITYSDK_OFFSET(0x1A683290)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0x1A683270)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_RECIPES_OFFSET UNITYSDK_OFFSET(0x1A6832A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0x1A683280)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A681F50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipeCollection_TypeDefinitionIndex = 61592;

	class GridFightEquipCraftRecipeCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* _Recipes_k__BackingField; // 0x10
		::System::UInt32 _TargetEquipItemID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddRecipe(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_ADDRECIPE_OFFSET))(this, a1);
		}

		::System::Boolean CanCraft(::RPG::Client::GridFightEquipInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_CANCRAFT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetEquipItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_TARGETEQUIPITEMID_OFFSET))(this);
		}

		::System::Void set_TargetEquipItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_TARGETEQUIPITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* get_Recipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_RECIPES_OFFSET))(this);
		}

		::System::Void set_Recipes(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_RECIPES_OFFSET))(this, a1);
		}
	};
}
