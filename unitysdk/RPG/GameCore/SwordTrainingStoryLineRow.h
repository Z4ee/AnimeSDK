#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSTORYLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC8570)
#define RPG_GAMECORE_SWORDTRAININGSTORYLINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC8AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryLineRow_TypeDefinitionIndex = 11786;

	class SwordTrainingStoryLineRow : public ::System::Object
	{
	public:
		::System::String* StoryLineImage; // 0x10
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x18
		::Il2CppArray<::System::UInt32>* EndingStoryIDList; // 0x20
		::System::String* StartTalkImage; // 0x28
		::System::String* EndingOptionKey; // 0x30
		::Il2CppArray<::System::UInt32>* TurnIDList; // 0x38
		::RPG::Client::TextID StoryHardDesc; // 0x40
		::System::UInt32 TalkSentenceID; // 0x50
		::System::UInt32 StartTalkSentenceID; // 0x54
		::System::UInt32 RewardID; // 0x58
		::RPG::Client::TextID StoryLineName; // 0x60
		::RPG::Client::TextID StoryLineDesc; // 0x70
		::System::UInt32 UnlockID; // 0x80
		::System::UInt32 StoryLine; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingStoryLineRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStoryLineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
