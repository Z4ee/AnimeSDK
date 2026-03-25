#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SUBMISSIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1829D5B0)
#define PROTO_SUBMISSIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1829D340)
#define PROTO_SUBMISSIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1829D470)
#define PROTO_SUBMISSIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1829D3D0)
#define PROTO_SUBMISSIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1829D4C0)
#define PROTO_SUBMISSIONSNAPSHOT_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1829D3B0)
#define PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1829D670)
#define PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1829D640)
#define PROTO_SUBMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1829D2F0)
#define PROTO_SUBMISSIONSNAPSHOT_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1829D3C0)
#define PROTO_SUBMISSIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1829D4F0)
#define PROTO_SUBMISSIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1829D550)
#define PROTO_SUBMISSIONSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1829D310)
#define PROTO_SUBMISSIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1829D300)

namespace Proto
{
	inline static constexpr unsigned int SubMissionSnapshot_TypeDefinitionIndex = 23224;

	class SubMissionSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 SubMissionIdFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 subMissionId_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SubMissionSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SubMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SubMissionSnapshot* Clone()
		{
			return ((::Proto::SubMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_SubMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_GET_SUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_SubMissionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_SET_SUBMISSIONID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SubMissionSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SubMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SubMissionSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SubMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
