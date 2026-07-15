#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class VectorSnapshot; }
namespace System { class String; }

#define PROTO_ROTATIONMAPINFOSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEEE540)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEDD9A0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEEE1D0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEEDF80)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEDDF50)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPPOS_OFFSET UNITYSDK_OFFSET(0x1BEEDF40)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPROT_OFFSET UNITYSDK_OFFSET(0x1BEEDF60)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BEEDDD0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEEE5D0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEDE3B0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEEDE30)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPPOS_OFFSET UNITYSDK_OFFSET(0x1BEEDF50)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPROT_OFFSET UNITYSDK_OFFSET(0x1BEEDF70)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEEE400)
#define PROTO_ROTATIONMAPINFOSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEEE460)
#define PROTO_ROTATIONMAPINFOSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEEE780)
#define PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEEDE40)
#define PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDE3A0)

namespace Proto
{
	inline static constexpr unsigned int RotationMapInfoSnapshot_TypeDefinitionIndex = 24914;

	class RotationMapInfoSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::RotationMapInfoSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::RotationMapInfoSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(RotationMapInfoSnapshot_TypeDefinitionIndex)->GetStaticField(0x3FA90);
		}
		// static const ::System::Int32 MapPosFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 MapRotFieldNumber = 0x2; // 0x0
		::Proto::VectorSnapshot* mapPos_; // 0x10
		::Proto::VectorSnapshot* mapRot_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::RotationMapInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::RotationMapInfoSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::RotationMapInfoSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_GET_PARSER_OFFSET))();
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

		::System::Void set_MapPos(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPPOS_OFFSET))(this, a1);
		}

		::Proto::VectorSnapshot* get_MapRot()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_GET_MAPROT_OFFSET))(this);
		}

		::System::Void set_MapRot(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_SET_MAPROT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::RotationMapInfoSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::RotationMapInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
