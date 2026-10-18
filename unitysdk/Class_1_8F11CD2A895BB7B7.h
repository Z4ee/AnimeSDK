#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87FFBB414BD751E4;
namespace RPG::Client { class ChatMessageData; }
namespace System { class String; }

#define CLASS_1_8F11CD2A895BB7B7_GET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xB60D550)
#define CLASS_1_8F11CD2A895BB7B7_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xB60D570)
#define CLASS_1_8F11CD2A895BB7B7_GET_OPUID_OFFSET UNITYSDK_OFFSET(0xB60D530)
#define CLASS_1_8F11CD2A895BB7B7_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB60D590)
#define CLASS_1_8F11CD2A895BB7B7_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB60D5B0)
#define CLASS_1_8F11CD2A895BB7B7_METHOD_1_3D4822260FEE8B1A_OFFSET UNITYSDK_OFFSET(0xB60D960)
#define CLASS_1_8F11CD2A895BB7B7_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB60D600)
#define CLASS_1_8F11CD2A895BB7B7_SET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xB60D560)
#define CLASS_1_8F11CD2A895BB7B7_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xB60D580)
#define CLASS_1_8F11CD2A895BB7B7_SET_OPUID_OFFSET UNITYSDK_OFFSET(0xB60D540)
#define CLASS_1_8F11CD2A895BB7B7_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB60D5A0)
#define CLASS_1_8F11CD2A895BB7B7__CTOR_OFFSET UNITYSDK_OFFSET(0xB60D6B0)

inline static constexpr unsigned int Class_1_8F11CD2A895BB7B7_TypeDefinitionIndex = 66408;

class Class_1_8F11CD2A895BB7B7 : public ::System::Object
{
public:
	::System::String* _ChatMsg_k__BackingField; // 0x10
	::System::Int64 _TimeStamp_k__BackingField; // 0x18
	::System::UInt32 _OpUid_k__BackingField; // 0x20
	::System::UInt32 _EmojiId_k__BackingField; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_87FFBB414BD751E4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_87FFBB414BD751E4*))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_OpUid()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_GET_OPUID_OFFSET))(this);
	}

	::System::Void set_OpUid(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_SET_OPUID_OFFSET))(this, a1);
	}

	::System::String* get_ChatMsg()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_GET_CHATMSG_OFFSET))(this);
	}

	::System::Void set_ChatMsg(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_SET_CHATMSG_OFFSET))(this, a1);
	}

	::System::UInt32 get_EmojiId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_GET_EMOJIID_OFFSET))(this);
	}

	::System::Void set_EmojiId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_SET_EMOJIID_OFFSET))(this, a1);
	}

	::System::Int64 get_TimeStamp()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TimeStamp(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_SET_TIMESTAMP_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::Client::ChatMessageData* Method_1_3D4822260FEE8B1A()
	{
		return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F11CD2A895BB7B7_METHOD_1_3D4822260FEE8B1A_OFFSET))(this);
	}
};
