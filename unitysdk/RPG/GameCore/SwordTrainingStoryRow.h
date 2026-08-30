#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingStoryType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E15BD00)
#define RPG_GAMECORE_SWORDTRAININGSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15C320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryRow_TypeDefinitionIndex = 12368;

	class SwordTrainingStoryRow : public ::System::Object
	{
	public:
		::System::String* StoryImage; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::System::UInt32 PartnerID; // 0x20
		::RPG::GameCore::SwordTrainingStoryType StoryType; // 0x24
		::RPG::Client::TextID EffectDesc; // 0x28
		::System::UInt32 Condition; // 0x38
		::System::UInt32 MissionID; // 0x3C
		::System::UInt32 RepeatPerformanceID; // 0x40
		::System::UInt32 StoryID; // 0x44
		::RPG::Client::TextID StoryTitle; // 0x48
		::RPG::Client::TextID StoryDesc; // 0x58
		::System::UInt32 PerformanceID; // 0x68
		::System::UInt32 ExamID; // 0x6C
		::RPG::Client::TextID ConditionDesc; // 0x70
		::RPG::Client::TextID StoryHint; // 0x80

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
