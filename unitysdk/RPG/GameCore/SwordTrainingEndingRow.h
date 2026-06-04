#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE2790)
#define RPG_GAMECORE_SWORDTRAININGENDINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE2AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEndingRow_TypeDefinitionIndex = 11855;

	class SwordTrainingEndingRow : public ::System::Object
	{
	public:
		::System::String* StoryUnlockImage; // 0x10
		::System::String* StoryImage; // 0x18
		::RPG::Client::TextID StoryTitle; // 0x20
		::RPG::Client::TextID UnlockDesc; // 0x30
		::System::UInt32 EndingID; // 0x40
		::System::UInt32 StoryID; // 0x44
		::System::UInt32 QuestID; // 0x48
		::System::UInt32 RewardID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENDINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingEndingRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEndingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
