#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define PROTO_PLAYERASSISTINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19350EA0)
#define PROTO_PLAYERASSISTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x19350B20)
#define PROTO_PLAYERASSISTINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19350C80)
#define PROTO_PLAYERASSISTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x19350B90)
#define PROTO_PLAYERASSISTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19350D60)
#define PROTO_PLAYERASSISTINFO_GET_ASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x19350B50)
#define PROTO_PLAYERASSISTINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19350A00)
#define PROTO_PLAYERASSISTINFO_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x19350B70)
#define PROTO_PLAYERASSISTINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19351130)
#define PROTO_PLAYERASSISTINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19350F30)
#define PROTO_PLAYERASSISTINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19350A30)
#define PROTO_PLAYERASSISTINFO_SET_ASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x19350B60)
#define PROTO_PLAYERASSISTINFO_SET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x19350B80)
#define PROTO_PLAYERASSISTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19350DC0)
#define PROTO_PLAYERASSISTINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x19350E20)
#define PROTO_PLAYERASSISTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x193512D0)
#define PROTO_PLAYERASSISTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19350A50)
#define PROTO_PLAYERASSISTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19350A40)

namespace Proto
{
	inline static constexpr unsigned int PlayerAssistInfo_TypeDefinitionIndex = 27190;

	class PlayerAssistInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerAssistInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PlayerAssistInfo*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAssistInfo_TypeDefinitionIndex)->GetStaticField(0x49710);
		}
		// static const ::System::Int32 AssistAvatarFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 PlayerInfoFieldNumber = 0xF; // 0x0
		::Proto::PlayerSimpleInfo* playerInfo_; // 0x10
		::Proto::DisplayAvatarDetailInfo* assistAvatar_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PlayerAssistInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerAssistInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PlayerAssistInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PlayerAssistInfo* Clone()
		{
			return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_CLONE_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* get_AssistAvatar()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_GET_ASSISTAVATAR_OFFSET))(this);
		}

		::System::Void set_AssistAvatar(::Proto::DisplayAvatarDetailInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_SET_ASSISTAVATAR_OFFSET))(this, value);
		}

		::Proto::PlayerSimpleInfo* get_PlayerInfo()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_GET_PLAYERINFO_OFFSET))(this);
		}

		::System::Void set_PlayerInfo(::Proto::PlayerSimpleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO_SET_PLAYERINFO_OFFSET))(this, value);
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
