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

#define PROTO_CLIENTMAIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0E36A0)
#define PROTO_CLIENTMAIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0E2BF0)
#define PROTO_CLIENTMAIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0E2E60)
#define PROTO_CLIENTMAIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0E2E30)
#define PROTO_CLIENTMAIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0E3030)
#define PROTO_CLIENTMAIL_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1A0E2D40)
#define PROTO_CLIENTMAIL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1A0E2C20)
#define PROTO_CLIENTMAIL_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1A0E2CA0)
#define PROTO_CLIENTMAIL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A0E2CC0)
#define PROTO_CLIENTMAIL_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1A0E2C80)
#define PROTO_CLIENTMAIL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1A0E2DB0)
#define PROTO_CLIENTMAIL_GET_PARALIST_OFFSET UNITYSDK_OFFSET(0x1A0E2DA0)
#define PROTO_CLIENTMAIL_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0E29C0)
#define PROTO_CLIENTMAIL_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x1A0E2CE0)
#define PROTO_CLIENTMAIL_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1A0E2D60)
#define PROTO_CLIENTMAIL_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1A0E2D80)
#define PROTO_CLIENTMAIL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A0E2DD0)
#define PROTO_CLIENTMAIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0E3FC0)
#define PROTO_CLIENTMAIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0E3D70)
#define PROTO_CLIENTMAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0E29F0)
#define PROTO_CLIENTMAIL_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1A0E2D50)
#define PROTO_CLIENTMAIL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1A0E2C30)
#define PROTO_CLIENTMAIL_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1A0E2CB0)
#define PROTO_CLIENTMAIL_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A0E2CD0)
#define PROTO_CLIENTMAIL_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1A0E2C90)
#define PROTO_CLIENTMAIL_SET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1A0E2DC0)
#define PROTO_CLIENTMAIL_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x1A0E2CF0)
#define PROTO_CLIENTMAIL_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1A0E2D70)
#define PROTO_CLIENTMAIL_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1A0E2D90)
#define PROTO_CLIENTMAIL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A0E2DE0)
#define PROTO_CLIENTMAIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0E33C0)
#define PROTO_CLIENTMAIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0E3420)
#define PROTO_CLIENTMAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E4280)
#define PROTO_CLIENTMAIL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0E2A60)
#define PROTO_CLIENTMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E2A00)

namespace Proto
{
	inline static constexpr unsigned int ClientMail_TypeDefinitionIndex = 28688;

	class ClientMail : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_paraList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClientMail_TypeDefinitionIndex)->GetStaticField(0x25300);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::ClientMail*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::ClientMail*>**)Il2CppClass::FromTypeDefinitionIndex(ClientMail_TypeDefinitionIndex)->GetStaticField(0x25308);
		}
		// static const ::System::Int32 ContentFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 IsReadFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 ExpireTimeFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 SenderFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 AttachmentFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 TemplateIdFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 TimeFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 ParaListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 MailTypeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 TitleFieldNumber = 0xB; // 0x0
		::Proto::ItemList* attachment_; // 0x10
		::System::String* title_; // 0x18
		::System::String* content_; // 0x20
		::System::String* sender_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* paraList_; // 0x38
		::System::Int64 time_; // 0x40
		::System::Int64 expireTime_; // 0x48
		::Enum_3_ED790DAC948A65A9_17 mailType_; // 0x50
		::System::UInt32 templateId_; // 0x54
		::System::Boolean isRead_; // 0x58
		::System::UInt32 id_; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ClientMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CTOR_1_OFFSET))(this, a1);
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

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ISREAD_OFFSET))(this);
		}

		::System::Void set_IsRead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ISREAD_OFFSET))(this, a1);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_EXPIRETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_Sender(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_SENDER_OFFSET))(this, a1);
		}

		::Proto::ItemList* get_Attachment()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ATTACHMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TemplateId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TEMPLATEID_OFFSET))(this, a1);
		}

		::System::Int64 get_Time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TIME_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* get_ParaList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_PARALIST_OFFSET))(this);
		}

		::Enum_3_ED790DAC948A65A9_17 get_MailType()
		{
			return ((::Enum_3_ED790DAC948A65A9_17(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_MAILTYPE_OFFSET))(this);
		}

		::System::Void set_MailType(::Enum_3_ED790DAC948A65A9_17 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_17))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_MAILTYPE_OFFSET))(this, a1);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TITLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::ClientMail* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ClientMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
