#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87FFBB414BD751E4_1;
namespace RPG::Client { class ChatMessageData; }
namespace System { class String; }

#define CLASS_1_7AD848C39BD69FDC_GET_CHATMSG_OFFSET UNITYSDK_OFFSET(0x18AF5840)
#define CLASS_1_7AD848C39BD69FDC_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x18AF5860)
#define CLASS_1_7AD848C39BD69FDC_GET_OPUID_OFFSET UNITYSDK_OFFSET(0x18AF5820)
#define CLASS_1_7AD848C39BD69FDC_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18AF5880)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18AF58A0)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_3D4822260FEE8B1A_OFFSET UNITYSDK_OFFSET(0x18AF5C10)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x18AF58F0)
#define CLASS_1_7AD848C39BD69FDC_SET_CHATMSG_OFFSET UNITYSDK_OFFSET(0x18AF5850)
#define CLASS_1_7AD848C39BD69FDC_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x18AF5870)
#define CLASS_1_7AD848C39BD69FDC_SET_OPUID_OFFSET UNITYSDK_OFFSET(0x18AF5830)
#define CLASS_1_7AD848C39BD69FDC_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18AF5890)
#define CLASS_1_7AD848C39BD69FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF59A0)

inline static constexpr unsigned int Class_1_7AD848C39BD69FDC_TypeDefinitionIndex = 63455;

class Class_1_7AD848C39BD69FDC : public ::System::Object
{
public:
	::System::String* _ChatMsg_k__BackingField; // 0x10
	::System::UInt32 _EmojiId_k__BackingField; // 0x18
	::System::UInt32 _OpUid_k__BackingField; // 0x1C
	::System::Int64 _TimeStamp_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_87FFBB414BD751E4_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_87FFBB414BD751E4_1*))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_OpUid()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_OPUID_OFFSET))(this);
	}

	::System::Void set_OpUid(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_OPUID_OFFSET))(this, a1);
	}

	::System::String* get_ChatMsg()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_CHATMSG_OFFSET))(this);
	}

	::System::Void set_ChatMsg(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_CHATMSG_OFFSET))(this, a1);
	}

	::System::UInt32 get_EmojiId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_EMOJIID_OFFSET))(this);
	}

	::System::Void set_EmojiId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_EMOJIID_OFFSET))(this, a1);
	}

	::System::Int64 get_TimeStamp()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TimeStamp(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_SET_TIMESTAMP_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::Client::ChatMessageData* Method_1_3D4822260FEE8B1A()
	{
		return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD848C39BD69FDC_METHOD_1_3D4822260FEE8B1A_OFFSET))(this);
	}
};
