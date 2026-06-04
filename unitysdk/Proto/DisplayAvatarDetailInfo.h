#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_14;
class Class_1_D17272E82AE804C2_342;
class Class_1_FF220487FAB45279_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0E6BB0)
#define PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0E6380)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0E6540)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0E6510)
#define PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0E66D0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A0E63D0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1A0E6490)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x1A0E6450)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1A0E63F0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1A0E6470)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1A0E6410)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A0E64D0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0E6150)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x1A0E64B0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1A0E6430)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1A0E63B0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET UNITYSDK_OFFSET(0x1A0E6500)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET UNITYSDK_OFFSET(0x1A0E64F0)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0E72C0)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0E70F0)
#define PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0E6180)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A0E63E0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1A0E64A0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x1A0E6460)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1A0E6400)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1A0E6480)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET UNITYSDK_OFFSET(0x1A0E6420)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A0E64E0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x1A0E64C0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1A0E6440)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1A0E63C0)
#define PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0E68A0)
#define PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0E6900)
#define PROTO_DISPLAYAVATARDETAILINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E7510)
#define PROTO_DISPLAYAVATARDETAILINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0E6200)
#define PROTO_DISPLAYAVATARDETAILINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E6190)

namespace Proto
{
	inline static constexpr unsigned int DisplayAvatarDetailInfo_TypeDefinitionIndex = 27145;

	class DisplayAvatarDetailInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FF220487FAB45279_3*>** StaticGet__repeated_relicList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FF220487FAB45279_3*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x4DC0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x4DC8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_14*>** StaticGet__repeated_skilltreeList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_14*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x4DD0);
		}
		// static const ::System::Int32 RankFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 EnhancedIdFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 ExpFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 PromotionFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DressedSkinIdFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 EquipmentFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 AvatarTypeFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 PosFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 SkilltreeListFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 RelicListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_14*>* skilltreeList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF220487FAB45279_3*>* relicList_; // 0x20
		::Class_1_D17272E82AE804C2_342* equipment_; // 0x28
		::System::UInt32 promotion_; // 0x30
		::System::UInt32 exp_; // 0x34
		::System::UInt32 avatarType_; // 0x38
		::System::UInt32 rank_; // 0x3C
		::System::UInt32 dressedSkinId_; // 0x40
		::System::UInt32 pos_; // 0x44
		::System::UInt32 enhancedId_; // 0x48
		::System::UInt32 level_; // 0x4C
		::System::UInt32 avatarId_; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CTOR_1_OFFSET))(this, a1);
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

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnhancedId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_DressedSkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_342* get_Equipment()
		{
			return ((::Class_1_D17272E82AE804C2_342*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::Void set_Equipment(::Class_1_D17272E82AE804C2_342* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_342*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_14*>* get_SkilltreeList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_14*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF220487FAB45279_3*>* get_RelicList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF220487FAB45279_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
