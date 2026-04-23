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
namespace Proto { class Tutorial; }
namespace System { class String; }

#define PROTO_GETTUTORIALSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19340870)
#define PROTO_GETTUTORIALSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x19340440)
#define PROTO_GETTUTORIALSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19340590)
#define PROTO_GETTUTORIALSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x193404A0)
#define PROTO_GETTUTORIALSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19340640)
#define PROTO_GETTUTORIALSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19340330)
#define PROTO_GETTUTORIALSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x19340480)
#define PROTO_GETTUTORIALSCRSP_GET_TUTORIALLIST_OFFSET UNITYSDK_OFFSET(0x19340470)
#define PROTO_GETTUTORIALSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19340A40)
#define PROTO_GETTUTORIALSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193409A0)
#define PROTO_GETTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19340360)
#define PROTO_GETTUTORIALSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x19340490)
#define PROTO_GETTUTORIALSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19340730)
#define PROTO_GETTUTORIALSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x19340790)
#define PROTO_GETTUTORIALSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19340B00)
#define PROTO_GETTUTORIALSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193403B0)
#define PROTO_GETTUTORIALSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x19340370)

namespace Proto
{
	inline static constexpr unsigned int GetTutorialScRsp_TypeDefinitionIndex = 33136;

	class GetTutorialScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::GetTutorialScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetTutorialScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetTutorialScRsp_TypeDefinitionIndex)->GetStaticField(0x63E60);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::Tutorial*>** StaticGet__repeated_tutorialList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::Tutorial*>**)Il2CppClass::FromTypeDefinitionIndex(GetTutorialScRsp_TypeDefinitionIndex)->GetStaticField(0x63E68);
		}
		// static const ::System::Int32 TutorialListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xA; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Tutorial*>* tutorialList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetTutorialScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetTutorialScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetTutorialScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetTutorialScRsp* Clone()
		{
			return ((::Proto::GetTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Tutorial*>* get_TutorialList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Tutorial*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_GET_TUTORIALLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetTutorialScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetTutorialScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
