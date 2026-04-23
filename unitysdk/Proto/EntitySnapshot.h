#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_22.h"
#include "unitysdk/Proto/EntitySnapshot_EntityOneofCase.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MotionInfoSnapshot; }
namespace Proto { class PropInfoSnapshot; }
namespace System { class String; }

#define PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19335110)
#define PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x19334BC0)
#define PROTO_ENTITYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19334AE0)
#define PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19334C30)
#define PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x19334BD0)
#define PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19334DB0)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x19334BB0)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x19334B30)
#define PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x19334B50)
#define PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x19334B90)
#define PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x19334B70)
#define PROTO_ENTITYSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19334790)
#define PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET UNITYSDK_OFFSET(0x19334A60)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193356C0)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193353A0)
#define PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193347F0)
#define PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x19334B40)
#define PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x19334B60)
#define PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x19334BA0)
#define PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x19334B80)
#define PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET UNITYSDK_OFFSET(0x19334AC0)
#define PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19334F60)
#define PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19334FC0)
#define PROTO_ENTITYSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19335860)
#define PROTO_ENTITYSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19334810)
#define PROTO_ENTITYSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19334800)

namespace Proto
{
	inline static constexpr unsigned int EntitySnapshot_TypeDefinitionIndex = 24528;

	class EntitySnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(EntitySnapshot_TypeDefinitionIndex)->GetStaticField(0x63650);
		}
		// static const ::System::Int32 EntityIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 InstanceIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 MotionInfoFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 MapObjectTypeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 PropFieldNumber = 0x5; // 0x0
		::System::Object* entity_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::MotionInfoSnapshot* motionInfo_; // 0x20
		::Enum_3_0A3761FE34514D6C_22 mapObjectType_; // 0x28
		::System::UInt32 instanceId_; // 0x2C
		::Proto::EntitySnapshot_EntityOneofCase entityCase_; // 0x30
		::System::UInt32 entityId_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EntitySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EntitySnapshot* Clone()
		{
			return ((::Proto::EntitySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET))(this, value);
		}

		::Proto::MotionInfoSnapshot* get_MotionInfo()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET))(this);
		}

		::System::Void set_MotionInfo(::Proto::MotionInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_22 get_MapObjectType()
		{
			return ((::Enum_3_0A3761FE34514D6C_22(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET))(this);
		}

		::System::Void set_MapObjectType(::Enum_3_0A3761FE34514D6C_22 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_22))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET))(this, value);
		}

		::Proto::PropInfoSnapshot* get_Prop()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET))(this);
		}

		::System::Void set_Prop(::Proto::PropInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET))(this, value);
		}

		::Proto::EntitySnapshot_EntityOneofCase get_EntityCase()
		{
			return ((::Proto::EntitySnapshot_EntityOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET))(this);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::EntitySnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EntitySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
