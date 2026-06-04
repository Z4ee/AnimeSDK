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
namespace Proto { class Goods; }
namespace System { class String; }

#define PROTO_SHOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A12A410)
#define PROTO_SHOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1A129E80)
#define PROTO_SHOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A129FB0)
#define PROTO_SHOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A129F80)
#define PROTO_SHOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A12A0B0)
#define PROTO_SHOP_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1A129F20)
#define PROTO_SHOP_GET_CITYEXP_OFFSET UNITYSDK_OFFSET(0x1A129EF0)
#define PROTO_SHOP_GET_CITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1A129EB0)
#define PROTO_SHOP_GET_CITYTAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1A129F40)
#define PROTO_SHOP_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1A129F60)
#define PROTO_SHOP_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x1A129F10)
#define PROTO_SHOP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A129D50)
#define PROTO_SHOP_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1A129ED0)
#define PROTO_SHOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A12A960)
#define PROTO_SHOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A12A870)
#define PROTO_SHOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A129D80)
#define PROTO_SHOP_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1A129F30)
#define PROTO_SHOP_SET_CITYEXP_OFFSET UNITYSDK_OFFSET(0x1A129F00)
#define PROTO_SHOP_SET_CITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1A129EC0)
#define PROTO_SHOP_SET_CITYTAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1A129F50)
#define PROTO_SHOP_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1A129F70)
#define PROTO_SHOP_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1A129EE0)
#define PROTO_SHOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A12A200)
#define PROTO_SHOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A12A260)
#define PROTO_SHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A12AAC0)
#define PROTO_SHOP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A129DD0)
#define PROTO_SHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A129D90)

namespace Proto
{
	inline static constexpr unsigned int Shop_TypeDefinitionIndex = 32388;

	class Shop : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Shop*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Shop*>**)Il2CppClass::FromTypeDefinitionIndex(Shop_TypeDefinitionIndex)->GetStaticField(0x25A70);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::Goods*>** StaticGet__repeated_goodsList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::Goods*>**)Il2CppClass::FromTypeDefinitionIndex(Shop_TypeDefinitionIndex)->GetStaticField(0x25A78);
		}
		// static const ::System::Int32 CityLevelFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ShopIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 CityExpFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 GoodsListFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 BeginTimeFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 CityTakenLevelRewardFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 EndTimeFieldNumber = 0xC; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Goods*>* goodsList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 cityLevel_; // 0x20
		::System::UInt64 cityTakenLevelReward_; // 0x28
		::System::UInt32 shopId_; // 0x30
		::System::UInt32 cityExp_; // 0x34
		::System::Int64 beginTime_; // 0x38
		::System::Int64 endTime_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Shop* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Shop*))((::PBYTE)hIl2Cpp + PROTO_SHOP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SHOP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::Shop*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::Shop*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Shop* Clone()
		{
			return ((::Proto::Shop*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_CityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_CITYLEVEL_OFFSET))(this);
		}

		::System::Void set_CityLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_CITYLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CityExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_CITYEXP_OFFSET))(this);
		}

		::System::Void set_CityExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_CITYEXP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Goods*>* get_GoodsList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Goods*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_GOODSLIST_OFFSET))(this);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_CityTakenLevelReward()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_CITYTAKENLEVELREWARD_OFFSET))(this);
		}

		::System::Void set_CityTakenLevelReward(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_CITYTAKENLEVELREWARD_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SHOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::Shop* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Shop*))((::PBYTE)hIl2Cpp + PROTO_SHOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SHOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Shop* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Shop*))((::PBYTE)hIl2Cpp + PROTO_SHOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SHOP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
