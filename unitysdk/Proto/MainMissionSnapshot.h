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

#define PROTO_MAINMISSIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD43060)
#define PROTO_MAINMISSIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD42B50)
#define PROTO_MAINMISSIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD42D60)
#define PROTO_MAINMISSIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD42BD0)
#define PROTO_MAINMISSIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD42E90)
#define PROTO_MAINMISSIONSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DD42BA0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DD429D0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1DD42BC0)
#define PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD43210)
#define PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD43170)
#define PROTO_MAINMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD42A30)
#define PROTO_MAINMISSIONSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DD42BB0)
#define PROTO_MAINMISSIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD42F00)
#define PROTO_MAINMISSIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD42F60)
#define PROTO_MAINMISSIONSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD433E0)
#define PROTO_MAINMISSIONSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD42A90)
#define PROTO_MAINMISSIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD42A40)

namespace Proto
{
	inline static constexpr unsigned int MainMissionSnapshot_TypeDefinitionIndex = 25495;

	class MainMissionSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x5BD30);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::SubMissionSnapshot*>** StaticGet__repeated_subMissionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SubMissionSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x5BD38);
		}
		// static const ::System::Int32 MainMissionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 SubMissionListFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>* subMissionList_; // 0x18
		::System::UInt32 mainMissionId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_MainMissionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>* get_SubMissionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_SUBMISSIONLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
