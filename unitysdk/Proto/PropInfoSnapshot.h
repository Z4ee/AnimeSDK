#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_PROPINFOSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182957E0)
#define PROTO_PROPINFOSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x18295570)
#define PROTO_PROPINFOSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182956A0)
#define PROTO_PROPINFOSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18295600)
#define PROTO_PROPINFOSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182956F0)
#define PROTO_PROPINFOSNAPSHOT_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0x182955E0)
#define PROTO_PROPINFOSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182958A0)
#define PROTO_PROPINFOSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18295870)
#define PROTO_PROPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18295520)
#define PROTO_PROPINFOSNAPSHOT_SET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0x182955F0)
#define PROTO_PROPINFOSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18295720)
#define PROTO_PROPINFOSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x18295780)
#define PROTO_PROPINFOSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18295540)
#define PROTO_PROPINFOSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18295530)

namespace Proto
{
	inline static constexpr unsigned int PropInfoSnapshot_TypeDefinitionIndex = 23216;

	class PropInfoSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 PropStateFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 propState_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PropInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PropInfoSnapshot* Clone()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_PropState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_GET_PROPSTATE_OFFSET))(this);
		}

		::System::Void set_PropState(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_SET_PROPSTATE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PropInfoSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PropInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
