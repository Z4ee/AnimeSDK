#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase.h"
#include "unitysdk/System/Object.h"

class Class_1_434341DAC51FD4BD_280;
class Class_1_434341DAC51FD4BD_281;
class Class_1_633744E9733BE855_9;
class Class_1_FA4F4A67B1C04320_746;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18296660)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLEARTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x18295E70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x18295E10)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18295EE0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_OFFSET UNITYSDK_OFFSET(0x18295E80)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18296230)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x18295C90)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETIMPLCASE_OFFSET UNITYSDK_OFFSET(0x18295E60)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x18295D10)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x18295C20)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x18295D90)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18296D90)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182968C0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18295910)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x18295CF0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x18295D70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x18295C80)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x18295DF0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18296430)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_WRITETO_OFFSET UNITYSDK_OFFSET(0x18296490)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18295930)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18295920)

namespace Proto
{
	inline static constexpr unsigned int RogueAdventureRoomGameplayWolfGunTarget_TypeDefinitionIndex = 26466;

	class RogueAdventureRoomGameplayWolfGunTarget : public ::System::Object
	{
	public:
		// static const ::System::Int32 TargetNoneFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 TargetCoinFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 TargetMiracleFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 TargetRuanmeiFieldNumber = 0xA; // 0x0
		::System::Object* targetImpl_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase targetImplCase_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::RogueAdventureRoomGameplayWolfGunTarget* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RogueAdventureRoomGameplayWolfGunTarget*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget* Clone()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET))(this);
		}

		::Class_1_434341DAC51FD4BD_280* get_TargetNone()
		{
			return ((::Class_1_434341DAC51FD4BD_280*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET))(this);
		}

		::System::Void set_TargetNone(::Class_1_434341DAC51FD4BD_280* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_280*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET))(this, value);
		}

		::Class_1_633744E9733BE855_9* get_TargetCoin()
		{
			return ((::Class_1_633744E9733BE855_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET))(this);
		}

		::System::Void set_TargetCoin(::Class_1_633744E9733BE855_9* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_9*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET))(this, value);
		}

		::Class_1_FA4F4A67B1C04320_746* get_TargetMiracle()
		{
			return ((::Class_1_FA4F4A67B1C04320_746*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET))(this);
		}

		::System::Void set_TargetMiracle(::Class_1_FA4F4A67B1C04320_746* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_746*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET))(this, value);
		}

		::Class_1_434341DAC51FD4BD_281* get_TargetRuanmei()
		{
			return ((::Class_1_434341DAC51FD4BD_281*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET))(this);
		}

		::System::Void set_TargetRuanmei(::Class_1_434341DAC51FD4BD_281* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_281*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET))(this, value);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase get_TargetImplCase()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETIMPLCASE_OFFSET))(this);
		}

		::System::Void ClearTargetImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLEARTARGETIMPL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::RogueAdventureRoomGameplayWolfGunTarget* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::RogueAdventureRoomGameplayWolfGunTarget*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::RogueAdventureRoomGameplayWolfGunTarget* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RogueAdventureRoomGameplayWolfGunTarget*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
