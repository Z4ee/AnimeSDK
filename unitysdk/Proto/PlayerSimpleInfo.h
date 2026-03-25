#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_4;
class Class_1_BD570EF86E624FB1_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AssistSimpleInfo; }
namespace System { class String; }

#define PROTO_PLAYERSIMPLEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18294180)
#define PROTO_PLAYERSIMPLEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x182926B0)
#define PROTO_PLAYERSIMPLEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18293AE0)
#define PROTO_PLAYERSIMPLEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x18293AB0)
#define PROTO_PLAYERSIMPLEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18292980)
#define PROTO_PLAYERSIMPLEINFO_GET_ASSISTINFOLIST_OFFSET UNITYSDK_OFFSET(0x182938E0)
#define PROTO_PLAYERSIMPLEINFO_GET_CHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x182939B0)
#define PROTO_PLAYERSIMPLEINFO_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x182939F0)
#define PROTO_PLAYERSIMPLEINFO_GET_HEADICONFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x182938F0)
#define PROTO_PLAYERSIMPLEINFO_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x182938C0)
#define PROTO_PLAYERSIMPLEINFO_GET_ISBANNED_OFFSET UNITYSDK_OFFSET(0x182938A0)
#define PROTO_PLAYERSIMPLEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182939D0)
#define PROTO_PLAYERSIMPLEINFO_GET_LOGOUTTIME_OFFSET UNITYSDK_OFFSET(0x18293880)
#define PROTO_PLAYERSIMPLEINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x18293720)
#define PROTO_PLAYERSIMPLEINFO_GET_ONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x18293860)
#define PROTO_PLAYERSIMPLEINFO_GET_PERSONALCARD_OFFSET UNITYSDK_OFFSET(0x18293840)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORMNICK_OFFSET UNITYSDK_OFFSET(0x18293A10)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x182937C0)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x18293910)
#define PROTO_PLAYERSIMPLEINFO_GET_PLAYEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x182937A0)
#define PROTO_PLAYERSIMPLEINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x18293930)
#define PROTO_PLAYERSIMPLEINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x18293A90)
#define PROTO_PLAYERSIMPLEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18294B50)
#define PROTO_PLAYERSIMPLEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18293080)
#define PROTO_PLAYERSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18293550)
#define PROTO_PLAYERSIMPLEINFO_SET_CHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x182939C0)
#define PROTO_PLAYERSIMPLEINFO_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x18293A00)
#define PROTO_PLAYERSIMPLEINFO_SET_HEADICONFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x18293900)
#define PROTO_PLAYERSIMPLEINFO_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x182938D0)
#define PROTO_PLAYERSIMPLEINFO_SET_ISBANNED_OFFSET UNITYSDK_OFFSET(0x182938B0)
#define PROTO_PLAYERSIMPLEINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182939E0)
#define PROTO_PLAYERSIMPLEINFO_SET_LOGOUTTIME_OFFSET UNITYSDK_OFFSET(0x18293890)
#define PROTO_PLAYERSIMPLEINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x18293730)
#define PROTO_PLAYERSIMPLEINFO_SET_ONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x18293870)
#define PROTO_PLAYERSIMPLEINFO_SET_PERSONALCARD_OFFSET UNITYSDK_OFFSET(0x18293850)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORMNICK_OFFSET UNITYSDK_OFFSET(0x18293A20)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x182937D0)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x18293920)
#define PROTO_PLAYERSIMPLEINFO_SET_PLAYEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x182937B0)
#define PROTO_PLAYERSIMPLEINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x18293940)
#define PROTO_PLAYERSIMPLEINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x18293AA0)
#define PROTO_PLAYERSIMPLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18293D30)
#define PROTO_PLAYERSIMPLEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x18293D90)
#define PROTO_PLAYERSIMPLEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18295010)
#define PROTO_PLAYERSIMPLEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18293560)
#define PROTO_PLAYERSIMPLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18293000)

namespace Proto
{
	inline static constexpr unsigned int PlayerSimpleInfo_TypeDefinitionIndex = 24589;

