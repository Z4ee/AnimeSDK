#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/Item_ExtraInfoOneofCase.h"
#include "unitysdk/System/Object.h"

class Class_1_096EC484808BA610_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ITEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD08B0)
#define PROTO_ITEM_CLEAREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1DFD03C0)
#define PROTO_ITEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD02A0)
#define PROTO_ITEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD0400)
#define PROTO_ITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD03D0)
#define PROTO_ITEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD04A0)
#define PROTO_ITEM_GET_BLINDBOXPETEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1DFD0240)
#define PROTO_ITEM_GET_EXTRAINFOCASE_OFFSET UNITYSDK_OFFSET(0x1DFD03B0)
#define PROTO_ITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1DFD0350)
#define PROTO_ITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DFD02D0)
#define PROTO_ITEM_GET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1DFD0330)
#define PROTO_ITEM_GET_NUM_OFFSET UNITYSDK_OFFSET(0x1DFD02F0)
#define PROTO_ITEM_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFD0140)
#define PROTO_ITEM_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1DFD0370)
#define PROTO_ITEM_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1DFD0390)
#define PROTO_ITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DFD0310)
#define PROTO_ITEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD0DD0)
#define PROTO_ITEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD0C80)
#define PROTO_ITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0170)
#define PROTO_ITEM_SET_BLINDBOXPETEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1DFD0280)
#define PROTO_ITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1DFD0360)
#define PROTO_ITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DFD02E0)
#define PROTO_ITEM_SET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1DFD0340)
#define PROTO_ITEM_SET_NUM_OFFSET UNITYSDK_OFFSET(0x1DFD0300)
#define PROTO_ITEM_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1DFD0380)
#define PROTO_ITEM_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1DFD03A0)
#define PROTO_ITEM_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DFD0320)
#define PROTO_ITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD0550)
#define PROTO_ITEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD05B0)
#define PROTO_ITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0F90)
#define PROTO_ITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD0190)
#define PROTO_ITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0180)

namespace Proto
{
	inline static constexpr unsigned int Item_TypeDefinitionIndex = 27781;

	class Item : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Item*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Item*>**)Il2CppClass::FromTypeDefinitionIndex(Item_TypeDefinitionIndex)->GetStaticField(0x4C260);
		}
		// static const ::System::Int32 LevelFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 NumFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 UniqueIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 MainAffixIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 ItemIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 PromotionFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 RankFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 BlindBoxPetExtraInfoFieldNumber = 0x197; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Object* extraInfo_; // 0x18
		::Proto::Item_ExtraInfoOneofCase extraInfoCase_; // 0x20
		::System::UInt32 mainAffixId_; // 0x24
		::System::UInt32 uniqueId_; // 0x28
		::System::UInt32 rank_; // 0x2C
		::System::UInt32 promotion_; // 0x30
		::System::UInt32 level_; // 0x34
		::System::UInt32 num_; // 0x38
		::System::UInt32 itemId_; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + PROTO_ITEM__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEM__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::Item*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::Item*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Item* Clone()
		{
			return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_NUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainAffixId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_MAINAFFIXID_OFFSET))(this);
		}

		::System::Void set_MainAffixId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_MAINAFFIXID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_PROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_RANK_OFFSET))(this, a1);
		}

		::Class_1_096EC484808BA610_7* get_BlindBoxPetExtraInfo()
		{
			return ((::Class_1_096EC484808BA610_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_BLINDBOXPETEXTRAINFO_OFFSET))(this);
		}

		::System::Void set_BlindBoxPetExtraInfo(::Class_1_096EC484808BA610_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_7*))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_BLINDBOXPETEXTRAINFO_OFFSET))(this, a1);
		}

		::Proto::Item_ExtraInfoOneofCase get_ExtraInfoCase()
		{
			return ((::Proto::Item_ExtraInfoOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_EXTRAINFOCASE_OFFSET))(this);
		}

		::System::Void ClearExtraInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_CLEAREXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::Item* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + PROTO_ITEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + PROTO_ITEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEM_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
