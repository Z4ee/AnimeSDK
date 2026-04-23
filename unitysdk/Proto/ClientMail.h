#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_17.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_CLIENTMAIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19330720)
#define PROTO_CLIENTMAIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1932FC40)
#define PROTO_CLIENTMAIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1932FFA0)
#define PROTO_CLIENTMAIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1932FF70)
#define PROTO_CLIENTMAIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19330150)
#define PROTO_CLIENTMAIL_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1932FC90)
#define PROTO_CLIENTMAIL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1932FDC0)
#define PROTO_CLIENTMAIL_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1932FD80)
#define PROTO_CLIENTMAIL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1932FE80)
#define PROTO_CLIENTMAIL_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1932FC70)
#define PROTO_CLIENTMAIL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1932FCB0)
#define PROTO_CLIENTMAIL_GET_PARALIST_OFFSET UNITYSDK_OFFSET(0x1932FE70)
#define PROTO_CLIENTMAIL_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1932FA40)
#define PROTO_CLIENTMAIL_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x1932FEC0)
#define PROTO_CLIENTMAIL_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1932FDA0)
#define PROTO_CLIENTMAIL_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1932FEA0)
#define PROTO_CLIENTMAIL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1932FCD0)
#define PROTO_CLIENTMAIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19331070)
#define PROTO_CLIENTMAIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19330DF0)
#define PROTO_CLIENTMAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1932FA70)
#define PROTO_CLIENTMAIL_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1932FCA0)
#define PROTO_CLIENTMAIL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1932FDD0)
#define PROTO_CLIENTMAIL_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1932FD90)
#define PROTO_CLIENTMAIL_SET_ID_OFFSET UNITYSDK_OFFSET(0x1932FE90)
#define PROTO_CLIENTMAIL_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1932FC80)
#define PROTO_CLIENTMAIL_SET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1932FCC0)
#define PROTO_CLIENTMAIL_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x1932FED0)
#define PROTO_CLIENTMAIL_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1932FDB0)
#define PROTO_CLIENTMAIL_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1932FEB0)
#define PROTO_CLIENTMAIL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1932FCE0)
#define PROTO_CLIENTMAIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19330410)
#define PROTO_CLIENTMAIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x19330470)
#define PROTO_CLIENTMAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19331470)
#define PROTO_CLIENTMAIL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1932FAF0)
#define PROTO_CLIENTMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1932FA80)

namespace Proto
{
	inline static constexpr unsigned int ClientMail_TypeDefinitionIndex = 28709;

	class ClientMail : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::ClientMail*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::ClientMail*>**)Il2CppClass::FromTypeDefinitionIndex(ClientMail_TypeDefinitionIndex)->GetStaticField(0x62E30);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_paraList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClientMail_TypeDefinitionIndex)->GetStaticField(0x62E38);
		}
		// static const ::System::Int32 IsReadFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 AttachmentFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 MailTypeFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 TitleFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ExpireTimeFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 TemplateIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 ContentFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 ParaListFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 TimeFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 SenderFieldNumber = 0xB; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* paraList_; // 0x10
		::System::String* content_; // 0x18
		::System::String* sender_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
		::Proto::ItemList* attachment_; // 0x30
		::System::String* title_; // 0x38
		::System::UInt32 id_; // 0x40
		::System::Boolean isRead_; // 0x44
		::Enum_3_ED790DAC948A65A9_17 mailType_; // 0x48
		::System::UInt32 templateId_; // 0x4C
		::System::Int64 expireTime_; // 0x50
		::System::Int64 time_; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ClientMail* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::ClientMail*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::ClientMail*>*(*)())((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ClientMail* Clone()
		{
			return ((::Proto::ClientMail*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ISREAD_OFFSET))(this);
		}

		::System::Void set_IsRead(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ISREAD_OFFSET))(this, value);
		}

		::Proto::ItemList* get_Attachment()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ATTACHMENT_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_17 get_MailType()
		{
			return ((::Enum_3_ED790DAC948A65A9_17(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_MAILTYPE_OFFSET))(this);
		}

		::System::Void set_MailType(::Enum_3_ED790DAC948A65A9_17 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_17))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_MAILTYPE_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TITLE_OFFSET))(this, value);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_EXPIRETIME_OFFSET))(this, value);
		}

		::System::UInt32 get_TemplateId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TEMPLATEID_OFFSET))(this, value);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_CONTENT_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* get_ParaList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_PARALIST_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ID_OFFSET))(this, value);
		}

		::System::Int64 get_Time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TIME_OFFSET))(this, value);
		}

		::System::String* get_Sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_Sender(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_SENDER_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ClientMail* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ClientMail* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
