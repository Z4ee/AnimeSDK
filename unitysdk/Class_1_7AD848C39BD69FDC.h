#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FEF4A135EC4A2DB8;
namespace RPG::Client { class ChatMessageData; }
namespace System { class String; }

#define CLASS_1_7AD848C39BD69FDC_GET_CHATMSG_OFFSET UNITYSDK_OFFSET(0x1288E480)
#define CLASS_1_7AD848C39BD69FDC_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x1288E4A0)
#define CLASS_1_7AD848C39BD69FDC_GET_OPUID_OFFSET UNITYSDK_OFFSET(0x1288E460)
#define CLASS_1_7AD848C39BD69FDC_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1288E4C0)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1288E4F0)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_D90F9F36FAEE69FE_OFFSET UNITYSDK_OFFSET(0x1288E810)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1288E4E0)
#define CLASS_1_7AD848C39BD69FDC_SET_CHATMSG_OFFSET UNITYSDK_OFFSET(0x1288E490)
#define CLASS_1_7AD848C39BD69FDC_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x1288E4B0)
#define CLASS_1_7AD848C39BD69FDC_SET_OPUID_OFFSET UNITYSDK_OFFSET(0x1288E470)
#define CLASS_1_7AD848C39BD69FDC_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1288E4D0)
#define CLASS_1_7AD848C39BD69FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1288E5A0)

inline static constexpr unsigned int Class_1_7AD848C39BD69FDC_TypeDefinitionIndex = 61166;

class Class_1_7AD848C39BD69FDC : public ::System::Object
{
public:
	::System::String* _ChatMsg_k__BackingField; // 0x10
	::System::UInt32 _OpUid_k__BackingField; // 0x18
	::System::UInt32 _EmojiId_k__BackingField; // 0x1C
	::System::Int64 _TimeStamp_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_FEF4A135EC4A2DB8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_FEF4A135EC4A2DB8*))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_OpUid()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_OPUID_OFFSET))(this);
	}

	::System::Void set_OpUid(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_OPUID_OFFSET))(this, value);
	}

	::System::String* get_ChatMsg()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_CHATMSG_OFFSET))(this);
	}

	::System::Void set_ChatMsg(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_CHATMSG_OFFSET))(this, value);
	}

	::System::UInt32 get_EmojiId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_EMOJIID_OFFSET))(this);
	}

	::System::Void set_EmojiId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_EMOJIID_OFFSET))(this, value);
	}

	::System::Int64 get_TimeStamp()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TimeStamp(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_TIMESTAMP_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::Client::ChatMessageData* Method_1_D90F9F36FAEE69FE()
	{
		return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_METHOD_1_D90F9F36FAEE69FE_OFFSET))(this);
	}
};
