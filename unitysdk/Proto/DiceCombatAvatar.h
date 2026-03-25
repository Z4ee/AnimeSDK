#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DICECOMBATAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18278940)
#define PROTO_DICECOMBATAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x182784C0)
#define PROTO_DICECOMBATAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18278610)
#define PROTO_DICECOMBATAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x18278560)
#define PROTO_DICECOMBATAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182786C0)
#define PROTO_DICECOMBATAVATAR_GET_DICEAVATARID_OFFSET UNITYSDK_OFFSET(0x182784F0)
#define PROTO_DICECOMBATAVATAR_GET_DICEIDLIST_OFFSET UNITYSDK_OFFSET(0x18278530)
#define PROTO_DICECOMBATAVATAR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18278510)
#define PROTO_DICECOMBATAVATAR_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x18278540)
#define PROTO_DICECOMBATAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18278BE0)
#define PROTO_DICECOMBATAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18278B70)
#define PROTO_DICECOMBATAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182783C0)
#define PROTO_DICECOMBATAVATAR_SET_DICEAVATARID_OFFSET UNITYSDK_OFFSET(0x18278500)
#define PROTO_DICECOMBATAVATAR_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18278520)
#define PROTO_DICECOMBATAVATAR_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x18278550)
#define PROTO_DICECOMBATAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182787F0)
#define PROTO_DICECOMBATAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x18278850)
#define PROTO_DICECOMBATAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18278CD0)
#define PROTO_DICECOMBATAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18278420)
#define PROTO_DICECOMBATAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x182783D0)

namespace Proto
{
	inline static constexpr unsigned int DiceCombatAvatar_TypeDefinitionIndex = 23190;

	class DiceCombatAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_diceIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatAvatar_TypeDefinitionIndex)->GetStaticField(0x19DF0);
		}
		// static const ::System::Int32 DiceAvatarIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DiceIdListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 UnlockTimeFieldNumber = 0x4; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* diceIdList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Int64 unlockTime_; // 0x20
		::System::UInt32 diceAvatarId_; // 0x28
		::System::UInt32 level_; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DiceCombatAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR__CCTOR_OFFSET))();
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

		::System::Void set_DiceAvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_SET_DICEAVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_SET_LEVEL_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_DiceIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_DICEIDLIST_OFFSET))(this);
		}

		::System::Int64 get_UnlockTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GET_UNLOCKTIME_OFFSET))(this);
		}

		::System::Void set_UnlockTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_SET_UNLOCKTIME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::DiceCombatAvatar* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DiceCombatAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
