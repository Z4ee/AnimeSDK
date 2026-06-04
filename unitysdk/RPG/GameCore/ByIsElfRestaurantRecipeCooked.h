#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_4A618C00DAF7D062_OFFSET UNITYSDK_OFFSET(0x195611C0)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_898ADF642BBBC8BB_OFFSET UNITYSDK_OFFSET(0x19561480)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_8CA52B3C7F57DB80_OFFSET UNITYSDK_OFFSET(0x19561290)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_AF4AA26D9F12EDD3_OFFSET UNITYSDK_OFFSET(0x19561400)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED__CTOR_OFFSET UNITYSDK_OFFSET(0x19561240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantRecipeCooked_TypeDefinitionIndex = 23041;

	class ByIsElfRestaurantRecipeCooked : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 RecipeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A618C00DAF7D062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_4A618C00DAF7D062_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CA52B3C7F57DB80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_8CA52B3C7F57DB80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF4AA26D9F12EDD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_AF4AA26D9F12EDD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_898ADF642BBBC8BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_898ADF642BBBC8BB_OFFSET))(a1, a2);
		}
	};
}
