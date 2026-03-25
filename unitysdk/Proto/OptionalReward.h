#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_OPTIONALREWARD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1828EF60)
#define PROTO_OPTIONALREWARD_CLONE_OFFSET UNITYSDK_OFFSET(0x1828ECA0)
#define PROTO_OPTIONALREWARD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1828EDF0)
#define PROTO_OPTIONALREWARD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1828ED50)
#define PROTO_OPTIONALREWARD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1828EE50)
#define PROTO_OPTIONALREWARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1828ED10)
#define PROTO_OPTIONALREWARD_GET_OPTIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x1828ED30)
#define PROTO_OPTIONALREWARD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1828F0B0)
#define PROTO_OPTIONALREWARD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1828F070)
#define PROTO_OPTIONALREWARD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1828EC50)
#define PROTO_OPTIONALREWARD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1828ED20)
#define PROTO_OPTIONALREWARD_SET_OPTIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x1828ED40)
#define PROTO_OPTIONALREWARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1828EE80)
#define PROTO_OPTIONALREWARD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1828EEE0)
#define PROTO_OPTIONALREWARD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1828EC70)
#define PROTO_OPTIONALREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1828EC60)

namespace Proto
{
	inline static constexpr unsigned int OptionalReward_TypeDefinitionIndex = 23512;

	class OptionalReward : public ::System::Object
	{
	public:
		// static const ::System::Int32 LevelFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 OptionalRewardIdFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 optionalRewardId_; // 0x18
		::System::UInt32 level_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::OptionalReward* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::OptionalReward*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::OptionalReward* Clone()
		{
			return ((::Proto::OptionalReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_OptionalRewardId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GET_OPTIONALREWARDID_OFFSET))(this);
		}

		::System::Void set_OptionalRewardId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_SET_OPTIONALREWARDID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::OptionalReward* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::OptionalReward*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::OptionalReward* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::OptionalReward*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
