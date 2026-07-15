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
namespace Proto { class TutorialGuide; }
namespace System { class String; }

#define PROTO_GETTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF86800)
#define PROTO_GETTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF86340)
#define PROTO_GETTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF864F0)
#define PROTO_GETTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF863A0)
#define PROTO_GETTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF86620)
#define PROTO_GETTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BF86230)
#define PROTO_GETTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BF86370)
#define PROTO_GETTUTORIALGUIDESCRSP_GET_TUTORIALGUIDELIST_OFFSET UNITYSDK_OFFSET(0x1BF86390)
#define PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF869B0)
#define PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF86910)
#define PROTO_GETTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF86260)
#define PROTO_GETTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BF86380)
#define PROTO_GETTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF86690)
#define PROTO_GETTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF866F0)
#define PROTO_GETTUTORIALGUIDESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF86B70)
#define PROTO_GETTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF862B0)
#define PROTO_GETTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86270)

namespace Proto
{
	inline static constexpr unsigned int GetTutorialGuideScRsp_TypeDefinitionIndex = 33629;

	class GetTutorialGuideScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::TutorialGuide*>** StaticGet__repeated_tutorialGuideList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::TutorialGuide*>**)Il2CppClass::FromTypeDefinitionIndex(GetTutorialGuideScRsp_TypeDefinitionIndex)->GetStaticField(0x3CC20);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetTutorialGuideScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetTutorialGuideScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetTutorialGuideScRsp_TypeDefinitionIndex)->GetStaticField(0x3CC28);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 TutorialGuideListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::TutorialGuide*>* tutorialGuideList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetTutorialGuideScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetTutorialGuideScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetTutorialGuideScRsp* Clone()
		{
			return ((::Proto::GetTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::TutorialGuide*>* get_TutorialGuideList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::TutorialGuide*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GET_TUTORIALGUIDELIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetTutorialGuideScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
