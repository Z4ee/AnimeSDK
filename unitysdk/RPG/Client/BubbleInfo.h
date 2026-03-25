#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLEINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x920EE40)
#define RPG_CLIENT_BUBBLEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x920ED70)
#define RPG_CLIENT_BUBBLEINFO_GETBUBBLEINFO_OFFSET UNITYSDK_OFFSET(0x920EEF0)
#define RPG_CLIENT_BUBBLEINFO_GET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0x920EF50)
#define RPG_CLIENT_BUBBLEINFO_GET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x920EF30)
#define RPG_CLIENT_BUBBLEINFO_GET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0x920EF70)
#define RPG_CLIENT_BUBBLEINFO_GET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0x920EFF0)
#define RPG_CLIENT_BUBBLEINFO_GET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0x920EFB0)
#define RPG_CLIENT_BUBBLEINFO_GET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x920EFD0)
#define RPG_CLIENT_BUBBLEINFO_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x920EF90)
#define RPG_CLIENT_BUBBLEINFO_SET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0x920EF60)
#define RPG_CLIENT_BUBBLEINFO_SET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x920EF40)
#define RPG_CLIENT_BUBBLEINFO_SET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0x920EF80)
#define RPG_CLIENT_BUBBLEINFO_SET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0x920F000)
#define RPG_CLIENT_BUBBLEINFO_SET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0x920EFC0)
#define RPG_CLIENT_BUBBLEINFO_SET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x920EFE0)
#define RPG_CLIENT_BUBBLEINFO_SET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x920EFA0)
#define RPG_CLIENT_BUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x920EE30)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleInfo_TypeDefinitionIndex = 51088;

	class BubbleInfo : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardIdentifier* _BillboardIdentifier_k__BackingField; // 0x10
		::System::String* _ReplaceParam_k__BackingField; // 0x18
		::System::String* _ShowText_k__BackingField; // 0x20
		::RPG::Client::TextID _DialogueTextmapID_k__BackingField; // 0x28
		::System::UInt32 _TalkSentenceID_k__BackingField; // 0x38
		::System::Boolean _EnableVoice_k__BackingField; // 0x3C
		::System::Single _AutoSkipTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BubbleInfo* Create(::RPG::GameCore::BubbleTalkInfo* bubbleTalkInfo)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_OFFSET))(bubbleTalkInfo);
		}

		static ::RPG::Client::BubbleInfo* Create_1(::RPG::Client::Billboard::BillboardIdentifier* billboardIdentifier, ::RPG::GameCore::FiveDimActionBubbleTalkInfo* bubbleTalkInfo)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_1_OFFSET))(billboardIdentifier, bubbleTalkInfo);
		}

		::RPG::Client::BubbleInfo* GetBubbleInfo()
		{
			return ((::RPG::Client::BubbleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GETBUBBLEINFO_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_BillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_BILLBOARDIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_BillboardIdentifier(::RPG::Client::Billboard::BillboardIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_BILLBOARDIDENTIFIER_OFFSET))(this, value);
		}

		::System::Single get_AutoSkipTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_AUTOSKIPTIME_OFFSET))(this);
		}

		::System::Void set_AutoSkipTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_AUTOSKIPTIME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DialogueTextmapID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_DIALOGUETEXTMAPID_OFFSET))(this);
		}

		::System::Void set_DialogueTextmapID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_DIALOGUETEXTMAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_TalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_TALKSENTENCEID_OFFSET))(this);
		}

		::System::Void set_TalkSentenceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_TALKSENTENCEID_OFFSET))(this, value);
		}

		::System::String* get_ReplaceParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_REPLACEPARAM_OFFSET))(this);
		}

		::System::Void set_ReplaceParam(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_REPLACEPARAM_OFFSET))(this, value);
		}

		::System::String* get_ShowText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_SHOWTEXT_OFFSET))(this);
		}

		::System::Void set_ShowText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_SHOWTEXT_OFFSET))(this, value);
		}

		::System::Boolean get_EnableVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_ENABLEVOICE_OFFSET))(this);
		}

		::System::Void set_EnableVoice(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_ENABLEVOICE_OFFSET))(this, value);
		}
	};
}
