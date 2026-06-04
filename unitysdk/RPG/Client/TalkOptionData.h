#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITalkOptionExtData; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D0F30)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkOptionData_TypeDefinitionIndex = 63657;

	class TalkOptionData : public ::System::Object
	{
	public:
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x10
		::RPG::Client::RogueTalkOptionDataExt* RogueExt; // 0x18
		::RPG::Client::ITalkOptionExtData* ExtData; // 0x20
		::System::String* IconPath; // 0x28
		::System::Boolean IsSkipDefault; // 0x30
		::System::Boolean DeleteAfterSelection; // 0x31
		::System::Int32 InfoIndex; // 0x34
		::System::Boolean IsValid; // 0x38
		::System::Boolean HasTriggered; // 0x39
		::System::Boolean HasBeenTriggeredLogic; // 0x3A
		::System::UInt32 TalkSentenceID; // 0x3C
		::RPG::Client::TextID Text; // 0x40
		::System::UInt32 MenuItemExtraInfo; // 0x50
		::System::UInt32 DialogueGroupID; // 0x54
		::System::UInt32 SubMissionIDForMenuItem; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
