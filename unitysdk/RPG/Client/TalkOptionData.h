#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITalkOptionExtData; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A60E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkOptionData_TypeDefinitionIndex = 68038;

	class TalkOptionData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::RogueTalkOptionDataExt* RogueExt; // 0x18
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x20
		::RPG::Client::ITalkOptionExtData* ExtData; // 0x28
		::System::UInt32 TalkSentenceID; // 0x30
		::RPG::Client::TextID Text; // 0x38
		::System::Boolean IsValid; // 0x48
		::System::Boolean IsSkipDefault; // 0x49
		::System::Boolean DeleteAfterSelection; // 0x4A
		::System::Boolean HasTriggered; // 0x4B
		::System::UInt32 DialogueGroupID; // 0x4C
		::System::Boolean IsLastSelected; // 0x50
		::System::Boolean HasBeenTriggeredLogic; // 0x51
		::System::Int32 InfoIndex; // 0x54
		::System::UInt32 SubMissionIDForMenuItem; // 0x58
		::System::UInt32 MenuItemExtraInfo; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
