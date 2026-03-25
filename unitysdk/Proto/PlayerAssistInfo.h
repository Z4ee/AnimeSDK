#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define PROTO_PLAYERASSISTINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18292DF0)
#define PROTO_PLAYERASSISTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x182926E0)
#define PROTO_PLAYERASSISTINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18292840)
#define PROTO_PLAYERASSISTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x18292750)
#define PROTO_PLAYERASSISTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18292920)
#define PROTO_PLAYERASSISTINFO_GET_ASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x18292730)
#define PROTO_PLAYERASSISTINFO_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x18292710)
#define PROTO_PLAYERASSISTINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182933B0)
#define PROTO_PLAYERASSISTINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18292E80)
#define PROTO_PLAYERASSISTINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182925F0)
#define PROTO_PLAYERASSISTINFO_SET_ASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x18292740)
#define PROTO_PLAYERASSISTINFO_SET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x18292720)
#define PROTO_PLAYERASSISTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18292D10)
#define PROTO_PLAYERASSISTINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x18292D70)
#define PROTO_PLAYERASSISTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18292610)
#define PROTO_PLAYERASSISTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18292600)

namespace Proto
{
	inline static constexpr unsigned int PlayerAssistInfo_TypeDefinitionIndex = 24601;

	class PlayerAssistInfo : public ::System::Object
	{
	public:
		// static const ::System::Int32 PlayerInfoFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 AssistAvatarFieldNumber = 0xB; // 0x0
		::Proto::DisplayAvatarDetailInfo* assistAvatar_; // 0x10
		::Proto::PlayerSimpleInfo* playerInfo_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PlayerAssistInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PlayerAssistInfo* Clone()
		{
			return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_CLONE_OFFSET))(this);
		}

		::Proto::PlayerSimpleInfo* get_PlayerInfo()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_GET_PLAYERINFO_OFFSET))(this);
		}

		::System::Void set_PlayerInfo(::Proto::PlayerSimpleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_SET_PLAYERINFO_OFFSET))(this, value);
		}

		::Proto::DisplayAvatarDetailInfo* get_AssistAvatar()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_GET_ASSISTAVATAR_OFFSET))(this);
		}

		::System::Void set_AssistAvatar(::Proto::DisplayAvatarDetailInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_SET_ASSISTAVATAR_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PlayerAssistInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PlayerAssistInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
