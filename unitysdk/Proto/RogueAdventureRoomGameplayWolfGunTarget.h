#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase.h"
#include "unitysdk/System/Object.h"

class Class_1_5B567C8A01BAEDFE_290;
class Class_1_5B567C8A01BAEDFE_291;
class Class_1_D17272E82AE804C2_785;
class Class_1_EA5A5E4D07C4CF2B_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19355840)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLEARTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x19355050)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x19354FF0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193550C0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_EQUALS_OFFSET UNITYSDK_OFFSET(0x19355060)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19355410)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19354A90)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x19354E70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETIMPLCASE_OFFSET UNITYSDK_OFFSET(0x19355040)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x19354EF0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x19354E00)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x19354F70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19355F70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19355AA0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19354AF0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET UNITYSDK_OFFSET(0x19354ED0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET UNITYSDK_OFFSET(0x19354F50)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET UNITYSDK_OFFSET(0x19354E60)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET UNITYSDK_OFFSET(0x19354FD0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19355610)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_WRITETO_OFFSET UNITYSDK_OFFSET(0x19355670)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x19356320)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19354B10)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19354B00)

namespace Proto
{
	inline static constexpr unsigned int RogueAdventureRoomGameplayWolfGunTarget_TypeDefinitionIndex = 30978;

	class RogueAdventureRoomGameplayWolfGunTarget : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureRoomGameplayWolfGunTarget_TypeDefinitionIndex)->GetStaticField(0x65880);
		}
		// static const ::System::Int32 TargetNoneFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 TargetCoinFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 TargetMiracleFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 TargetRuanmeiFieldNumber = 0x7; // 0x0
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

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget* Clone()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_CLONE_OFFSET))(this);
		}

		::Class_1_5B567C8A01BAEDFE_290* get_TargetNone()
		{
			return ((::Class_1_5B567C8A01BAEDFE_290*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETNONE_OFFSET))(this);
		}

		::System::Void set_TargetNone(::Class_1_5B567C8A01BAEDFE_290* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_290*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETNONE_OFFSET))(this, value);
		}

		::Class_1_EA5A5E4D07C4CF2B_9* get_TargetCoin()
		{
			return ((::Class_1_EA5A5E4D07C4CF2B_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETCOIN_OFFSET))(this);
		}

		::System::Void set_TargetCoin(::Class_1_EA5A5E4D07C4CF2B_9* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_9*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETCOIN_OFFSET))(this, value);
		}

		::Class_1_D17272E82AE804C2_785* get_TargetMiracle()
		{
			return ((::Class_1_D17272E82AE804C2_785*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETMIRACLE_OFFSET))(this);
		}

		::System::Void set_TargetMiracle(::Class_1_D17272E82AE804C2_785* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_785*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETMIRACLE_OFFSET))(this, value);
		}

		::Class_1_5B567C8A01BAEDFE_291* get_TargetRuanmei()
		{
			return ((::Class_1_5B567C8A01BAEDFE_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_GET_TARGETRUANMEI_OFFSET))(this);
		}

		::System::Void set_TargetRuanmei(::Class_1_5B567C8A01BAEDFE_291* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_291*))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET_SET_TARGETRUANMEI_OFFSET))(this, value);
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
