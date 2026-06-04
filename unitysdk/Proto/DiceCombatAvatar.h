#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DICECOMBATAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0E5C00)
#define PROTO_DICECOMBATAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0E5780)
#define PROTO_DICECOMBATAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0E58D0)
#define PROTO_DICECOMBATAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0E5820)
#define PROTO_DICECOMBATAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0E5980)
#define PROTO_DICECOMBATAVATAR_GET_DICEAVATARID_OFFSET UNITYSDK_OFFSET(0x1A0E57B0)
#define PROTO_DICECOMBATAVATAR_GET_DICEIDLIST_OFFSET UNITYSDK_OFFSET(0x1A0E57F0)
#define PROTO_DICECOMBATAVATAR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A0E57D0)
#define PROTO_DICECOMBATAVATAR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0E5650)
#define PROTO_DICECOMBATAVATAR_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1A0E5800)
#define PROTO_DICECOMBATAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0E5EA0)
#define PROTO_DICECOMBATAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0E5E30)
#define PROTO_DICECOMBATAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5680)
#define PROTO_DICECOMBATAVATAR_SET_DICEAVATARID_OFFSET UNITYSDK_OFFSET(0x1A0E57C0)
#define PROTO_DICECOMBATAVATAR_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A0E57E0)
#define PROTO_DICECOMBATAVATAR_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1A0E5810)
#define PROTO_DICECOMBATAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0E5AB0)
#define PROTO_DICECOMBATAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0E5B10)
#define PROTO_DICECOMBATAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5F90)
#define PROTO_DICECOMBATAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0E56E0)
#define PROTO_DICECOMBATAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5690)

namespace Proto
{
	inline static constexpr unsigned int DiceCombatAvatar_TypeDefinitionIndex = 24332;

	class DiceCombatAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_diceIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatAvatar_TypeDefinitionIndex)->GetStaticField(0x2D990);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::DiceCombatAvatar*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::DiceCombatAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatAvatar_TypeDefinitionIndex)->GetStaticField(0x2D998);
		}
		// static const ::System::Int32 DiceAvatarIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DiceIdListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 UnlockTimeFieldNumber = 0x4; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* diceIdList_; // 0x18
		::System::Int64 unlockTime_; // 0x20
		::System::UInt32 level_; // 0x28
		::System::UInt32 diceAvatarId_; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DiceCombatAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::DiceCombatAvatar*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::DiceCombatAvatar*>*(*)())((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DiceCombatAvatar* Clone()
		{
			return ((::Proto::DiceCombatAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_DiceAvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_DICEAVATARID_OFFSET))(this);
		}

		::System::Void set_DiceAvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_SET_DICEAVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_SET_LEVEL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_DiceIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_DICEIDLIST_OFFSET))(this);
		}

		::System::Int64 get_UnlockTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_UNLOCKTIME_OFFSET))(this);
		}

		::System::Void set_UnlockTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_SET_UNLOCKTIME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::DiceCombatAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DiceCombatAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
