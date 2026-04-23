#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MissionCustomValueSnapshotList; }
namespace System { class String; }

#define PROTO_MAINMISSIONMCVSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19345E00)
#define PROTO_MAINMISSIONMCVSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19345870)
#define PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19345A50)
#define PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x19345970)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19345B00)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x19345950)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x19345930)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19345720)
#define PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19346150)
#define PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19345ED0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19345780)
#define PROTO_MAINMISSIONMCVSNAPSHOT_SET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x19345960)
#define PROTO_MAINMISSIONMCVSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x19345940)
#define PROTO_MAINMISSIONMCVSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19345D20)
#define PROTO_MAINMISSIONMCVSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19345D80)
#define PROTO_MAINMISSIONMCVSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19346240)
#define PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193457A0)
#define PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19345790)

namespace Proto
{
	inline static constexpr unsigned int MainMissionMcvSnapshot_TypeDefinitionIndex = 24539;

	class MainMissionMcvSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionMcvSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MainMissionMcvSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionMcvSnapshot_TypeDefinitionIndex)->GetStaticField(0x64270);
		}
		// static const ::System::Int32 MainMissionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 CustomValueListFieldNumber = 0x2; // 0x0
		::Proto::MissionCustomValueSnapshotList* customValueList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MainMissionMcvSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionMcvSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MainMissionMcvSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MainMissionMcvSnapshot* Clone()
		{
			return ((::Proto::MainMissionMcvSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, value);
		}

		::Proto::MissionCustomValueSnapshotList* get_CustomValueList()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_CUSTOMVALUELIST_OFFSET))(this);
		}

		::System::Void set_CustomValueList(::Proto::MissionCustomValueSnapshotList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_SET_CUSTOMVALUELIST_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MainMissionMcvSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MainMissionMcvSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
