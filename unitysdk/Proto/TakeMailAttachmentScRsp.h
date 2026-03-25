#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_511;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1829F180)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1829EB30)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1829EBF0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1829EBC0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1829ED20)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1829EBA0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET UNITYSDK_OFFSET(0x1829EB80)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1829EB60)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET UNITYSDK_OFFSET(0x1829EB90)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1829F4C0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1829F2F0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1829E8C0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1829EBB0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1829EB70)
#define PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1829EFF0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1829F050)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1829F670)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1829E960)
#define PROTO_TAKEMAILATTACHMENTSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1829E8D0)

namespace Proto
{
	inline static constexpr unsigned int TakeMailAttachmentScRsp_TypeDefinitionIndex = 25293;

	class TakeMailAttachmentScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_511*>** StaticGet__repeated_failMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_511*>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x1E230);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_succMailIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp_TypeDefinitionIndex)->GetStaticField(0x1E238);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 FailMailListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 SuccMailIdListFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 AttachmentFieldNumber = 0xF; // 0x0
		::Proto::ItemList* attachment_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_511*>* failMailList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* succMailIdList_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
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

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_511*>* get_FailMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_511*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET))(this);
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
