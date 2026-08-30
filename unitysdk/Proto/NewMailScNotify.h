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
namespace System { class String; }

#define PROTO_NEWMAILSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD492B0)
#define PROTO_NEWMAILSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD48EB0)
#define PROTO_NEWMAILSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD48FE0)
#define PROTO_NEWMAILSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD48EF0)
#define PROTO_NEWMAILSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD490D0)
#define PROTO_NEWMAILSCNOTIFY_GET_MAILIDLIST_OFFSET UNITYSDK_OFFSET(0x1DD48EE0)
#define PROTO_NEWMAILSCNOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DD48D90)
#define PROTO_NEWMAILSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD49370)
#define PROTO_NEWMAILSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD49320)
#define PROTO_NEWMAILSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD48DC0)
#define PROTO_NEWMAILSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD491D0)
#define PROTO_NEWMAILSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD49230)
#define PROTO_NEWMAILSCNOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD49510)
#define PROTO_NEWMAILSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD48E20)
#define PROTO_NEWMAILSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD48DD0)

namespace Proto
{
	inline static constexpr unsigned int NewMailScNotify_TypeDefinitionIndex = 29973;

	class NewMailScNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::NewMailScNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::NewMailScNotify*>**)Il2CppClass::FromTypeDefinitionIndex(NewMailScNotify_TypeDefinitionIndex)->GetStaticField(0x5C490);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_mailIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NewMailScNotify_TypeDefinitionIndex)->GetStaticField(0x5C498);
		}
		// static const ::System::Int32 MailIdListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* mailIdList_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::NewMailScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::NewMailScNotify*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::NewMailScNotify*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::NewMailScNotify*>*(*)())((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::NewMailScNotify* Clone()
		{
			return ((::Proto::NewMailScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_MailIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_GET_MAILIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::NewMailScNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::NewMailScNotify*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::NewMailScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::NewMailScNotify*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
