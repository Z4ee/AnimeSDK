#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D03F140)
#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03F5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGroupRow_TypeDefinitionIndex = 13093;

	class DrinkMakerCheersGroupRow : public ::System::Object
	{
	public:
		::System::String* HeadbookHeadIcon; // 0x10
		::System::String* AvatarRequestHeadIcon; // 0x18
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x20
		::System::UInt32 HidingDrinkID; // 0x28
		::RPG::Client::TextID AvatarName; // 0x30
		::RPG::Client::TextID RoleRequirement; // 0x40
		::System::UInt32 TutorialGuideGroupID; // 0x50
		::System::UInt32 NextGroupID; // 0x54
		::System::UInt32 PrimaryDrinkID; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::RPG::Client::TextID GroupName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
