#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ClientMail; }
namespace System { class String; }

#define PROTO_GETMAILSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1827FAD0)
#define PROTO_GETMAILSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1827F4D0)
#define PROTO_GETMAILSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1827F5D0)
#define PROTO_GETMAILSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1827F5A0)
#define PROTO_GETMAILSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1827F6F0)
#define PROTO_GETMAILSCRSP_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x1827F530)
#define PROTO_GETMAILSCRSP_GET_MAILLIST_OFFSET UNITYSDK_OFFSET(0x1827F550)
#define PROTO_GETMAILSCRSP_GET_NOTICEMAILLIST_OFFSET UNITYSDK_OFFSET(0x1827F500)
#define PROTO_GETMAILSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827F560)
#define PROTO_GETMAILSCRSP_GET_START_OFFSET UNITYSDK_OFFSET(0x1827F580)
#define PROTO_GETMAILSCRSP_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x1827F510)
#define PROTO_GETMAILSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1827FE80)
#define PROTO_GETMAILSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1827FD50)
#define PROTO_GETMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1827F370)
#define PROTO_GETMAILSCRSP_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x1827F540)
#define PROTO_GETMAILSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827F570)
#define PROTO_GETMAILSCRSP_SET_START_OFFSET UNITYSDK_OFFSET(0x1827F590)
#define PROTO_GETMAILSCRSP_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x1827F520)
#define PROTO_GETMAILSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1827F8B0)
#define PROTO_GETMAILSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1827F910)
#define PROTO_GETMAILSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1827FFD0)
#define PROTO_GETMAILSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1827F3E0)
#define PROTO_GETMAILSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1827F380)

namespace Proto
{
	inline static constexpr unsigned int GetMailScRsp_TypeDefinitionIndex = 25286;

	class GetMailScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>** StaticGet__repeated_mailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>**)Il2CppClass::FromTypeDefinitionIndex(GetMailScRsp_TypeDefinitionIndex)->GetStaticField(0x1A630);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>** StaticGet__repeated_noticeMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ClientMail*>**)Il2CppClass::FromTypeDefinitionIndex(GetMailScRsp_TypeDefinitionIndex)->GetStaticField(0x1A638);
		}
		// static const ::System::Int32 NoticeMailListFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 TotalNumFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 IsEndFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 MailListFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 StartFieldNumber = 0x5; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* mailList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* noticeMailList_; // 0x20
		::System::UInt32 totalNum_; // 0x28
		::System::Boolean isEnd_; // 0x2C
		::System::UInt32 retcode_; // 0x30
		::System::UInt32 start_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetMailScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetMailScRsp* Clone()
		{
			return ((::Proto::GetMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* get_NoticeMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_NOTICEMAILLIST_OFFSET))(this);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_TOTALNUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_ISEND_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* get_MailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_MAILLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_Start()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_START_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetMailScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetMailScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
