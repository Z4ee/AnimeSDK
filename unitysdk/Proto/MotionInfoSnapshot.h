#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class VectorSnapshot; }
namespace System { class String; }

#define PROTO_MOTIONINFOSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1828E3E0)
#define PROTO_MOTIONINFOSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1828DEF0)
#define PROTO_MOTIONINFOSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1828E190)
#define PROTO_MOTIONINFOSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1828E080)
#define PROTO_MOTIONINFOSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1828E270)
#define PROTO_MOTIONINFOSNAPSHOT_GET_POS_OFFSET UNITYSDK_OFFSET(0x1828E040)
#define PROTO_MOTIONINFOSNAPSHOT_GET_ROT_OFFSET UNITYSDK_OFFSET(0x1828E060)
#define PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1828E5A0)
#define PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1828E470)
#define PROTO_MOTIONINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1828DDD0)
#define PROTO_MOTIONINFOSNAPSHOT_SET_POS_OFFSET UNITYSDK_OFFSET(0x1828E050)
#define PROTO_MOTIONINFOSNAPSHOT_SET_ROT_OFFSET UNITYSDK_OFFSET(0x1828E070)
#define PROTO_MOTIONINFOSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1828E300)
#define PROTO_MOTIONINFOSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1828E360)
#define PROTO_MOTIONINFOSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1828DDF0)
#define PROTO_MOTIONINFOSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1828DDE0)

namespace Proto
{
	inline static constexpr unsigned int MotionInfoSnapshot_TypeDefinitionIndex = 23213;

	class MotionInfoSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 PosFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 RotFieldNumber = 0x2; // 0x0
		::Proto::VectorSnapshot* pos_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::VectorSnapshot* rot_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MotionInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MotionInfoSnapshot* Clone()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Proto::VectorSnapshot* get_Pos()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::Proto::VectorSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_SET_POS_OFFSET))(this, value);
		}

		::Proto::VectorSnapshot* get_Rot()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GET_ROT_OFFSET))(this);
		}

		::System::Void set_Rot(::Proto::VectorSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_SET_ROT_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MotionInfoSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MotionInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
