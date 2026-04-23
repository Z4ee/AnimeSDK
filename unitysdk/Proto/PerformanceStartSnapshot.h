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
namespace Proto { class DialogSnapshot; }
namespace Proto { class EraFlipperSnapshot; }
namespace Proto { class FloorCustomValueSnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class MapRotationSnapshot; }
namespace Proto { class MissionSnapshot; }
namespace Proto { class PlayerSnapshot; }
namespace Proto { class SwitchHandSnapshot; }
namespace System { class String; }

#define PROTO_PERFORMANCESTARTSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1934EB70)
#define PROTO_PERFORMANCESTARTSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1934DA00)
#define PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1934DD30)
#define PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1934DCD0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1934E100)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1934DBE0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1934DC00)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1934DB10)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIALOG_OFFSET UNITYSDK_OFFSET(0x1934DC70)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1934DAD0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x1934DB30)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_ERAFLIPPER_OFFSET UNITYSDK_OFFSET(0x1934DBB0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORCUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x1934DC20)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1934DAB0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORSAVEDVALUELIST_OFFSET UNITYSDK_OFFSET(0x1934DC10)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x1934DC30)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_MISSION_OFFSET UNITYSDK_OFFSET(0x1934DB90)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_OWNERGROUPID_OFFSET UNITYSDK_OFFSET(0x1934DC90)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1934D4E0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1934DA50)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0x1934DA70)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1934DA90)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1934DB70)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1934DBD0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1934DBF0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1934DAF0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_SWITCHHAND_OFFSET UNITYSDK_OFFSET(0x1934DCB0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1934DB50)
#define PROTO_PERFORMANCESTARTSNAPSHOT_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1934DC50)
#define PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1934F980)
#define PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1934F3B0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1934D540)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1934DB20)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIALOG_OFFSET UNITYSDK_OFFSET(0x1934DC80)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1934DAE0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x1934DB40)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_ERAFLIPPER_OFFSET UNITYSDK_OFFSET(0x1934DBC0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1934DAC0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x1934DC40)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_MISSION_OFFSET UNITYSDK_OFFSET(0x1934DBA0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_OWNERGROUPID_OFFSET UNITYSDK_OFFSET(0x1934DCA0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1934DA60)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0x1934DA80)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1934DAA0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1934DB80)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1934DB00)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_SWITCHHAND_OFFSET UNITYSDK_OFFSET(0x1934DCC0)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1934DB60)
#define PROTO_PERFORMANCESTARTSNAPSHOT_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1934DC60)
#define PROTO_PERFORMANCESTARTSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1934E640)
#define PROTO_PERFORMANCESTARTSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1934E6A0)
#define PROTO_PERFORMANCESTARTSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1934FFD0)
#define PROTO_PERFORMANCESTARTSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1934D650)
#define PROTO_PERFORMANCESTARTSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1934D550)

namespace Proto
{
	inline static constexpr unsigned int PerformanceStartSnapshot_TypeDefinitionIndex = 24561;

