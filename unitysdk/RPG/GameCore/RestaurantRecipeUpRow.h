#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB54A0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB5B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeUpRow_TypeDefinitionIndex = 10839;

	class RestaurantRecipeUpRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* UpgradeMaterials; // 0x10
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 Price; // 0x20
		::System::UInt32 CookTime; // 0x24
		::System::UInt32 RecipeID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantRecipeUpRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantRecipeUpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
