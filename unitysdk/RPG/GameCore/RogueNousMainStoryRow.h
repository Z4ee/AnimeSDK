#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSMAINSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17643240)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17643A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMainStoryRow_TypeDefinitionIndex = 13647;

	class RogueNousMainStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayID; // 0x10
		::System::UInt32 RogueNPCID; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::RPG::Client::TextID TriggerCondition; // 0x20
		::System::UInt32 Layer; // 0x30
		::System::UInt32 StoryGroup; // 0x34
		::RPG::Client::TextID MainStoryName; // 0x38
		::System::UInt32 StoryID; // 0x48
		::System::UInt32 UnlockConditionDisplay; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousMainStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousMainStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
