#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_4E07BC9D2F0A75AA_OFFSET UNITYSDK_OFFSET(0x1A8DF7D0)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_67B73CFC2ED86E4D_OFFSET UNITYSDK_OFFSET(0x1A8DF800)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_8CA52B3C7F57DB80_OFFSET UNITYSDK_OFFSET(0x1A8DF660)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_F15C744215EA6391_OFFSET UNITYSDK_OFFSET(0x1A8DF620)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DF650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantRecipeCooked_TypeDefinitionIndex = 23508;

	class ByIsElfRestaurantRecipeCooked : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 RecipeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F15C744215EA6391(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_F15C744215EA6391_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CA52B3C7F57DB80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_8CA52B3C7F57DB80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E07BC9D2F0A75AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_4E07BC9D2F0A75AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67B73CFC2ED86E4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_67B73CFC2ED86E4D_OFFSET))(a1, a2);
		}
	};
}