	class PerformanceStartSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_clientLegacyGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x62380);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_serverGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x62388);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_serverLegacyGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x62390);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x62398);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>** StaticGet__repeated_clientGroupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GroupSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x623A0);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Proto::FloorCustomValueSnapshot*>** StaticGet__map_floorCustomValueList_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Proto::FloorCustomValueSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x623A8);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet__map_floorSavedValueList_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot_TypeDefinitionIndex)->GetStaticField(0x623B0);
		}
		// static const ::System::Int32 PerformanceIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 PerformanceTypeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 PlaneIdFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 FloorIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 DimensionIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 StoryLineIdFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ContentIdFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 EntryIdFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 VersionFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 PlayerFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 MissionFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 EraFlipperFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ServerGroupListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 ClientGroupListFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 ServerLegacyGroupListFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ClientLegacyGroupListFieldNumber = 0x10; // 0x0
		// static const ::System::Int32 FloorSavedValueListFieldNumber = 0x11; // 0x0
		// static const ::System::Int32 FloorCustomValueListFieldNumber = 0x12; // 0x0
		// static const ::System::Int32 MapRotationFieldNumber = 0x13; // 0x0
		// static const ::System::Int32 WorldIdFieldNumber = 0x14; // 0x0
		// static const ::System::Int32 DialogFieldNumber = 0x15; // 0x0
		// static const ::System::Int32 OwnerGroupIdFieldNumber = 0x16; // 0x0
		// static const ::System::Int32 SwitchHandFieldNumber = 0x17; // 0x0
		::Proto::MapRotationSnapshot* mapRotation_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* serverGroupList_; // 0x18
		::Proto::EraFlipperSnapshot* eraFlipper_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* clientGroupList_; // 0x28
		::Proto::PlayerSnapshot* player_; // 0x30
		::Proto::MissionSnapshot* mission_; // 0x38
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x40
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* clientLegacyGroupList_; // 0x48
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::Proto::FloorCustomValueSnapshot*>* floorCustomValueList_; // 0x50
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* serverLegacyGroupList_; // 0x58
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* floorSavedValueList_; // 0x60
		::Proto::SwitchHandSnapshot* switchHand_; // 0x68
		::Proto::DialogSnapshot* dialog_; // 0x70
		::System::UInt32 version_; // 0x78
		::System::UInt32 entryId_; // 0x7C
		::System::UInt32 performanceType_; // 0x80
		::System::UInt32 worldId_; // 0x84
		::System::UInt32 floorId_; // 0x88
		::System::UInt32 storyLineId_; // 0x8C
		::System::UInt32 dimensionId_; // 0x90
		::System::UInt32 performanceId_; // 0x94
		::System::UInt32 planeId_; // 0x98
		::System::UInt32 ownerGroupId_; // 0x9C
		::System::UInt32 contentId_; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PerformanceStartSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PerformanceStartSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PerformanceStartSnapshot* Clone()
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::Void set_PerformanceId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCEID_OFFSET))(this, value);
		}

		::System::UInt32 get_PerformanceType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PERFORMANCETYPE_OFFSET))(this);
		}

		::System::Void set_PerformanceType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PERFORMANCETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_PlaneId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLANEID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_FLOORID_OFFSET))(this, value);
		}

		::System::UInt32 get_DimensionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIMENSIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryLineId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ContentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntryId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_ENTRYID_OFFSET))(this, value);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_VERSION_OFFSET))(this, value);
		}

		::Proto::PlayerSnapshot* get_Player()
		{
			return ((::Proto::PlayerSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::Proto::PlayerSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_PLAYER_OFFSET))(this, value);
		}

		::Proto::MissionSnapshot* get_Mission()
		{
			return ((::Proto::MissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_MISSION_OFFSET))(this);
		}

		::System::Void set_Mission(::Proto::MissionSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_MISSION_OFFSET))(this, value);
		}

		::Proto::EraFlipperSnapshot* get_EraFlipper()
		{
			return ((::Proto::EraFlipperSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_ERAFLIPPER_OFFSET))(this);
		}

		::System::Void set_EraFlipper(::Proto::EraFlipperSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_ERAFLIPPER_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ServerGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ClientGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ServerLegacyGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_SERVERLEGACYGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* get_ClientLegacyGroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_CLIENTLEGACYGROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_FloorSavedValueList()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORSAVEDVALUELIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::Proto::FloorCustomValueSnapshot*>* get_FloorCustomValueList()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::Proto::FloorCustomValueSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_FLOORCUSTOMVALUELIST_OFFSET))(this);
		}

		::Proto::MapRotationSnapshot* get_MapRotation()
		{
			return ((::Proto::MapRotationSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_MAPROTATION_OFFSET))(this);
		}

		::System::Void set_MapRotation(::Proto::MapRotationSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MapRotationSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_MAPROTATION_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_WORLDID_OFFSET))(this, value);
		}

		::Proto::DialogSnapshot* get_Dialog()
		{
			return ((::Proto::DialogSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_DIALOG_OFFSET))(this);
		}

		::System::Void set_Dialog(::Proto::DialogSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_DIALOG_OFFSET))(this, value);
		}

		::System::UInt32 get_OwnerGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_OWNERGROUPID_OFFSET))(this);
		}

		::System::Void set_OwnerGroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_OWNERGROUPID_OFFSET))(this, value);
		}

		::Proto::SwitchHandSnapshot* get_SwitchHand()
		{
			return ((::Proto::SwitchHandSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GET_SWITCHHAND_OFFSET))(this);
		}

		::System::Void set_SwitchHand(::Proto::SwitchHandSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_SET_SWITCHHAND_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PerformanceStartSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PerformanceStartSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
