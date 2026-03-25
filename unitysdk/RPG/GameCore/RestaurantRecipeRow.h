#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A8600)
#define RPG_GAMECORE_RESTAURANTRECIPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeRow_TypeDefinitionIndex = 10584;

	class RestaurantRecipeRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::System::String* Model; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::Il2CppArray<::System::UInt32>* TAGList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Materials; // 0x30
		::RPG::Client::TextID Detail; // 0x38
		::System::UInt32 RecipeID; // 0x48
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantRecipeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantRecipeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
