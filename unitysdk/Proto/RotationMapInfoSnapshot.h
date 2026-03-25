#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class VectorSnapshot; }
namespace System { class String; }

#define PROTO_ROTATIONMAPINFOSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18297560)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1828A5E0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182973A0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18297290)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1828AA60)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPPOS_OFFSET UNITYSDK_OFFSET(0x18297250)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPROT_OFFSET UNITYSDK_OFFSET(0x18297270)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182975F0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1828AE20)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18297140)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPPOS_OFFSET UNITYSDK_OFFSET(0x18297260)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPROT_OFFSET UNITYSDK_OFFSET(0x18297280)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18297480)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x182974E0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18297150)
#define PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1828AE10)

namespace Proto
{
	inline static constexpr unsigned int RotationMapInfoSnapshot_TypeDefinitionIndex = 23229;

	class RotationMapInfoSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 MapPosFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 MapRotFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::VectorSnapshot* mapRot_; // 0x18
		::Proto::VectorSnapshot* mapPos_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::RotationMapInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::RotationMapInfoSnapshot* Clone()
		{
			return ((::Proto::RotationMapInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Proto::VectorSnapshot* get_MapPos()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPPOS_OFFSET))(this);
		}

		::System::Void set_MapPos(::Proto::VectorSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPPOS_OFFSET))(this, value);
		}

		::Proto::VectorSnapshot* get_MapRot()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPROT_OFFSET))(this);
		}

		::System::Void set_MapRot(::Proto::VectorSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPROT_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::RotationMapInfoSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::RotationMapInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
