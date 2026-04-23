#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7AD848C39BD69FDC;
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLEINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9EB8070)
#define RPG_CLIENT_BUBBLEINFO_CREATE_2_OFFSET UNITYSDK_OFFSET(0x9EB8120)
#define RPG_CLIENT_BUBBLEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9EB7FB0)
#define RPG_CLIENT_BUBBLEINFO_GETBUBBLEINFO_OFFSET UNITYSDK_OFFSET(0x9EB81C0)
#define RPG_CLIENT_BUBBLEINFO_GET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0x9EB8220)
#define RPG_CLIENT_BUBBLEINFO_GET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9EB8200)
#define RPG_CLIENT_BUBBLEINFO_GET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0x9EB8240)
#define RPG_CLIENT_BUBBLEINFO_GET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0x9EB82C0)
#define RPG_CLIENT_BUBBLEINFO_GET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0x9EB8280)
#define RPG_CLIENT_BUBBLEINFO_GET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x9EB82A0)
#define RPG_CLIENT_BUBBLEINFO_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x9EB8260)
#define RPG_CLIENT_BUBBLEINFO_SET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0x9EB8230)
#define RPG_CLIENT_BUBBLEINFO_SET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9EB8210)
#define RPG_CLIENT_BUBBLEINFO_SET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0x9EB8250)
#define RPG_CLIENT_BUBBLEINFO_SET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0x9EB82D0)
#define RPG_CLIENT_BUBBLEINFO_SET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0x9EB8290)
#define RPG_CLIENT_BUBBLEINFO_SET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x9EB82B0)
#define RPG_CLIENT_BUBBLEINFO_SET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x9EB8270)
#define RPG_CLIENT_BUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB8060)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleInfo_TypeDefinitionIndex = 57973;

	class BubbleInfo : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardIdentifier* _BillboardIdentifier_k__BackingField; // 0x10
		::System::String* _ReplaceParam_k__BackingField; // 0x18
		::System::String* _ShowText_k__BackingField; // 0x20
		::System::Boolean _EnableVoice_k__BackingField; // 0x28
		::System::UInt32 _TalkSentenceID_k__BackingField; // 0x2C
		::RPG::Client::TextID _DialogueTextmapID_k__BackingField; // 0x30
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

		static ::RPG::Client::BubbleInfo* Create_2(::Class_1_7AD848C39BD69FDC* message, ::System::UInt32 runtimeID)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::Class_1_7AD848C39BD69FDC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_2_OFFSET))(message, runtimeID);
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
