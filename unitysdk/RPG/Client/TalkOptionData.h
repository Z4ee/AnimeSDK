#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITalkOptionExtData; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B40FA50)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkOptionData_TypeDefinitionIndex = 68033;

	class TalkOptionData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x18
		::RPG::Client::RogueTalkOptionDataExt* RogueExt; // 0x20
		::RPG::Client::ITalkOptionExtData* ExtData; // 0x28
		::System::UInt32 DialogueGroupID; // 0x30
		::System::Int32 InfoIndex; // 0x34
		::System::Boolean HasTriggered; // 0x38
		::System::Boolean IsSkipDefault; // 0x39
		::System::Boolean IsValid; // 0x3A
		::System::Boolean HasBeenTriggeredLogic; // 0x3B
		::System::UInt32 MenuItemExtraInfo; // 0x3C
		::System::Boolean DeleteAfterSelection; // 0x40
		::System::Boolean IsLastSelected; // 0x41
		::System::UInt32 TalkSentenceID; // 0x44
		::System::UInt32 SubMissionIDForMenuItem; // 0x48
		::RPG::Client::TextID Text; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
