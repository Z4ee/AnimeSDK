#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_BUYGOODSSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0E19E0)
#define PROTO_BUYGOODSSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0E1350)
#define PROTO_BUYGOODSSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0E15B0)
#define PROTO_BUYGOODSSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0E14E0)
#define PROTO_BUYGOODSSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0E1680)
#define PROTO_BUYGOODSSCRSP_GET_GOODSBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1A0E1440)
#define PROTO_BUYGOODSSCRSP_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1A0E14C0)
#define PROTO_BUYGOODSSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0E11F0)
#define PROTO_BUYGOODSSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A0E1460)
#define PROTO_BUYGOODSSCRSP_GET_RETURNITEMLIST_OFFSET UNITYSDK_OFFSET(0x1A0E14A0)
#define PROTO_BUYGOODSSCRSP_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1A0E1480)
#define PROTO_BUYGOODSSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0E1E60)
#define PROTO_BUYGOODSSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0E1C20)
#define PROTO_BUYGOODSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0E1220)
#define PROTO_BUYGOODSSCRSP_SET_GOODSBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1A0E1450)
#define PROTO_BUYGOODSSCRSP_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1A0E14D0)
#define PROTO_BUYGOODSSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A0E1470)
#define PROTO_BUYGOODSSCRSP_SET_RETURNITEMLIST_OFFSET UNITYSDK_OFFSET(0x1A0E14B0)
#define PROTO_BUYGOODSSCRSP_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1A0E1490)
#define PROTO_BUYGOODSSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0E1890)
#define PROTO_BUYGOODSSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0E18F0)
#define PROTO_BUYGOODSSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E1F60)
#define PROTO_BUYGOODSSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0E1240)
#define PROTO_BUYGOODSSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E1230)

namespace Proto
{
	inline static constexpr unsigned int BuyGoodsScRsp_TypeDefinitionIndex = 32398;

	class BuyGoodsScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::BuyGoodsScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::BuyGoodsScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(BuyGoodsScRsp_TypeDefinitionIndex)->GetStaticField(0x42840);
		}
		// static const ::System::Int32 GoodsBuyTimesFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 ShopIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 ReturnItemListFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GoodsIdFieldNumber = 0xB; // 0x0
		::Proto::ItemList* returnItemList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 goodsBuyTimes_; // 0x24
		::System::UInt32 shopId_; // 0x28
		::System::UInt32 goodsId_; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::BuyGoodsScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::BuyGoodsScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::BuyGoodsScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::BuyGoodsScRsp* Clone()
		{
			return ((::Proto::BuyGoodsScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GoodsBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_GOODSBUYTIMES_OFFSET))(this);
		}

		::System::Void set_GoodsBuyTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_GOODSBUYTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_SHOPID_OFFSET))(this, a1);
		}

		::Proto::ItemList* get_ReturnItemList()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_RETURNITEMLIST_OFFSET))(this);
		}

		::System::Void set_ReturnItemList(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_RETURNITEMLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_GoodsId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_GOODSID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::BuyGoodsScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::BuyGoodsScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
