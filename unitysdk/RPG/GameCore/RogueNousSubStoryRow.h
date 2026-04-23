#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSSUBSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D53E00)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D546B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSubStoryRow_TypeDefinitionIndex = 14117;

	class RogueNousSubStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayID; // 0x10
		::Il2CppArray<::System::UInt32>* NextIDList; // 0x18
		::System::String* LevelGraphPath; // 0x20
		::System::Int32 MinNousValue; // 0x28
		::System::Int32 MaxNousValue; // 0x2C
		::System::UInt32 QuestID; // 0x30
		::System::UInt32 StoryID; // 0x34
		::System::UInt32 Layer; // 0x38
		::RPG::Client::TextID TriggerCondition; // 0x40
		::System::UInt32 TalkNameID; // 0x50
		::System::UInt32 RequireArea; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousSubStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousSubStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
