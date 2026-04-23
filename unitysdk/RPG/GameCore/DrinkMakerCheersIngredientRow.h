#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18884BD0)
#define RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18884FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersIngredientRow_TypeDefinitionIndex = 12481;

	class DrinkMakerCheersIngredientRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* Color; // 0x28
		::Il2CppArray<::System::Single>* EffParam; // 0x30
		::Il2CppArray<::System::Single>* PhyParam; // 0x38
		::RPG::Client::TextID IngredientName; // 0x40
		::System::UInt32 ID; // 0x50
		::RPG::Client::TextID IngredientDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersIngredientRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersIngredientRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
