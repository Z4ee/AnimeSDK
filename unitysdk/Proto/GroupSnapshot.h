#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ActiveMCVKeySnapshot; }
namespace Proto { class EntitySnapshot; }
namespace System { class String; }

#define PROTO_GROUPSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19342040)
#define PROTO_GROUPSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19341920)
#define PROTO_GROUPSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19341A50)
#define PROTO_GROUPSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x193419F0)
#define PROTO_GROUPSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19341BA0)
#define PROTO_GROUPSNAPSHOT_GET_ACTIVEMCVKEYLIST_OFFSET UNITYSDK_OFFSET(0x193419E0)
#define PROTO_GROUPSNAPSHOT_GET_ACTIVESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x193419D0)
#define PROTO_GROUPSNAPSHOT_GET_ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x193419B0)
#define PROTO_GROUPSNAPSHOT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x19341970)
#define PROTO_GROUPSNAPSHOT_GET_GROUPSTATE_OFFSET UNITYSDK_OFFSET(0x19341990)
#define PROTO_GROUPSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x193416E0)
#define PROTO_GROUPSNAPSHOT_GET_PROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x193419C0)
#define PROTO_GROUPSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193423B0)
#define PROTO_GROUPSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19342260)
#define PROTO_GROUPSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19341740)
#define PROTO_GROUPSNAPSHOT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x19341980)
#define PROTO_GROUPSNAPSHOT_SET_GROUPSTATE_OFFSET UNITYSDK_OFFSET(0x193419A0)
#define PROTO_GROUPSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19341E50)
#define PROTO_GROUPSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19341EB0)
#define PROTO_GROUPSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x193425E0)
#define PROTO_GROUPSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19341830)
#define PROTO_GROUPSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19341750)

namespace Proto
{
	inline static constexpr unsigned int GroupSnapshot_TypeDefinitionIndex = 24531;

	class GroupSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::ActiveMCVKeySnapshot*>** StaticGet__repeated_activeMcvKeyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ActiveMCVKeySnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(GroupSnapshot_TypeDefinitionIndex)->GetStaticField(0x63F60);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet__map_propertyMap_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GroupSnapshot_TypeDefinitionIndex)->GetStaticField(0x63F68);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(GroupSnapshot_TypeDefinitionIndex)->GetStaticField(0x63F70);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::EntitySnapshot*>** StaticGet__repeated_entityList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::EntitySnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(GroupSnapshot_TypeDefinitionIndex)->GetStaticField(0x63F78);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_activeSubmissionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GroupSnapshot_TypeDefinitionIndex)->GetStaticField(0x63F80);
		}
		// static const ::System::Int32 GroupIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 GroupStateFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 EntityListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 PropertyMapFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 ActiveSubmissionListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 ActiveMcvKeyListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* propertyMap_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ActiveMCVKeySnapshot*>* activeMcvKeyList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EntitySnapshot*>* entityList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* activeSubmissionList_; // 0x30
		::System::UInt32 groupState_; // 0x38
		::System::UInt32 groupId_; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GroupSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GroupSnapshot* Clone()
		{
			return ((::Proto::GroupSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_GROUPSTATE_OFFSET))(this);
		}

		::System::Void set_GroupState(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_SET_GROUPSTATE_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EntitySnapshot*>* get_EntityList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::EntitySnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_ENTITYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_PropertyMap()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_PROPERTYMAP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ActiveSubmissionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_ACTIVESUBMISSIONLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ActiveMCVKeySnapshot*>* get_ActiveMcvKeyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ActiveMCVKeySnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_ACTIVEMCVKEYLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GroupSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GroupSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
