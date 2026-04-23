#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_13;
class Class_1_D17272E82AE804C2_329;
class Class_1_FF220487FAB45279_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19333B30)
#define PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x193332A0)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19333460)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x19333430)
#define PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193335F0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x193332D0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x19333350)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x19333330)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x19333410)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x193333D0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET UNITYSDK_OFFSET(0x193333B0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19333370)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19333070)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x193333F0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x193332F0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19333310)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET UNITYSDK_OFFSET(0x19333390)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET UNITYSDK_OFFSET(0x193333A0)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19334260)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19334080)
#define PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193330A0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x193332E0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x19333360)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x19333340)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x19333420)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x193333E0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET UNITYSDK_OFFSET(0x193333C0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19333380)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x19333400)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x19333300)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x19333320)
#define PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19333830)
#define PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x19333890)
#define PROTO_DISPLAYAVATARDETAILINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x193344A0)
#define PROTO_DISPLAYAVATARDETAILINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19333120)
#define PROTO_DISPLAYAVATARDETAILINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x193330B0)

namespace Proto
{
	inline static constexpr unsigned int DisplayAvatarDetailInfo_TypeDefinitionIndex = 27172;

	class DisplayAvatarDetailInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FF220487FAB45279_2*>** StaticGet__repeated_relicList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FF220487FAB45279_2*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x4BD00);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x4BD08);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_13*>** StaticGet__repeated_skilltreeList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_13*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x4BD10);
		}
		// static const ::System::Int32 AvatarIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 PromotionFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 RankFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DressedSkinIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 AvatarTypeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 RelicListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 SkilltreeListFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 ExpFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 EquipmentFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 PosFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 EnhancedIdFieldNumber = 0x9; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF220487FAB45279_2*>* relicList_; // 0x18
		::Class_1_D17272E82AE804C2_329* equipment_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>* skilltreeList_; // 0x28
		::System::UInt32 level_; // 0x30
		::System::UInt32 rank_; // 0x34
		::System::UInt32 promotion_; // 0x38
		::System::UInt32 pos_; // 0x3C
		::System::UInt32 exp_; // 0x40
		::System::UInt32 dressedSkinId_; // 0x44
		::System::UInt32 enhancedId_; // 0x48
		::System::UInt32 avatarType_; // 0x4C
		::System::UInt32 avatarId_; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DisplayAvatarDetailInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* Clone()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_DressedSkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF220487FAB45279_2*>* get_RelicList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF220487FAB45279_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>* get_SkilltreeList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET))(this);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET))(this, value);
		}

		::Class_1_D17272E82AE804C2_329* get_Equipment()
		{
			return ((::Class_1_D17272E82AE804C2_329*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::Void set_Equipment(::Class_1_D17272E82AE804C2_329* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_329*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET))(this, value);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET))(this, value);
		}

		::System::UInt32 get_EnhancedId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::DisplayAvatarDetailInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DisplayAvatarDetailInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
