#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171772C0)
#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17177740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGroupRow_TypeDefinitionIndex = 12044;

	class DrinkMakerCheersGroupRow : public ::System::Object
	{
	public:
		::System::String* AvatarRequestHeadIcon; // 0x10
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x18
		::System::String* HeadbookHeadIcon; // 0x20
		::System::UInt32 PrimaryDrinkID; // 0x28
		::System::UInt32 TutorialGuideGroupID; // 0x2C
		::System::UInt32 HidingDrinkID; // 0x30
		::RPG::Client::TextID GroupName; // 0x38
		::RPG::Client::TextID RoleRequirement; // 0x48
		::RPG::Client::TextID AvatarName; // 0x58
		::System::UInt32 NextGroupID; // 0x68
		::System::UInt32 GroupID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
