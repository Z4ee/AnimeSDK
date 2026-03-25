#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DIALOGSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182781F0)
#define PROTO_DIALOGSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x18277F30)
#define PROTO_DIALOGSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18278080)
#define PROTO_DIALOGSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18277FE0)
#define PROTO_DIALOGSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182780E0)
#define PROTO_DIALOGSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x18277FC0)
#define PROTO_DIALOGSNAPSHOT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18277FA0)
#define PROTO_DIALOGSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18278340)
#define PROTO_DIALOGSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18278300)
#define PROTO_DIALOGSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18277EE0)
#define PROTO_DIALOGSNAPSHOT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x18277FD0)
#define PROTO_DIALOGSNAPSHOT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18277FB0)
#define PROTO_DIALOGSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18278110)
#define PROTO_DIALOGSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x18278170)
#define PROTO_DIALOGSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18277F00)
#define PROTO_DIALOGSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18277EF0)

namespace Proto
{
	inline static constexpr unsigned int DialogSnapshot_TypeDefinitionIndex = 23231;

	class DialogSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 GroupIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 EntityIdFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 groupId_; // 0x18
		::System::UInt32 entityId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DialogSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DialogSnapshot* Clone()
		{
			return ((::Proto::DialogSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::DialogSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DialogSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
