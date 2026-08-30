#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3ADEB0)
#define RPG_GAMECORE_RESTAURANTRECIPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AE690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeRow_TypeDefinitionIndex = 11316;

	class RestaurantRecipeRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Materials; // 0x10
		::Il2CppArray<::System::UInt32>* TAGList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::System::String* Model; // 0x28
		::System::String* IMGPath; // 0x30
		::System::UInt32 RecipeID; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Detail; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantRecipeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantRecipeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
