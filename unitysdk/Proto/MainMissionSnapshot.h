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
namespace Proto { class SubMissionSnapshot; }
namespace System { class String; }

#define PROTO_MAINMISSIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193469D0)
#define PROTO_MAINMISSIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19346560)
#define PROTO_MAINMISSIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19346700)
#define PROTO_MAINMISSIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x193465E0)
#define PROTO_MAINMISSIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193467B0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x193465B0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x193463E0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x193465D0)
#define PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19346B80)
#define PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19346AE0)
#define PROTO_MAINMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19346440)
#define PROTO_MAINMISSIONSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x193465C0)
#define PROTO_MAINMISSIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193468A0)
#define PROTO_MAINMISSIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19346900)
#define PROTO_MAINMISSIONSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19346C60)
#define PROTO_MAINMISSIONSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193464A0)
#define PROTO_MAINMISSIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19346450)

namespace Proto
{
	inline static constexpr unsigned int MainMissionSnapshot_TypeDefinitionIndex = 24543;

	class MainMissionSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x642A0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::SubMissionSnapshot*>** StaticGet__repeated_subMissionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SubMissionSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x642A8);
		}
		// static const ::System::Int32 MainMissionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 SubMissionListFieldNumber = 0x2; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>* subMissionList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MainMissionSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MainMissionSnapshot* Clone()
		{
			return ((::Proto::MainMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>* get_SubMissionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_SUBMISSIONLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MainMissionSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MainMissionSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
