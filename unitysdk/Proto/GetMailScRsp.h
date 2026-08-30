#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ClientMail; }
namespace System { class String; }

#define PROTO_GETMAILSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD37A20)
#define PROTO_GETMAILSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD374D0)
#define PROTO_GETMAILSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD375D0)
#define PROTO_GETMAILSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD375A0)
#define PROTO_GETMAILSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD376B0)
#define PROTO_GETMAILSCRSP_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x1DD37580)
#define PROTO_GETMAILSCRSP_GET_MAILLIST_OFFSET UNITYSDK_OFFSET(0x1DD37500)
#define PROTO_GETMAILSCRSP_GET_NOTICEMAILLIST_OFFSET UNITYSDK_OFFSET(0x1DD37530)
#define PROTO_GETMAILSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DD37340)
#define PROTO_GETMAILSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DD37540)
#define PROTO_GETMAILSCRSP_GET_START_OFFSET UNITYSDK_OFFSET(0x1DD37510)
#define PROTO_GETMAILSCRSP_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x1DD37560)
#define PROTO_GETMAILSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD37DD0)
#define PROTO_GETMAILSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD37CA0)
#define PROTO_GETMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD37370)
#define PROTO_GETMAILSCRSP_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x1DD37590)
#define PROTO_GETMAILSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DD37550)
#define PROTO_GETMAILSCRSP_SET_START_OFFSET UNITYSDK_OFFSET(0x1DD37520)
#define PROTO_GETMAILSCRSP_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x1DD37570)
#define PROTO_GETMAILSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD37740)
#define PROTO_GETMAILSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD377A0)
#define PROTO_GETMAILSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD37F10)
#define PROTO_GETMAILSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD373E0)
#define PROTO_GETMAILSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD37380)

namespace Proto
{
	inline static constexpr unsigned int GetMailScRsp_TypeDefinitionIndex = 29957;

	class GetMailScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>** StaticGet__repeated_noticeMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>**)Il2CppClass::FromTypeDefinitionIndex(GetMailScRsp_TypeDefinitionIndex)->GetStaticField(0x308C0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetMailScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetMailScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetMailScRsp_TypeDefinitionIndex)->GetStaticField(0x308C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>** StaticGet__repeated_mailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>**)Il2CppClass::FromTypeDefinitionIndex(GetMailScRsp_TypeDefinitionIndex)->GetStaticField(0x308D0);
		}
		// static const ::System::Int32 MailListFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 StartFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 NoticeMailListFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 TotalNumFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 IsEndFieldNumber = 0x1; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* noticeMailList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* mailList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::UInt32 retcode_; // 0x28
		::System::Boolean isEnd_; // 0x2C
		::System::UInt32 totalNum_; // 0x30
		::System::UInt32 start_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetMailScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetMailScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetMailScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetMailScRsp* Clone()
		{
			return ((::Proto::GetMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* get_MailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_MAILLIST_OFFSET))(this);
		}

		::System::UInt32 get_Start()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_START_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* get_NoticeMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_NOTICEMAILLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_TOTALNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_ISEND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetMailScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetMailScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
