#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187FE9E0)
#define RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187FF910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterRow_TypeDefinitionIndex = 10622;

	class ChimeraDuelMasterRow : public ::System::Object
	{
	public:
		::System::String* FriendChallengeMasterIcon; // 0x10
		::System::String* MasterAudio; // 0x18
		::System::String* BattleVSBodyType; // 0x20
		::System::String* VictoryEmojiPath; // 0x28
		::System::String* FigurePath; // 0x30
		::System::String* DrawEmojiPath; // 0x38
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x40
		::System::String* MasterHeadIconPath; // 0x48
		::System::String* LossEmojiPath; // 0x50
		::System::UInt32 FloorGroupID; // 0x58
		::System::UInt32 SignatureChimeraID; // 0x5C
		::RPG::Client::TextID DrawText; // 0x60
		::System::UInt32 UnlockRequiredGameID; // 0x70
		::System::UInt32 Difficulty; // 0x74
		::RPG::Client::TextID VictoryText; // 0x78
		::RPG::Client::TextID MasterSkillDescription; // 0x88
		::RPG::Client::TextID LossText; // 0x98
		::RPG::Client::TextID RecommendationTitle; // 0xA8
		::System::UInt32 MasterID; // 0xB8
		::System::UInt32 MasterDisplayOrder; // 0xBC
		::System::UInt32 BattleAvatarFloorConfigID; // 0xC0
		::RPG::Client::TextID ChimeraSkillDescription; // 0xC8
		::System::UInt32 MasterSelectAvatarFloorConfigID; // 0xD8
		::System::UInt32 BattleOpponentAvatarFloorConfigID; // 0xDC
		::System::UInt32 AvatarID; // 0xE0
		::System::UInt32 TalkSentenceID; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelMasterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
