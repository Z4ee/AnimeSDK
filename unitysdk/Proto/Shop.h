#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Goods; }
namespace System { class String; }

#define PROTO_SHOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1829BCE0)
#define PROTO_SHOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1829B770)
#define PROTO_SHOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1829B8A0)
#define PROTO_SHOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1829B870)
#define PROTO_SHOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1829B9A0)
#define PROTO_SHOP_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1829B850)
#define PROTO_SHOP_GET_CITYEXP_OFFSET UNITYSDK_OFFSET(0x1829B810)
#define PROTO_SHOP_GET_CITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1829B830)
#define PROTO_SHOP_GET_CITYTAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1829B7A0)
#define PROTO_SHOP_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1829B7E0)
#define PROTO_SHOP_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x1829B800)
#define PROTO_SHOP_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1829B7C0)
#define PROTO_SHOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1829C240)
#define PROTO_SHOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1829C150)
#define PROTO_SHOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1829B670)
#define PROTO_SHOP_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1829B860)
#define PROTO_SHOP_SET_CITYEXP_OFFSET UNITYSDK_OFFSET(0x1829B820)
#define PROTO_SHOP_SET_CITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1829B840)
#define PROTO_SHOP_SET_CITYTAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1829B7B0)
#define PROTO_SHOP_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1829B7F0)
#define PROTO_SHOP_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1829B7D0)
#define PROTO_SHOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1829BAE0)
#define PROTO_SHOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1829BB40)
#define PROTO_SHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1829C380)
#define PROTO_SHOP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1829B6C0)
#define PROTO_SHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1829B680)

namespace Proto
{
	inline static constexpr unsigned int Shop_TypeDefinitionIndex = 27146;

	class Shop : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::Goods*>** StaticGet__repeated_goodsList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::Goods*>**)Il2CppClass::FromTypeDefinitionIndex(Shop_TypeDefinitionIndex)->GetStaticField(0x1E150);
		}
		// static const ::System::Int32 CityTakenLevelRewardFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 ShopIdFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 EndTimeFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 GoodsListFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 CityExpFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 CityLevelFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 BeginTimeFieldNumber = 0x7; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Goods*>* goodsList_; // 0x18
		::System::UInt32 cityExp_; // 0x20
		::System::UInt32 shopId_; // 0x24
		::System::UInt64 cityTakenLevelReward_; // 0x28
		::System::Int64 endTime_; // 0x30
		::System::UInt32 cityLevel_; // 0x38
		::System::Int64 beginTime_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Shop* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Shop*))((::PBYTE)hIl2Cpp + PROTO_SHOP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SHOP__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Shop* Clone()
		{
			return ((::Proto::Shop*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_CLONE_OFFSET))(this);
		}

		::System::UInt64 get_CityTakenLevelReward()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_CITYTAKENLEVELREWARD_OFFSET))(this);
		}

		::System::Void set_CityTakenLevelReward(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_CITYTAKENLEVELREWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_ShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_SHOPID_OFFSET))(this, value);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_ENDTIME_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Goods*>* get_GoodsList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Goods*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_GOODSLIST_OFFSET))(this);
		}

		::System::UInt32 get_CityExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_CITYEXP_OFFSET))(this);
		}

		::System::Void set_CityExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_CITYEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_CityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_CITYLEVEL_OFFSET))(this);
		}

		::System::Void set_CityLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_CITYLEVEL_OFFSET))(this, value);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SHOP_SET_BEGINTIME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SHOP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::Shop* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Shop*))((::PBYTE)hIl2Cpp + PROTO_SHOP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SHOP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Shop* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Shop*))((::PBYTE)hIl2Cpp + PROTO_SHOP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SHOP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
