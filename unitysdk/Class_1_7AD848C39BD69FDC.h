#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87FFBB414BD751E4_1;
namespace RPG::Client { class ChatMessageData; }
namespace System { class String; }

#define CLASS_1_7AD848C39BD69FDC_GET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xB763C10)
#define CLASS_1_7AD848C39BD69FDC_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xB763C30)
#define CLASS_1_7AD848C39BD69FDC_GET_OPUID_OFFSET UNITYSDK_OFFSET(0xB763BF0)
#define CLASS_1_7AD848C39BD69FDC_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB763C50)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB763C70)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_3D4822260FEE8B1A_OFFSET UNITYSDK_OFFSET(0xB763FE0)
#define CLASS_1_7AD848C39BD69FDC_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB763CC0)
#define CLASS_1_7AD848C39BD69FDC_SET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xB763C20)
#define CLASS_1_7AD848C39BD69FDC_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xB763C40)
#define CLASS_1_7AD848C39BD69FDC_SET_OPUID_OFFSET UNITYSDK_OFFSET(0xB763C00)
#define CLASS_1_7AD848C39BD69FDC_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB763C60)
#define CLASS_1_7AD848C39BD69FDC__CTOR_OFFSET UNITYSDK_OFFSET(0xB763D70)

inline static constexpr unsigned int Class_1_7AD848C39BD69FDC_TypeDefinitionIndex = 66440;

class Class_1_7AD848C39BD69FDC : public ::System::Object
{
public:
	::System::String* _ChatMsg_k__BackingField; // 0x10
	::System::Int64 _TimeStamp_k__BackingField; // 0x18
	::System::UInt32 _EmojiId_k__BackingField; // 0x20
	::System::UInt32 _OpUid_k__BackingField; // 0x24

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
