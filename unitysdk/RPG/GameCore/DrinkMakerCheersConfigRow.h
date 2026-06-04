#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196C0370)
#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196C0900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersConfigRow_TypeDefinitionIndex = 12567;

	class DrinkMakerCheersConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CommentList; // 0x10
		::System::String* DrinkIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList; // 0x20
		::System::String* DrinkIconPrefab; // 0x28
		::RPG::Client::TextID OriginalName; // 0x30
		::RPG::Client::TextID FunctionName; // 0x40
		::System::UInt32 DrinkNameTextJoinID; // 0x50
		::RPG::GameCore::DrinkMakerRequestMode Mode; // 0x54
		::RPG::Client::TextID TagName; // 0x58
		::RPG::Client::TextID AvatarRequestText; // 0x68
		::RPG::Client::TextID Contraindications; // 0x78
		::System::UInt32 ID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
