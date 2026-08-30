#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERINGREDIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0442C0)
#define RPG_GAMECORE_DRINKMAKERINGREDIENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D044780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerIngredientRow_TypeDefinitionIndex = 13064;

	class DrinkMakerIngredientRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Color; // 0x10
		::Il2CppArray<::System::Single>* PhyParam; // 0x18
		::Il2CppArray<::System::Single>* EffParam; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x30
		::System::String* SmallIconPath; // 0x38
		::Il2CppArray<::System::UInt32>* UnlockParam; // 0x40
		::RPG::Client::TextID IngredientDesc; // 0x48
		::System::Boolean IsMission; // 0x58
		::System::UInt32 ID; // 0x5C
		::RPG::Client::TextID IngredientName; // 0x60
		::RPG::GameCore::DrinkMakerUnlockType UnlockType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERINGREDIENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerIngredientRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerIngredientRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERINGREDIENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
