#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_16.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_C9E417278351157F_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AssistSimpleInfo; }
namespace System { class String; }

#define PROTO_PLAYERSIMPLEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19352520)
#define PROTO_PLAYERSIMPLEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x19350AF0)
#define PROTO_PLAYERSIMPLEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19351AB0)
#define PROTO_PLAYERSIMPLEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x19351A80)
#define PROTO_PLAYERSIMPLEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19351D00)
#define PROTO_PLAYERSIMPLEINFO_GET_ASSISTINFOLIST_OFFSET UNITYSDK_OFFSET(0x19351700)
#define PROTO_PLAYERSIMPLEINFO_GET_CHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x19351750)
#define PROTO_PLAYERSIMPLEINFO_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x19351820)
#define PROTO_PLAYERSIMPLEINFO_GET_HEADICONFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x19351610)
#define PROTO_PLAYERSIMPLEINFO_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x193519C0)
#define PROTO_PLAYERSIMPLEINFO_GET_ISBANNED_OFFSET UNITYSDK_OFFSET(0x193519A0)
#define PROTO_PLAYERSIMPLEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19351710)
#define PROTO_PLAYERSIMPLEINFO_GET_LOGOUTTIME_OFFSET UNITYSDK_OFFSET(0x19351A60)
#define PROTO_PLAYERSIMPLEINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x19351840)
#define PROTO_PLAYERSIMPLEINFO_GET_ONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x193516E0)
#define PROTO_PLAYERSIMPLEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19351400)
#define PROTO_PLAYERSIMPLEINFO_GET_PERSONALCARD_OFFSET UNITYSDK_OFFSET(0x193519E0)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORMNICK_OFFSET UNITYSDK_OFFSET(0x19351630)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x19351770)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x19351A20)
#define PROTO_PLAYERSIMPLEINFO_GET_PLAYEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x19351A40)
#define PROTO_PLAYERSIMPLEINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x193518F0)
#define PROTO_PLAYERSIMPLEINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x19351730)
#define PROTO_PLAYERSIMPLEINFO_GET_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x19351A00)
#define PROTO_PLAYERSIMPLEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193533B0)
#define PROTO_PLAYERSIMPLEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19352FC0)
#define PROTO_PLAYERSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19351430)
#define PROTO_PLAYERSIMPLEINFO_SET_CHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x19351760)
#define PROTO_PLAYERSIMPLEINFO_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x19351830)
#define PROTO_PLAYERSIMPLEINFO_SET_HEADICONFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x19351620)
#define PROTO_PLAYERSIMPLEINFO_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x193519D0)
#define PROTO_PLAYERSIMPLEINFO_SET_ISBANNED_OFFSET UNITYSDK_OFFSET(0x193519B0)
#define PROTO_PLAYERSIMPLEINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19351720)
#define PROTO_PLAYERSIMPLEINFO_SET_LOGOUTTIME_OFFSET UNITYSDK_OFFSET(0x19351A70)
#define PROTO_PLAYERSIMPLEINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x19351850)
#define PROTO_PLAYERSIMPLEINFO_SET_ONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x193516F0)
#define PROTO_PLAYERSIMPLEINFO_SET_PERSONALCARD_OFFSET UNITYSDK_OFFSET(0x193519F0)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORMNICK_OFFSET UNITYSDK_OFFSET(0x19351640)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x19351780)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x19351A30)
#define PROTO_PLAYERSIMPLEINFO_SET_PLAYEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x19351A50)
#define PROTO_PLAYERSIMPLEINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x19351900)
#define PROTO_PLAYERSIMPLEINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x19351740)
#define PROTO_PLAYERSIMPLEINFO_SET_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x19351A10)
#define PROTO_PLAYERSIMPLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193520A0)
#define PROTO_PLAYERSIMPLEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x19352100)
#define PROTO_PLAYERSIMPLEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19353970)
#define PROTO_PLAYERSIMPLEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19351440)
#define PROTO_PLAYERSIMPLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x193510B0)

namespace Proto
{
	inline static constexpr unsigned int PlayerSimpleInfo_TypeDefinitionIndex = 27166;

