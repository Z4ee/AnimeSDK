#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANCRAFT_OFFSET UNITYSDK_OFFSET(0x1A681B50)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANUSEDTOCRAFT_OFFSET UNITYSDK_OFFSET(0x1A680440)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A680F80)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_OFFSET UNITYSDK_OFFSET(0x1A6817C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_OFFSET UNITYSDK_OFFSET(0x1A681430)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x1A6810A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A681010)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_COSTEQUIPLUT_OFFSET UNITYSDK_OFFSET(0x1A682040)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_RECIPECOLLECTIONLUT_OFFSET UNITYSDK_OFFSET(0x1A682060)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_COSTEQUIPLUT_OFFSET UNITYSDK_OFFSET(0x1A682050)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_RECIPECOLLECTIONLUT_OFFSET UNITYSDK_OFFSET(0x1A682070)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A680B40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__LOADCRAFTMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x1A680C20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo_TypeDefinitionIndex = 61594;

	class GridFightEquipCraftMapInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>* _CostEquipLUT_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* _RecipeCollectionLUT_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipCraftRecipeCollection* GetTargetEquipCraftRecipeCollection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipeCollection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPECOLLECTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesContainsItem(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraft(::RPG::Client::GridFightEquipInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraftByAddItem(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanCraft(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANCRAFT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanUsedToCraft(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANUSEDTOCRAFT_OFFSET))(this, a1);
		}

		::System::Void _LoadCraftMapConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__LOADCRAFTMAPCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>* get_CostEquipLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_COSTEQUIPLUT_OFFSET))(this);
		}

		::System::Void set_CostEquipLUT(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_COSTEQUIPLUT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* get_RecipeCollectionLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_RECIPECOLLECTIONLUT_OFFSET))(this);
		}

		::System::Void set_RecipeCollectionLUT(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_RECIPECOLLECTIONLUT_OFFSET))(this, a1);
		}
	};
}
