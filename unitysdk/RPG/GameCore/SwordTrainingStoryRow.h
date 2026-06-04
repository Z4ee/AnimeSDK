#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingStoryType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE8760)
#define RPG_GAMECORE_SWORDTRAININGSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE8D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryRow_TypeDefinitionIndex = 11879;

	class SwordTrainingStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::System::String* StoryImage; // 0x18
		::RPG::Client::TextID ConditionDesc; // 0x20
		::System::UInt32 StoryID; // 0x30
		::System::UInt32 MissionID; // 0x34
		::System::UInt32 PerformanceID; // 0x38
		::System::UInt32 ExamID; // 0x3C
		::RPG::Client::TextID StoryTitle; // 0x40
		::System::UInt32 RepeatPerformanceID; // 0x50
		::System::UInt32 Condition; // 0x54
		::RPG::Client::TextID StoryDesc; // 0x58
		::RPG::GameCore::SwordTrainingStoryType StoryType; // 0x68
		::System::UInt32 PartnerID; // 0x6C
		::RPG::Client::TextID StoryHint; // 0x70
		::RPG::Client::TextID EffectDesc; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingStoryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
