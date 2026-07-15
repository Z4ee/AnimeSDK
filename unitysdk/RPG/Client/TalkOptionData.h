#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITalkOptionExtData; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1976C280)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkOptionData_TypeDefinitionIndex = 65026;

	class TalkOptionData : public ::System::Object
	{
	public:
		::RPG::Client::ITalkOptionExtData* ExtData; // 0x10
		::RPG::Client::RogueTalkOptionDataExt* RogueExt; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x28
		::System::Boolean HasBeenTriggeredLogic; // 0x30
		::System::Boolean DeleteAfterSelection; // 0x31
		::System::Boolean IsSkipDefault; // 0x32
		::System::Boolean IsLastSelected; // 0x33
		::System::UInt32 SubMissionIDForMenuItem; // 0x34
		::System::UInt32 TalkSentenceID; // 0x38
		::System::UInt32 DialogueGroupID; // 0x3C
		::System::Boolean IsValid; // 0x40
		::System::Boolean HasTriggered; // 0x41
		::RPG::Client::TextID Text; // 0x48
		::System::Int32 InfoIndex; // 0x58
		::System::UInt32 MenuItemExtraInfo; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