	class PlayerSimpleInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerSimpleInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerSimpleInfo_TypeDefinitionIndex)->GetStaticField(0x152C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::AssistSimpleInfo*>** StaticGet__repeated_assistInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::AssistSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerSimpleInfo_TypeDefinitionIndex)->GetStaticField(0x152C8);
		}
		// static const ::System::Int32 HeadIconFrameInfoFieldNumber = 0x69; // 0x0
		// static const ::System::Int32 PlatformNickFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 OnlineStatusFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 AssistInfoListFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 UidFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 ChatBubbleFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 PlatformUuidFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 GenderFieldNumber = 0x57B; // 0x0
		// static const ::System::Int32 NicknameFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 SignatureFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 IsBannedFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 HeadIconFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 PersonalCardFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 UpdateTimeFieldNumber = 0x71E; // 0x0
		// static const ::System::Int32 PlatformFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 PlayerOutfitDataFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 LogoutTimeFieldNumber = 0x9; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Class_1_075C34D03AFA1215_7* playerOutfitData_; // 0x18
		::System::String* platformNick_; // 0x20
		::System::String* signature_; // 0x28
		::Class_1_C9E417278351157F_4* headIconFrameInfo_; // 0x30
		::System::String* platformUuid_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>* assistInfoList_; // 0x40
		::System::String* nickname_; // 0x48
		::Enum_3_ED790DAC948A65A9_16 onlineStatus_; // 0x50
		::System::UInt32 uid_; // 0x54
		::System::UInt32 chatBubble_; // 0x58
		::System::UInt32 headIcon_; // 0x5C
		::System::Boolean isBanned_; // 0x60
		::System::UInt32 level_; // 0x64
		::System::UInt32 personalCard_; // 0x68
		::System::UInt32 gender_; // 0x6C
		::System::Int64 updateTime_; // 0x70
		::System::Int64 logoutTime_; // 0x78
		::Enum_3_7D0231C413D78CFA platform_; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PlayerSimpleInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerSimpleInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PlayerSimpleInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PlayerSimpleInfo* Clone()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_CLONE_OFFSET))(this);
		}

		::Class_1_C9E417278351157F_4* get_HeadIconFrameInfo()
		{
			return ((::Class_1_C9E417278351157F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_HEADICONFRAMEINFO_OFFSET))(this);
		}

		::System::Void set_HeadIconFrameInfo(::Class_1_C9E417278351157F_4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_4*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_HEADICONFRAMEINFO_OFFSET))(this, value);
		}

		::System::String* get_PlatformNick()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORMNICK_OFFSET))(this);
		}

		::System::Void set_PlatformNick(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORMNICK_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_16 get_OnlineStatus()
		{
			return ((::Enum_3_ED790DAC948A65A9_16(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_OnlineStatus(::Enum_3_ED790DAC948A65A9_16 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_16))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_ONLINESTATUS_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>* get_AssistInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ASSISTINFOLIST_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChatBubble()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_CHATBUBBLE_OFFSET))(this);
		}

		::System::Void set_ChatBubble(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_CHATBUBBLE_OFFSET))(this, value);
		}

		::System::String* get_PlatformUuid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORMUUID_OFFSET))(this);
		}

		::System::Void set_PlatformUuid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORMUUID_OFFSET))(this, value);
		}

		::System::UInt32 get_Gender()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_GENDER_OFFSET))(this, value);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::Boolean get_IsBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ISBANNED_OFFSET))(this);
		}

		::System::Void set_IsBanned(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_ISBANNED_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIcon()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_HEADICON_OFFSET))(this);
		}

		::System::Void set_HeadIcon(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_HEADICON_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCard()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PERSONALCARD_OFFSET))(this);
		}

		::System::Void set_PersonalCard(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PERSONALCARD_OFFSET))(this, value);
		}

		::System::Int64 get_UpdateTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_UPDATETIME_OFFSET))(this);
		}

		::System::Void set_UpdateTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_UPDATETIME_OFFSET))(this, value);
		}

		::Enum_3_7D0231C413D78CFA get_Platform()
		{
			return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::Enum_3_7D0231C413D78CFA value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORM_OFFSET))(this, value);
		}

		::Class_1_075C34D03AFA1215_7* get_PlayerOutfitData()
		{
			return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLAYEROUTFITDATA_OFFSET))(this);
		}

		::System::Void set_PlayerOutfitData(::Class_1_075C34D03AFA1215_7* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLAYEROUTFITDATA_OFFSET))(this, value);
		}

		::System::Int64 get_LogoutTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_LOGOUTTIME_OFFSET))(this);
		}

		::System::Void set_LogoutTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_LOGOUTTIME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PlayerSimpleInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PlayerSimpleInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
