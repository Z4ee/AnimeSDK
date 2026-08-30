#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ITEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9664F0)
#define PROTO_ITEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1D965FA0)
#define PROTO_ITEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D966140)
#define PROTO_ITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9660D0)
#define PROTO_ITEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9661A0)
#define PROTO_ITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D9660B0)
#define PROTO_ITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D966070)
#define PROTO_ITEM_GET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1D965FF0)
#define PROTO_ITEM_GET_NUM_OFFSET UNITYSDK_OFFSET(0x1D966050)
#define PROTO_ITEM_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D965F10)
#define PROTO_ITEM_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1D966090)
#define PROTO_ITEM_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1D966010)
#define PROTO_ITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D966030)
#define PROTO_ITEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9668E0)
#define PROTO_ITEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D966870)
#define PROTO_ITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D965F40)
#define PROTO_ITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D9660C0)
#define PROTO_ITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D966080)
#define PROTO_ITEM_SET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1D966000)
#define PROTO_ITEM_SET_NUM_OFFSET UNITYSDK_OFFSET(0x1D966060)
#define PROTO_ITEM_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1D9660A0)
#define PROTO_ITEM_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1D966020)
#define PROTO_ITEM_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D966040)
#define PROTO_ITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9661F0)
#define PROTO_ITEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D966250)
#define PROTO_ITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9669E0)
#define PROTO_ITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D965F60)
#define PROTO_ITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D965F50)

namespace Proto
{
	inline static constexpr unsigned int Item_TypeDefinitionIndex = 27277;

	class Item : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Item*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Item*>**)Il2CppClass::FromTypeDefinitionIndex(Item_TypeDefinitionIndex)->GetStaticField(0x54FB0);
		}
		// static const ::System::Int32 MainAffixIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 RankFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 UniqueIdFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 NumFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 PromotionFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ItemIdFieldNumber = 0xF; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 rank_; // 0x18
		::System::UInt32 num_; // 0x1C
		::System::UInt32 uniqueId_; // 0x20
		::System::UInt32 mainAffixId_; // 0x24
		::System::UInt32 promotion_; // 0x28
		::System::UInt32 itemId_; // 0x2C
		::System::UInt32 level_; // 0x30

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

		::System::UInt32 get_MainAffixId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_MAINAFFIXID_OFFSET))(this);
		}

		::System::Void set_MainAffixId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_MAINAFFIXID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_NUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_PROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEM_SET_ITEMID_OFFSET))(this, a1);
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
