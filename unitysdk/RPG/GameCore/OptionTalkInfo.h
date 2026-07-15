#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_OPTIONTALKINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1BB04CF0)
#define RPG_GAMECORE_OPTIONTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB04AA0)
#define RPG_GAMECORE_OPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB04CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionTalkInfo_TypeDefinitionIndex = 14870;

	class OptionTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OptionIconPath; // 0x10
		::System::UInt32 MenuItemExtraInfo; // 0x18
		::System::UInt32 SubMissionIDForMenuItem; // 0x1C
		::System::Boolean HasBeenTriggeredLogic; // 0x20
		::System::UInt32 TalkSentenceID; // 0x24
		::RPG::Client::TextID OptionTextmapID; // 0x28
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x38
		::System::String* TriggerCustomString; // 0x40
		::System::Boolean HasTriggered; // 0x48
		::System::Boolean DeleteAfterSelection; // 0x49
		::System::UInt32 SubmissionID; // 0x4C
		::System::String* FinishKey; // 0x50
		::System::UInt32 TalkEventID; // 0x58
		::System::Boolean IsSkipDefault; // 0x5C
		::RPG::GameCore::PredicateConfig* VisibleFilter; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OptionTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
