#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_629;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEF82E0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEF7C40)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEF7D00)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEF7CD0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEF7F00)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1BEF7C70)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET UNITYSDK_OFFSET(0x1BEF7CB0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BEF79A0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BEF7C90)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET UNITYSDK_OFFSET(0x1BEF7CC0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEF8630)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEF8450)
#define PROTO_TAKEMAILATTACHMENTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEF79D0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1BEF7C80)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BEF7CA0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEF80E0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEF8140)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF87E0)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEF7A70)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF79E0)

namespace Proto
{
	inline static constexpr unsigned int TakeMailAttachmentScRsp_TypeDefinitionIndex = 29238;

	class TakeMailAttachmentScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_succMailIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x40AC0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_629*>** StaticGet__repeated_failMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_629*>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x40AC8);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::TakeMailAttachmentScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::TakeMailAttachmentScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x40AD0);
		}
		// static const ::System::Int32 AttachmentFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 FailMailListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 SuccMailIdListFieldNumber = 0xA; // 0x0
		::Proto::ItemList* attachment_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* succMailIdList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_629*>* failMailList_; // 0x28
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TakeMailAttachmentScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::TakeMailAttachmentScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::TakeMailAttachmentScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TakeMailAttachmentScRsp* Clone()
		{
			return ((::Proto::TakeMailAttachmentScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* get_Attachment()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_629*>* get_FailMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_629*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_SuccMailIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::TakeMailAttachmentScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TakeMailAttachmentScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
