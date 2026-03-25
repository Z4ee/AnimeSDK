#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERINGREDIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1717C670)
#define RPG_GAMECORE_DRINKMAKERINGREDIENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1717CB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerIngredientRow_TypeDefinitionIndex = 12015;

	class DrinkMakerIngredientRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* EffParam; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* UnlockParam; // 0x28
		::Il2CppArray<::System::UInt32>* Color; // 0x30
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x38
		::Il2CppArray<::System::Single>* PhyParam; // 0x40
		::RPG::Client::TextID IngredientDesc; // 0x48
		::RPG::GameCore::DrinkMakerUnlockType UnlockType; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::Boolean IsMission; // 0x60
		::RPG::Client::TextID IngredientName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERINGREDIENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerIngredientRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerIngredientRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERINGREDIENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