	class PlayerSimpleInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::AssistSimpleInfo*>** StaticGet__repeated_assistInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::AssistSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerSimpleInfo_TypeDefinitionIndex)->GetStaticField(0x1DDF0);
		}
		// static const ::System::Int32 NicknameFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 PlayerOutfitDataFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 PlatformUuidFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 PersonalCardFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 OnlineStatusFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 LogoutTimeFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 IsBannedFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 HeadIconFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 AssistInfoListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 HeadIconFrameInfoFieldNumber = 0x673; // 0x0
		// static const ::System::Int32 PlatformFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 SignatureFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ChatBubbleFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 GenderFieldNumber = 0x690; // 0x0
		// static const ::System::Int32 PlatformNickFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 UidFieldNumber = 0xA; // 0x0
		::Class_1_BD570EF86E624FB1_3* headIconFrameInfo_; // 0x10
		::System::String* platformUuid_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>* assistInfoList_; // 0x20
		::System::String* signature_; // 0x28
		::System::String* nickname_; // 0x30
		::System::String* platformNick_; // 0x38
		::Class_1_6E708EAB438EC183_4* playerOutfitData_; // 0x40
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x48
		::System::UInt32 chatBubble_; // 0x50
		::System::UInt32 headIcon_; // 0x54
		::System::UInt32 uid_; // 0x58
		::Enum_3_7D0231C413D78CFA platform_; // 0x5C
		::System::UInt32 level_; // 0x60
		::System::Boolean isBanned_; // 0x64
		::Enum_3_ED790DAC948A65A9_13 onlineStatus_; // 0x68
		::System::UInt32 gender_; // 0x6C
		::System::UInt32 personalCard_; // 0x70
		::System::Int64 logoutTime_; // 0x78

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

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PlayerSimpleInfo* Clone()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_NICKNAME_OFFSET))(this, value);
		}

		::Class_1_6E708EAB438EC183_4* get_PlayerOutfitData()
		{
			return ((::Class_1_6E708EAB438EC183_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLAYEROUTFITDATA_OFFSET))(this);
		}

		::System::Void set_PlayerOutfitData(::Class_1_6E708EAB438EC183_4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_4*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLAYEROUTFITDATA_OFFSET))(this, value);
		}

		::System::String* get_PlatformUuid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORMUUID_OFFSET))(this);
		}

		::System::Void set_PlatformUuid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORMUUID_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCard()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PERSONALCARD_OFFSET))(this);
		}

		::System::Void set_PersonalCard(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PERSONALCARD_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_13 get_OnlineStatus()
		{
			return ((::Enum_3_ED790DAC948A65A9_13(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_OnlineStatus(::Enum_3_ED790DAC948A65A9_13 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_13))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_ONLINESTATUS_OFFSET))(this, value);
		}

		::System::Int64 get_LogoutTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_LOGOUTTIME_OFFSET))(this);
		}

		::System::Void set_LogoutTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_LOGOUTTIME_OFFSET))(this, value);
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

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>* get_AssistInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ASSISTINFOLIST_OFFSET))(this);
		}

		::Class_1_BD570EF86E624FB1_3* get_HeadIconFrameInfo()
		{
			return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_HEADICONFRAMEINFO_OFFSET))(this);
		}

		::System::Void set_HeadIconFrameInfo(::Class_1_BD570EF86E624FB1_3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_HEADICONFRAMEINFO_OFFSET))(this, value);
		}

		::Enum_3_7D0231C413D78CFA get_Platform()
		{
			return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::Enum_3_7D0231C413D78CFA value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORM_OFFSET))(this, value);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::UInt32 get_ChatBubble()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_CHATBUBBLE_OFFSET))(this);
		}

		::System::Void set_ChatBubble(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_CHATBUBBLE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Gender()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_GENDER_OFFSET))(this, value);
		}

		::System::String* get_PlatformNick()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORMNICK_OFFSET))(this);
		}

		::System::Void set_PlatformNick(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORMNICK_OFFSET))(this, value);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_UID_OFFSET))(this, value);
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
