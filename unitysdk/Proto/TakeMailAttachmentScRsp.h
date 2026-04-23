#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_544;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1935FE60)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1935F8D0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1935F990)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1935F960)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1935FAC0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1935F930)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET UNITYSDK_OFFSET(0x1935F950)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1935F6A0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1935F900)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET UNITYSDK_OFFSET(0x1935F920)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19360110)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1935FFF0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1935F6D0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1935F940)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1935F910)
#define PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1935FCB0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1935FD10)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x193602C0)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1935F770)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1935F6E0)

namespace Proto
{
	inline static constexpr unsigned int TakeMailAttachmentScRsp_TypeDefinitionIndex = 28725;

	class TakeMailAttachmentScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_544*>** StaticGet__repeated_failMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_544*>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x10770);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_succMailIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x10778);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::TakeMailAttachmentScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::TakeMailAttachmentScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x10780);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 SuccMailIdListFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 AttachmentFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 FailMailListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* succMailIdList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_544*>* failMailList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Proto::ItemList* attachment_; // 0x28
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TakeMailAttachmentScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_1_OFFSET))(this, other);
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

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_SuccMailIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET))(this);
		}

		::Proto::ItemList* get_Attachment()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_544*>* get_FailMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_544*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::TakeMailAttachmentScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TakeMailAttachmentScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
