#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ACTIVEMCVKEYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18271DD0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x182719C0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18271BA0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18271AD0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18271C30)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x18271A30)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x18271A50)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18271FD0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18271F60)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18271960)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x18271A40)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x18271A60)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18271CE0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x18271D40)
#define PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18271980)
#define PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18271970)

namespace Proto
{
	inline static constexpr unsigned int ActiveMCVKeySnapshot_TypeDefinitionIndex = 23215;

	class ActiveMCVKeySnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 MainMissionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 McvKeyFieldNumber = 0x2; // 0x0
		::System::String* mcvKey_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ActiveMCVKeySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ActiveMCVKeySnapshot* Clone()
		{
			return ((::Proto::ActiveMCVKeySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, value);
		}

		::System::String* get_McvKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MCVKEY_OFFSET))(this);
		}

		::System::Void set_McvKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MCVKEY_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ActiveMCVKeySnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ActiveMCVKeySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
