#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0E300)
#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0E890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersConfigRow_TypeDefinitionIndex = 13095;

	class DrinkMakerCheersConfigRow : public ::System::Object
	{
	public:
		::System::String* DrinkIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* CommentList; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList; // 0x20
		::System::String* DrinkIconPrefab; // 0x28
		::RPG::Client::TextID Contraindications; // 0x30
		::RPG::GameCore::DrinkMakerRequestMode Mode; // 0x40
		::RPG::Client::TextID FunctionName; // 0x48
		::RPG::Client::TextID TagName; // 0x58
		::RPG::Client::TextID OriginalName; // 0x68
		::System::UInt32 DrinkNameTextJoinID; // 0x78
		::System::UInt32 ID; // 0x7C
		::RPG::Client::TextID AvatarRequestText; // 0x80

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
