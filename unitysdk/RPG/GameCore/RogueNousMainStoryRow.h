#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSMAINSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D16F780)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16FFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMainStoryRow_TypeDefinitionIndex = 14328;

	class RogueNousMainStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayID; // 0x10
		::System::UInt32 RogueNPCID; // 0x18
		::System::UInt32 Layer; // 0x1C
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 StoryID; // 0x24
		::System::UInt32 StoryGroup; // 0x28
		::System::UInt32 UnlockConditionDisplay; // 0x2C
		::RPG::Client::TextID TriggerCondition; // 0x30
		::RPG::Client::TextID MainStoryName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousMainStoryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousMainStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
