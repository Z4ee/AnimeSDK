#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_OPTIONTALKINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17480220)
#define RPG_GAMECORE_OPTIONTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1747FFE0)
#define RPG_GAMECORE_OPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x174801E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionTalkInfo_TypeDefinitionIndex = 19173;

	class OptionTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::RPG::Client::TextID OptionTextmapID; // 0x18
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x28
		::System::String* TriggerCustomString; // 0x30
		::System::Boolean HasTriggered; // 0x38
		::System::Boolean DeleteAfterSelection; // 0x39
		::System::UInt32 SubmissionID; // 0x3C
		::System::String* FinishKey; // 0x40
		::System::UInt32 TalkEventID; // 0x48
		::System::Boolean IsSkipDefault; // 0x4C
		::RPG::GameCore::PredicateConfig* VisibleFilter; // 0x50
		::System::String* OptionIconPath; // 0x58
		::System::UInt32 MenuItemExtraInfo; // 0x60
		::System::UInt32 SubMissionIDForMenuItem; // 0x64
		::System::Boolean HasBeenTriggeredLogic; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OptionTalkInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OptionTalkInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
