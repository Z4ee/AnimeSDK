#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftCombination; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_1_OFFSET UNITYSDK_OFFSET(0x97FEB90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x97FE9B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFT_OFFSET UNITYSDK_OFFSET(0x97FE7B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__FINDCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x97FF240)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONSHELPER_OFFSET UNITYSDK_OFFSET(0x97FFF40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x97FFE70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils_TypeDefinitionIndex = 52740;

	class GridFightEquipCraftUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsRecipeCanCraft(::RPG::Client::GridFightEquipCraftRecipe* recipe, ::RPG::Client::GridFightEquipInfo* equipInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFT_OFFSET))(recipe, equipInfo);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations(::RPG::Client::GridFightEquipCraftRecipeCollection* collection, ::RPG::Client::GridFightEquipInfo* equipInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipeCollection*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_OFFSET))(collection, equipInfo);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations_1(::RPG::Client::GridFightEquipCraftRecipe* recipe, ::RPG::Client::GridFightEquipInfo* equipInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_1_OFFSET))(recipe, equipInfo);
		}

		static ::System::Void _FindCombinations(::RPG::Client::GridFightEquipCraftRecipe* recipe, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* availableItemsCache, ::System::Int32 currentItemIndex, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* currentCombination, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* result)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__FINDCOMBINATIONS_OFFSET))(recipe, availableItemsCache, currentItemIndex, currentCombination, result);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* _GenerateCombinations(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* items, ::System::UInt32 count)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONS_OFFSET))(items, count);
		}

		static ::System::Void _GenerateCombinationsHelper(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* items, ::System::UInt32 count, ::System::Int32 startIndex, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* current, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* result)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONSHELPER_OFFSET))(items, count, startIndex, current, result);
		}
	};
}
