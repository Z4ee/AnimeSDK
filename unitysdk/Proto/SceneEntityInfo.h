#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/SceneEntityInfo_EntityOneofCase.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_54;
class Class_1_3DE734113B1E313B_2;
class Class_1_6DF80BD19ED59755;
class Class_1_9D5608F598A30CAC_41;
class Class_1_C70AE03C58B77993;
class Class_1_FBCD4FF549575A07_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SCENEENTITYINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18298860)
#define PROTO_SCENEENTITYINFO_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x182980D0)
#define PROTO_SCENEENTITYINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x18298010)
#define PROTO_SCENEENTITYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18298110)
#define PROTO_SCENEENTITYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x182980E0)
#define PROTO_SCENEENTITYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182983B0)
#define PROTO_SCENEENTITYINFO_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x18297E40)
#define PROTO_SCENEENTITYINFO_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x182980C0)
#define PROTO_SCENEENTITYINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x18298080)
#define PROTO_SCENEENTITYINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18298060)
#define PROTO_SCENEENTITYINFO_GET_INSTID_OFFSET UNITYSDK_OFFSET(0x18298040)
#define PROTO_SCENEENTITYINFO_GET_MOTION_OFFSET UNITYSDK_OFFSET(0x182980A0)
#define PROTO_SCENEENTITYINFO_GET_NPCMONSTER_OFFSET UNITYSDK_OFFSET(0x18297E90)
#define PROTO_SCENEENTITYINFO_GET_NPC_OFFSET UNITYSDK_OFFSET(0x18297EF0)
#define PROTO_SCENEENTITYINFO_GET_PROP_OFFSET UNITYSDK_OFFSET(0x18297F50)
#define PROTO_SCENEENTITYINFO_GET_SUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x18297FB0)
#define PROTO_SCENEENTITYINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182990F0)
#define PROTO_SCENEENTITYINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18298BA0)
#define PROTO_SCENEENTITYINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18297BB0)
#define PROTO_SCENEENTITYINFO_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x18297E80)
#define PROTO_SCENEENTITYINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x18298090)
#define PROTO_SCENEENTITYINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18298070)
#define PROTO_SCENEENTITYINFO_SET_INSTID_OFFSET UNITYSDK_OFFSET(0x18298050)
#define PROTO_SCENEENTITYINFO_SET_MOTION_OFFSET UNITYSDK_OFFSET(0x182980B0)
#define PROTO_SCENEENTITYINFO_SET_NPCMONSTER_OFFSET UNITYSDK_OFFSET(0x18297ED0)
#define PROTO_SCENEENTITYINFO_SET_NPC_OFFSET UNITYSDK_OFFSET(0x18297F30)
#define PROTO_SCENEENTITYINFO_SET_PROP_OFFSET UNITYSDK_OFFSET(0x18297F90)
#define PROTO_SCENEENTITYINFO_SET_SUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x18297FF0)
#define PROTO_SCENEENTITYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182985B0)
#define PROTO_SCENEENTITYINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x18298610)
#define PROTO_SCENEENTITYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18297BD0)
#define PROTO_SCENEENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18297BC0)

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_TypeDefinitionIndex = 27019;

	class SceneEntityInfo : public ::System::Object
	{
	public:
		// static const ::System::Int32 InstIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 GroupIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 EntityIdFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 MotionFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 ActorFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 NpcMonsterFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 NpcFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 PropFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 SummonUnitFieldNumber = 0x6; // 0x0
		::Class_1_3DE734113B1E313B_2* motion_; // 0x10
		::System::Object* entity_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::UInt32 groupId_; // 0x28
		::System::UInt32 instId_; // 0x2C
		::Proto::SceneEntityInfo_EntityOneofCase entityCase_; // 0x30
		::System::UInt32 entityId_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SceneEntityInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SceneEntityInfo* Clone()
		{
			return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_InstId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_INSTID_OFFSET))(this);
		}

		::System::Void set_InstId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_INSTID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_ENTITYID_OFFSET))(this, value);
		}

		::Class_1_3DE734113B1E313B_2* get_Motion()
		{
			return ((::Class_1_3DE734113B1E313B_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_MOTION_OFFSET))(this);
		}

		::System::Void set_Motion(::Class_1_3DE734113B1E313B_2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_MOTION_OFFSET))(this, value);
		}

		::Class_1_352A8B3482C80E7D_54* get_Actor()
		{
			return ((::Class_1_352A8B3482C80E7D_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::Class_1_352A8B3482C80E7D_54* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_54*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_ACTOR_OFFSET))(this, value);
		}

		::Class_1_FBCD4FF549575A07_3* get_NpcMonster()
		{
			return ((::Class_1_FBCD4FF549575A07_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_NPCMONSTER_OFFSET))(this);
		}

		::System::Void set_NpcMonster(::Class_1_FBCD4FF549575A07_3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_3*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_NPCMONSTER_OFFSET))(this, value);
		}

		::Class_1_9D5608F598A30CAC_41* get_Npc()
		{
			return ((::Class_1_9D5608F598A30CAC_41*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_NPC_OFFSET))(this);
		}

		::System::Void set_Npc(::Class_1_9D5608F598A30CAC_41* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_41*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_NPC_OFFSET))(this, value);
		}

		::Class_1_C70AE03C58B77993* get_Prop()
		{
			return ((::Class_1_C70AE03C58B77993*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_PROP_OFFSET))(this);
		}

		::System::Void set_Prop(::Class_1_C70AE03C58B77993* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C70AE03C58B77993*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_PROP_OFFSET))(this, value);
		}

		::Class_1_6DF80BD19ED59755* get_SummonUnit()
		{
			return ((::Class_1_6DF80BD19ED59755*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_SUMMONUNIT_OFFSET))(this);
		}

		::System::Void set_SummonUnit(::Class_1_6DF80BD19ED59755* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6DF80BD19ED59755*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_SUMMONUNIT_OFFSET))(this, value);
		}

		::Proto::SceneEntityInfo_EntityOneofCase get_EntityCase()
		{
			return ((::Proto::SceneEntityInfo_EntityOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ENTITYCASE_OFFSET))(this);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CLEARENTITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SceneEntityInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SceneEntityInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
