#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GOODS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18284810)
#define PROTO_GOODS_CLONE_OFFSET UNITYSDK_OFFSET(0x18284440)
#define PROTO_GOODS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182845D0)
#define PROTO_GOODS_EQUALS_OFFSET UNITYSDK_OFFSET(0x18284540)
#define PROTO_GOODS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18284650)
#define PROTO_GOODS_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x18284500)
#define PROTO_GOODS_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x182844E0)
#define PROTO_GOODS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x18284520)
#define PROTO_GOODS_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x182844C0)
#define PROTO_GOODS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x182844A0)
#define PROTO_GOODS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18284BA0)
#define PROTO_GOODS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18284B40)
#define PROTO_GOODS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182843D0)
#define PROTO_GOODS_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x18284510)
#define PROTO_GOODS_SET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x182844F0)
#define PROTO_GOODS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x18284530)
#define PROTO_GOODS_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x182844D0)
#define PROTO_GOODS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x182844B0)
#define PROTO_GOODS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182846B0)
#define PROTO_GOODS_WRITETO_OFFSET UNITYSDK_OFFSET(0x18284710)
#define PROTO_GOODS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182843F0)
#define PROTO_GOODS__CTOR_OFFSET UNITYSDK_OFFSET(0x182843E0)

namespace Proto
{
	inline static constexpr unsigned int Goods_TypeDefinitionIndex = 27147;

	class Goods : public ::System::Object
	{
	public:
		// static const ::System::Int32 ItemIdFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 GoodsIdFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 BuyTimesFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 BeginTimeFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 EndTimeFieldNumber = 0xC; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 buyTimes_; // 0x18
		::System::UInt32 goodsId_; // 0x1C
		::System::Int64 beginTime_; // 0x20
		::System::UInt32 itemId_; // 0x28
		::System::Int64 endTime_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Goods* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Goods* Clone()
		{
			return ((::Proto::Goods*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_GoodsId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_GOODSID_OFFSET))(this, value);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_BUYTIMES_OFFSET))(this);
		}

		::System::Void set_BuyTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_BUYTIMES_OFFSET))(this, value);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_BEGINTIME_OFFSET))(this, value);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_ENDTIME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GOODS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::Goods* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GOODS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Goods* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GOODS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
