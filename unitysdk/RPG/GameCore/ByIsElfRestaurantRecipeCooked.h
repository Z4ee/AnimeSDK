#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_4A618C00DAF7D062_OFFSET UNITYSDK_OFFSET(0x18751940)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_METHOD_4_8CA52B3C7F57DB80_OFFSET UNITYSDK_OFFSET(0x18751A10)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED__CTOR_OFFSET UNITYSDK_OFFSET(0x187519C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantRecipeCooked_TypeDefinitionIndex = 23383;

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
	};
}
