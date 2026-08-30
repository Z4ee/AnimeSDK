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

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_1_OFFSET UNITYSDK_OFFSET(0xD171B60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0xD171980)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFT_OFFSET UNITYSDK_OFFSET(0xD171760)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__FINDCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0xD172170)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONSHELPER_OFFSET UNITYSDK_OFFSET(0xD172F60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONS_OFFSET UNITYSDK_OFFSET(0xD172E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils_TypeDefinitionIndex = 65010;

	class GridFightEquipCraftUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsRecipeCanCraft(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations(::RPG::Client::GridFightEquipCraftRecipeCollection* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipeCollection*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations_1(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_1_OFFSET))(a1, a2);
		}

		static ::System::Void _FindCombinations(::RPG::Client::GridFightEquipCraftRecipe* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* a4, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* a5)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__FINDCOMBINATIONS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* _GenerateCombinations(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONS_OFFSET))(a1, a2);
		}

		static ::System::Void _GenerateCombinationsHelper(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONSHELPER_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
