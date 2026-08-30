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

#define PROTO_DELMAILSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05A400)
#define PROTO_DELMAILSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E059F70)
#define PROTO_DELMAILSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05A0D0)
#define PROTO_DELMAILSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E059FD0)
#define PROTO_DELMAILSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05A1C0)
#define PROTO_DELMAILSCRSP_GET_IDLIST_OFFSET UNITYSDK_OFFSET(0x1E059FA0)
#define PROTO_DELMAILSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E059E50)
#define PROTO_DELMAILSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1E059FB0)
#define PROTO_DELMAILSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05A540)
#define PROTO_DELMAILSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05A4F0)
#define PROTO_DELMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E059E80)
#define PROTO_DELMAILSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1E059FC0)
#define PROTO_DELMAILSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05A2C0)
#define PROTO_DELMAILSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05A320)
#define PROTO_DELMAILSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05A6F0)
#define PROTO_DELMAILSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E059EE0)
#define PROTO_DELMAILSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E059E90)

namespace Proto
{
	inline static constexpr unsigned int DelMailScRsp_TypeDefinitionIndex = 29965;

	class DelMailScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_idList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DelMailScRsp_TypeDefinitionIndex)->GetStaticField(0x59900);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::DelMailScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::DelMailScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(DelMailScRsp_TypeDefinitionIndex)->GetStaticField(0x59908);
		}
		// static const ::System::Int32 IdListFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x7; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* idList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DelMailScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DelMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::DelMailScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::DelMailScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DelMailScRsp* Clone()
		{
			return ((::Proto::DelMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_IdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GET_IDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::DelMailScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DelMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DelMailScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DelMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
