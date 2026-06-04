#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196C1000)
#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196C1480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGroupRow_TypeDefinitionIndex = 12565;

	class DrinkMakerCheersGroupRow : public ::System::Object
	{
	public:
		::System::String* HeadbookHeadIcon; // 0x10
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x18
		::System::String* AvatarRequestHeadIcon; // 0x20
		::System::UInt32 NextGroupID; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::System::UInt32 TutorialGuideGroupID; // 0x30
		::System::UInt32 HidingDrinkID; // 0x34
		::RPG::Client::TextID GroupName; // 0x38
		::System::UInt32 PrimaryDrinkID; // 0x48
		::RPG::Client::TextID RoleRequirement; // 0x50
		::RPG::Client::TextID AvatarName; // 0x60

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
