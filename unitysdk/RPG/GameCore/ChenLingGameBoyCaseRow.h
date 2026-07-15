#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C387160)
#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C387740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCaseRow_TypeDefinitionIndex = 13574;

	class ChenLingGameBoyCaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RankingsNPCList; // 0x10
		::System::String* GameBoyThemeID; // 0x18
		::System::String* CoverImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* GameBoyChallengeIDList; // 0x28
		::System::String* CheatCodeList; // 0x30
		::RPG::Client::TextID GameBoyNameID; // 0x38
		::System::Single ChallengeTimeLimit; // 0x48
		::System::UInt32 FDGroupID; // 0x4C
		::RPG::Client::TextID SettlementTitleID; // 0x50
		::System::UInt32 FDCheatEntityID; // 0x60
		::System::UInt32 FDHardInstanceID; // 0x64
		::System::UInt32 FDCheatInstanceID; // 0x68
		::System::UInt32 GameBoyCaseID; // 0x6C
		::RPG::Client::TextID CheatSettlementTitleID; // 0x70
		::System::UInt32 FDHardEntityID; // 0x80
		::System::UInt32 CheatQuestID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingGameBoyCaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGameBoyCaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
