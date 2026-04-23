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
namespace Proto { class MissionCustomValueSnapshot; }
namespace System { class String; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19349400)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x19345820)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19349240)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x19349130)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19345C30)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x19349120)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19349000)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193494A0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193460B0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19349060)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193492F0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_WRITETO_OFFSET UNITYSDK_OFFSET(0x19349350)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x19349580)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19349070)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19346060)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshotList_TypeDefinitionIndex = 24537;

	class MissionCustomValueSnapshotList : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>**)Il2CppClass::FromTypeDefinitionIndex(MissionCustomValueSnapshotList_TypeDefinitionIndex)->GetStaticField(0x64500);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::MissionCustomValueSnapshot*>** StaticGet__repeated_customValueList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MissionCustomValueSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MissionCustomValueSnapshotList_TypeDefinitionIndex)->GetStaticField(0x64508);
		}
		// static const ::System::Int32 CustomValueListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MissionCustomValueSnapshot*>* customValueList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MissionCustomValueSnapshotList* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshotList* Clone()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MissionCustomValueSnapshot*>* get_CustomValueList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MissionCustomValueSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_CUSTOMVALUELIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MissionCustomValueSnapshotList* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MissionCustomValueSnapshotList* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
