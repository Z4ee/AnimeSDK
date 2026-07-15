#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_92;
class Class_1_24BE2DDB450DE83C;
class Class_1_70D5AA87C5BBA20B_8;
class Class_1_D17272E82AE804C2_1063;
class Class_1_FF220487FAB45279_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MapInfoGroup; }
namespace System { class String; }

#define PROTO_SCENEMAPINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEF21C0)
#define PROTO_SCENEMAPINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEF1350)
#define PROTO_SCENEMAPINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEF1520)
#define PROTO_SCENEMAPINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEF14F0)
#define PROTO_SCENEMAPINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEF1800)
#define PROTO_SCENEMAPINFO_GET_CHESTLIST_OFFSET UNITYSDK_OFFSET(0x1BEF14E0)
#define PROTO_SCENEMAPINFO_GET_CHESTMONSTERLIST_OFFSET UNITYSDK_OFFSET(0x1BEF14D0)
#define PROTO_SCENEMAPINFO_GET_CHESTMONSTERNUM_OFFSET UNITYSDK_OFFSET(0x1BEF13C0)
#define PROTO_SCENEMAPINFO_GET_CLIENTGROUPMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x1BEF1430)
#define PROTO_SCENEMAPINFO_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1BEF1400)
#define PROTO_SCENEMAPINFO_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x1BEF1380)
#define PROTO_SCENEMAPINFO_GET_FINISHEDCHESTMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x1BEF1490)
#define PROTO_SCENEMAPINFO_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1BEF1450)
#define PROTO_SCENEMAPINFO_GET_FLOORSAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x1BEF1420)
#define PROTO_SCENEMAPINFO_GET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x1BEF1470)
#define PROTO_SCENEMAPINFO_GET_LIGHTENSECTIONLIST_OFFSET UNITYSDK_OFFSET(0x1BEF14C0)
#define PROTO_SCENEMAPINFO_GET_MAPINFOPROPLIST_OFFSET UNITYSDK_OFFSET(0x1BEF13F0)
#define PROTO_SCENEMAPINFO_GET_OPENEDCHESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1BEF13E0)
#define PROTO_SCENEMAPINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BEF0F20)
#define PROTO_SCENEMAPINFO_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BEF14A0)
#define PROTO_SCENEMAPINFO_GET_SCENEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1BEF13A0)
#define PROTO_SCENEMAPINFO_GET_UNLOCKTELEPORTLIST_OFFSET UNITYSDK_OFFSET(0x1BEF1480)
#define PROTO_SCENEMAPINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEF29F0)
#define PROTO_SCENEMAPINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEF2700)
#define PROTO_SCENEMAPINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEF0F50)
#define PROTO_SCENEMAPINFO_SET_CHESTMONSTERNUM_OFFSET UNITYSDK_OFFSET(0x1BEF13D0)
#define PROTO_SCENEMAPINFO_SET_CLIENTGROUPMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x1BEF1440)
#define PROTO_SCENEMAPINFO_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1BEF1410)
#define PROTO_SCENEMAPINFO_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x1BEF1390)
#define PROTO_SCENEMAPINFO_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1BEF1460)
#define PROTO_SCENEMAPINFO_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BEF14B0)
#define PROTO_SCENEMAPINFO_SET_SCENEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1BEF13B0)
#define PROTO_SCENEMAPINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEF1C50)
#define PROTO_SCENEMAPINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEF1CB0)
#define PROTO_SCENEMAPINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF2EB0)
#define PROTO_SCENEMAPINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEF1140)
#define PROTO_SCENEMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF0F60)

namespace Proto
{
	inline static constexpr unsigned int SceneMapInfo_TypeDefinitionIndex = 32679;

	class SceneMapInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_lightenSectionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D090);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_finishedChestMonsterIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D098);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_openedChestIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0A0);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet__map_floorSavedValueMap_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0A8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_92*>** StaticGet__repeated_chestList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_92*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0B0);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_unlockTeleportList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0B8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1063*>** StaticGet__repeated_chestMonsterList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1063*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::MapInfoGroup*>** StaticGet__repeated_groupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MapInfoGroup*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_70D5AA87C5BBA20B_8*>** StaticGet__repeated_mapInfoPropList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_70D5AA87C5BBA20B_8*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0D0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::SceneMapInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SceneMapInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x3D0D8);
		}
		// static const ::System::Int32 EntryIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 SceneIdentifierFieldNumber = 0x3BA; // 0x0
		// static const ::System::Int32 ChestMonsterNumFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 OpenedChestIdListFieldNumber = 0x231; // 0x0
		// static const ::System::Int32 MapInfoPropListFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 DimensionIdFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 FloorSavedValueMapFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ClientGroupMissionInfoFieldNumber = 0x7B; // 0x0
		// static const ::System::Int32 FloorIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 GroupListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 UnlockTeleportListFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 FinishedChestMonsterIdListFieldNumber = 0x6A4; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 LightenSectionListFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 ChestMonsterListFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 ChestListFieldNumber = 0xE; // 0x0
		::Class_1_24BE2DDB450DE83C* sceneIdentifier_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* finishedChestMonsterIdList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* unlockTeleportList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* openedChestIdList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_8*>* mapInfoPropList_; // 0x30
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x38
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* floorSavedValueMap_; // 0x40
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1063*>* chestMonsterList_; // 0x48
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* lightenSectionList_; // 0x50
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_92*>* chestList_; // 0x58
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MapInfoGroup*>* groupList_; // 0x60
		::Class_1_FF220487FAB45279_6* clientGroupMissionInfo_; // 0x68
		::System::UInt32 dimensionId_; // 0x70
		::System::UInt32 chestMonsterNum_; // 0x74
		::System::UInt32 floorId_; // 0x78
		::System::UInt32 entryId_; // 0x7C
		::System::UInt32 retcode_; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SceneMapInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SceneMapInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SceneMapInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SceneMapInfo* Clone()
		{
			return ((::Proto::SceneMapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EntryId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_ENTRYID_OFFSET))(this, a1);
		}

		::Class_1_24BE2DDB450DE83C* get_SceneIdentifier()
		{
			return ((::Class_1_24BE2DDB450DE83C*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_SCENEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_SceneIdentifier(::Class_1_24BE2DDB450DE83C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24BE2DDB450DE83C*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_SCENEIDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChestMonsterNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CHESTMONSTERNUM_OFFSET))(this);
		}

		::System::Void set_ChestMonsterNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_CHESTMONSTERNUM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_OpenedChestIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_OPENEDCHESTIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_8*>* get_MapInfoPropList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_MAPINFOPROPLIST_OFFSET))(this);
		}

		::System::UInt32 get_DimensionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_DIMENSIONID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_FloorSavedValueMap()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_FLOORSAVEDVALUEMAP_OFFSET))(this);
		}

		::Class_1_FF220487FAB45279_6* get_ClientGroupMissionInfo()
		{
			return ((::Class_1_FF220487FAB45279_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CLIENTGROUPMISSIONINFO_OFFSET))(this);
		}

		::System::Void set_ClientGroupMissionInfo(::Class_1_FF220487FAB45279_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_6*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_CLIENTGROUPMISSIONINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_FLOORID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MapInfoGroup*>* get_GroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MapInfoGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_GROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_UnlockTeleportList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_UNLOCKTELEPORTLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_FinishedChestMonsterIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_FINISHEDCHESTMONSTERIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_LightenSectionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_LIGHTENSECTIONLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1063*>* get_ChestMonsterList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1063*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CHESTMONSTERLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_92*>* get_ChestList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_92*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CHESTLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SceneMapInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SceneMapInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
