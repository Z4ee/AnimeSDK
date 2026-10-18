#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5A42F0)
#define RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterRow_TypeDefinitionIndex = 11119;

	class ChimeraDuelMasterRow : public ::System::Object
	{
	public:
		::System::String* BattleVSBodyType; // 0x10
		::System::String* LossEmojiPath; // 0x18
		::System::String* DrawEmojiPath; // 0x20
		::System::String* FriendChallengeMasterIcon; // 0x28
		::System::String* MasterAudio; // 0x30
		::System::String* FigurePath; // 0x38
		::System::String* MasterHeadIconPath; // 0x40
		::System::String* VictoryEmojiPath; // 0x48
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x50
		::RPG::Client::TextID DrawText; // 0x58
		::RPG::Client::TextID LossText; // 0x68
		::System::UInt32 Difficulty; // 0x78
		::System::UInt32 MasterSelectAvatarFloorConfigID; // 0x7C
		::System::UInt32 BattleOpponentAvatarFloorConfigID; // 0x80
		::System::UInt32 FloorGroupID; // 0x84
		::System::UInt32 MasterDisplayOrder; // 0x88
		::System::UInt32 AvatarID; // 0x8C
		::System::UInt32 BattleAvatarFloorConfigID; // 0x90
		::RPG::Client::TextID MasterSkillDescription; // 0x98
		::System::UInt32 MasterID; // 0xA8
		::System::UInt32 UnlockRequiredGameID; // 0xAC
		::RPG::Client::TextID VictoryText; // 0xB0
		::RPG::Client::TextID RecommendationTitle; // 0xC0
		::RPG::Client::TextID ChimeraSkillDescription; // 0xD0
		::System::UInt32 SignatureChimeraID; // 0xE0
		::System::UInt32 TalkSentenceID; // 0xE4

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
