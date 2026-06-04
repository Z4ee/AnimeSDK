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
namespace System { class String; }

#define PROTO_MAPINFOGROUP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0FAEA0)
#define PROTO_MAPINFOGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0FA960)
#define PROTO_MAPINFOGROUP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0FAA40)
#define PROTO_MAPINFOGROUP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0FAA10)
#define PROTO_MAPINFOGROUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0FAB50)
#define PROTO_MAPINFOGROUP_GET_DESTORYMONSTERCONFIGIDLIST_OFFSET UNITYSDK_OFFSET(0x1A0FAA00)
#define PROTO_MAPINFOGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0FA9E0)
#define PROTO_MAPINFOGROUP_GET_ISNEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x1A0FA9C0)
#define PROTO_MAPINFOGROUP_GET_MODIFYTIME_OFFSET UNITYSDK_OFFSET(0x1A0FA990)
#define PROTO_MAPINFOGROUP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0FA7A0)
#define PROTO_MAPINFOGROUP_GET_PROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x1A0FA9B0)
#define PROTO_MAPINFOGROUP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0FB190)
#define PROTO_MAPINFOGROUP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0FB0E0)
#define PROTO_MAPINFOGROUP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0FA7D0)
#define PROTO_MAPINFOGROUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0FA9F0)
#define PROTO_MAPINFOGROUP_SET_ISNEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x1A0FA9D0)
#define PROTO_MAPINFOGROUP_SET_MODIFYTIME_OFFSET UNITYSDK_OFFSET(0x1A0FA9A0)
#define PROTO_MAPINFOGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0FACC0)
#define PROTO_MAPINFOGROUP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0FAD20)
#define PROTO_MAPINFOGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0FB2F0)
#define PROTO_MAPINFOGROUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0FA850)
#define PROTO_MAPINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FA7E0)

namespace Proto
{
	inline static constexpr unsigned int MapInfoGroup_TypeDefinitionIndex = 32293;

	class MapInfoGroup : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_destoryMonsterConfigIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MapInfoGroup_TypeDefinitionIndex)->GetStaticField(0x440E0);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet__map_propertyMap_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MapInfoGroup_TypeDefinitionIndex)->GetStaticField(0x440E8);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::MapInfoGroup*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MapInfoGroup*>**)Il2CppClass::FromTypeDefinitionIndex(MapInfoGroup_TypeDefinitionIndex)->GetStaticField(0x440F0);
		}
		// static const ::System::Int32 ModifyTimeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 PropertyMapFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 IsNeedRefreshFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 GroupIdFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 DestoryMonsterConfigIdListFieldNumber = 0x5; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* propertyMap_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* destoryMonsterConfigIdList_; // 0x20
		::System::Boolean isNeedRefresh_; // 0x28
		::System::UInt32 groupId_; // 0x2C
		::System::Int64 modifyTime_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MapInfoGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MapInfoGroup*))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MapInfoGroup*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MapInfoGroup*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MapInfoGroup* Clone()
		{
			return ((::Proto::MapInfoGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_CLONE_OFFSET))(this);
		}

		::System::Int64 get_ModifyTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GET_MODIFYTIME_OFFSET))(this);
		}

		::System::Void set_ModifyTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_SET_MODIFYTIME_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_PropertyMap()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GET_PROPERTYMAP_OFFSET))(this);
		}

		::System::Boolean get_IsNeedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GET_ISNEEDREFRESH_OFFSET))(this);
		}

		::System::Void set_IsNeedRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_SET_ISNEEDREFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_SET_GROUPID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_DestoryMonsterConfigIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GET_DESTORYMONSTERCONFIGIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MapInfoGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MapInfoGroup*))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MapInfoGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MapInfoGroup*))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
