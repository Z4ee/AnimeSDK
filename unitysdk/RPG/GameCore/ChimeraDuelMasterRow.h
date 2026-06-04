#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196409E0)
#define RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19641920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterRow_TypeDefinitionIndex = 10678;

	class ChimeraDuelMasterRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::String* DrawEmojiPath; // 0x18
		::System::String* MasterAudio; // 0x20
		::System::String* MasterHeadIconPath; // 0x28
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x30
		::System::String* BattleVSBodyType; // 0x38
		::System::String* VictoryEmojiPath; // 0x40
		::System::String* LossEmojiPath; // 0x48
		::System::String* FriendChallengeMasterIcon; // 0x50
		::System::UInt32 TalkSentenceID; // 0x58
		::System::UInt32 MasterID; // 0x5C
		::RPG::Client::TextID ChimeraSkillDescription; // 0x60
		::RPG::Client::TextID VictoryText; // 0x70
		::System::UInt32 SignatureChimeraID; // 0x80
		::System::UInt32 Difficulty; // 0x84
		::System::UInt32 BattleAvatarFloorConfigID; // 0x88
		::System::UInt32 FloorGroupID; // 0x8C
		::RPG::Client::TextID MasterSkillDescription; // 0x90
		::System::UInt32 BattleOpponentAvatarFloorConfigID; // 0xA0
		::System::UInt32 AvatarID; // 0xA4
		::RPG::Client::TextID RecommendationTitle; // 0xA8
		::RPG::Client::TextID DrawText; // 0xB8
		::System::UInt32 MasterSelectAvatarFloorConfigID; // 0xC8
		::RPG::Client::TextID LossText; // 0xD0
		::System::UInt32 UnlockRequiredGameID; // 0xE0
		::System::UInt32 MasterDisplayOrder; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMasterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
