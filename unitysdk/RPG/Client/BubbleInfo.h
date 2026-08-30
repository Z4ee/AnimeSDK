#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7AD848C39BD69FDC;
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLEINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC97BF00)
#define RPG_CLIENT_BUBBLEINFO_CREATE_2_OFFSET UNITYSDK_OFFSET(0xC97BFC0)
#define RPG_CLIENT_BUBBLEINFO_CREATE_3_OFFSET UNITYSDK_OFFSET(0xC97C070)
#define RPG_CLIENT_BUBBLEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC97BE90)
#define RPG_CLIENT_BUBBLEINFO_GETBUBBLEINFO_OFFSET UNITYSDK_OFFSET(0xC97C110)
#define RPG_CLIENT_BUBBLEINFO_GET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0xC97C170)
#define RPG_CLIENT_BUBBLEINFO_GET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC97C150)
#define RPG_CLIENT_BUBBLEINFO_GET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0xC97C190)
#define RPG_CLIENT_BUBBLEINFO_GET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0xC97C210)
#define RPG_CLIENT_BUBBLEINFO_GET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0xC97C1D0)
#define RPG_CLIENT_BUBBLEINFO_GET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0xC97C1F0)
#define RPG_CLIENT_BUBBLEINFO_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0xC97C1B0)
#define RPG_CLIENT_BUBBLEINFO_SET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0xC97C180)
#define RPG_CLIENT_BUBBLEINFO_SET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC97C160)
#define RPG_CLIENT_BUBBLEINFO_SET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0xC97C1A0)
#define RPG_CLIENT_BUBBLEINFO_SET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0xC97C220)
#define RPG_CLIENT_BUBBLEINFO_SET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0xC97C1E0)
#define RPG_CLIENT_BUBBLEINFO_SET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0xC97C200)
#define RPG_CLIENT_BUBBLEINFO_SET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0xC97C1C0)
#define RPG_CLIENT_BUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC97BEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleInfo_TypeDefinitionIndex = 63006;

	class BubbleInfo : public ::System::Object
	{
	public:
		::System::String* _ReplaceParam_k__BackingField; // 0x10
		::RPG::Client::Billboard::BillboardIdentifier* _BillboardIdentifier_k__BackingField; // 0x18
		::System::String* _ShowText_k__BackingField; // 0x20
		::RPG::Client::TextID _DialogueTextmapID_k__BackingField; // 0x28
		::System::Boolean _EnableVoice_k__BackingField; // 0x38
		::System::UInt32 _TalkSentenceID_k__BackingField; // 0x3C
		::System::Single _AutoSkipTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BubbleInfo* Create(::System::String* a1)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BubbleInfo* Create_1(::RPG::GameCore::BubbleTalkInfo* a1)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::BubbleInfo* Create_2(::RPG::Client::Billboard::BillboardIdentifier* a1, ::RPG::GameCore::FiveDimActionBubbleTalkInfo* a2)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_2_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BubbleInfo* Create_3(::Class_1_7AD848C39BD69FDC* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::BubbleInfo*(*)(::Class_1_7AD848C39BD69FDC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_CREATE_3_OFFSET))(a1, a2);
		}

		::RPG::Client::BubbleInfo* GetBubbleInfo()
		{
			return ((::RPG::Client::BubbleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GETBUBBLEINFO_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_BillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_BILLBOARDIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_BillboardIdentifier(::RPG::Client::Billboard::BillboardIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_BILLBOARDIDENTIFIER_OFFSET))(this, a1);
		}

		::System::Single get_AutoSkipTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_AUTOSKIPTIME_OFFSET))(this);
		}

		::System::Void set_AutoSkipTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_AUTOSKIPTIME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DialogueTextmapID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_DIALOGUETEXTMAPID_OFFSET))(this);
		}

		::System::Void set_DialogueTextmapID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_DIALOGUETEXTMAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_TALKSENTENCEID_OFFSET))(this);
		}

		::System::Void set_TalkSentenceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_TALKSENTENCEID_OFFSET))(this, a1);
		}

		::System::String* get_ReplaceParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_REPLACEPARAM_OFFSET))(this);
		}

		::System::Void set_ReplaceParam(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_REPLACEPARAM_OFFSET))(this, a1);
		}

		::System::String* get_ShowText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_SHOWTEXT_OFFSET))(this);
		}

		::System::Void set_ShowText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_SHOWTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_GET_ENABLEVOICE_OFFSET))(this);
		}

		::System::Void set_EnableVoice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFO_SET_ENABLEVOICE_OFFSET))(this, a1);
		}
	};
}
