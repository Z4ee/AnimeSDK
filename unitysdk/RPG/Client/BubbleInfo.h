#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7AD848C39BD69FDC;
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLEINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A11A340)
#define RPG_CLIENT_BUBBLEINFO_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1A11A3F0)
#define RPG_CLIENT_BUBBLEINFO_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1A11A4A0)
#define RPG_CLIENT_BUBBLEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1A11A2D0)
#define RPG_CLIENT_BUBBLEINFO_GETBUBBLEINFO_OFFSET UNITYSDK_OFFSET(0x1A11A540)
#define RPG_CLIENT_BUBBLEINFO_GET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0x1A11A5A0)
#define RPG_CLIENT_BUBBLEINFO_GET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A11A580)
#define RPG_CLIENT_BUBBLEINFO_GET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0x1A11A5C0)
#define RPG_CLIENT_BUBBLEINFO_GET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0x1A11A640)
#define RPG_CLIENT_BUBBLEINFO_GET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0x1A11A600)
#define RPG_CLIENT_BUBBLEINFO_GET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x1A11A620)
#define RPG_CLIENT_BUBBLEINFO_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x1A11A5E0)
#define RPG_CLIENT_BUBBLEINFO_SET_AUTOSKIPTIME_OFFSET UNITYSDK_OFFSET(0x1A11A5B0)
#define RPG_CLIENT_BUBBLEINFO_SET_BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A11A590)
#define RPG_CLIENT_BUBBLEINFO_SET_DIALOGUETEXTMAPID_OFFSET UNITYSDK_OFFSET(0x1A11A5D0)
#define RPG_CLIENT_BUBBLEINFO_SET_ENABLEVOICE_OFFSET UNITYSDK_OFFSET(0x1A11A650)
#define RPG_CLIENT_BUBBLEINFO_SET_REPLACEPARAM_OFFSET UNITYSDK_OFFSET(0x1A11A610)
#define RPG_CLIENT_BUBBLEINFO_SET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x1A11A630)
#define RPG_CLIENT_BUBBLEINFO_SET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x1A11A5F0)
#define RPG_CLIENT_BUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A11A330)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleInfo_TypeDefinitionIndex = 63006;

	class BubbleInfo : public ::System::Object
	{
	public:
		::System::String* _ReplaceParam_k__BackingField; // 0x10
		::System::String* _ShowText_k__BackingField; // 0x18
		::RPG::Client::Billboard::BillboardIdentifier* _BillboardIdentifier_k__BackingField; // 0x20
		::System::UInt32 _TalkSentenceID_k__BackingField; // 0x28
		::System::Single _AutoSkipTime_k__BackingField; // 0x2C
		::System::Boolean _EnableVoice_k__BackingField; // 0x30
		::RPG::Client::TextID _DialogueTextmapID_k__BackingField; // 0x38

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
