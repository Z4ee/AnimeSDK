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

#define PROTO_DICECOMBATAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF78620)
#define PROTO_DICECOMBATAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF780C0)
#define PROTO_DICECOMBATAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF781F0)
#define PROTO_DICECOMBATAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF78160)
#define PROTO_DICECOMBATAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF78300)
#define PROTO_DICECOMBATAVATAR_GET_DICEAVATARID_OFFSET UNITYSDK_OFFSET(0x1BF780F0)
#define PROTO_DICECOMBATAVATAR_GET_DICEIDLIST_OFFSET UNITYSDK_OFFSET(0x1BF78130)
#define PROTO_DICECOMBATAVATAR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BF78110)
#define PROTO_DICECOMBATAVATAR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BF77F90)
#define PROTO_DICECOMBATAVATAR_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1BF78140)
#define PROTO_DICECOMBATAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF788C0)
#define PROTO_DICECOMBATAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF78850)
#define PROTO_DICECOMBATAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF77FC0)
#define PROTO_DICECOMBATAVATAR_SET_DICEAVATARID_OFFSET UNITYSDK_OFFSET(0x1BF78100)
#define PROTO_DICECOMBATAVATAR_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BF78120)
#define PROTO_DICECOMBATAVATAR_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1BF78150)
#define PROTO_DICECOMBATAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF78430)
#define PROTO_DICECOMBATAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF78490)
#define PROTO_DICECOMBATAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF789B0)
#define PROTO_DICECOMBATAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF78020)
#define PROTO_DICECOMBATAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF77FD0)

namespace Proto
{
	inline static constexpr unsigned int DiceCombatAvatar_TypeDefinitionIndex = 24824;

	class DiceCombatAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_diceIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatAvatar_TypeDefinitionIndex)->GetStaticField(0xD2F0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::DiceCombatAvatar*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::DiceCombatAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatAvatar_TypeDefinitionIndex)->GetStaticField(0xD2F8);
		}
		// static const ::System::Int32 DiceAvatarIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DiceIdListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 UnlockTimeFieldNumber = 0x4; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* diceIdList_; // 0x18
		::System::UInt32 diceAvatarId_; // 0x20
		::System::UInt32 level_; // 0x24
		::System::Int64 unlockTime_; // 0x28

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
