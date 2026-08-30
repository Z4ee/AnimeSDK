#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GOODS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D963D40)
#define PROTO_GOODS_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9638F0)
#define PROTO_GOODS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D963A40)
#define PROTO_GOODS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9639E0)
#define PROTO_GOODS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D963A90)
#define PROTO_GOODS_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1D9639A0)
#define PROTO_GOODS_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x1D963980)
#define PROTO_GOODS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D9639C0)
#define PROTO_GOODS_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1D963940)
#define PROTO_GOODS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D963960)
#define PROTO_GOODS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D963860)
#define PROTO_GOODS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9640D0)
#define PROTO_GOODS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D964070)
#define PROTO_GOODS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D963890)
#define PROTO_GOODS_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1D9639B0)
#define PROTO_GOODS_SET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x1D963990)
#define PROTO_GOODS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D9639D0)
#define PROTO_GOODS_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1D963950)
#define PROTO_GOODS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D963970)
#define PROTO_GOODS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D963AF0)
#define PROTO_GOODS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D963B50)
#define PROTO_GOODS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D964190)
#define PROTO_GOODS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9638B0)
#define PROTO_GOODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9638A0)

namespace Proto
{
	inline static constexpr unsigned int Goods_TypeDefinitionIndex = 33519;

	class Goods : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Goods*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Goods*>**)Il2CppClass::FromTypeDefinitionIndex(Goods_TypeDefinitionIndex)->GetStaticField(0x59D30);
		}
		// static const ::System::Int32 GoodsIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ItemIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 BuyTimesFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 BeginTimeFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 EndTimeFieldNumber = 0x7; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 buyTimes_; // 0x18
		::System::UInt32 itemId_; // 0x1C
		::System::UInt32 goodsId_; // 0x20
		::System::Int64 beginTime_; // 0x28
		::System::Int64 endTime_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Goods* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GOODS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::Goods*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::Goods*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Goods* Clone()
		{
			return ((::Proto::Goods*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GoodsId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_GOODSID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_BUYTIMES_OFFSET))(this);
		}

		::System::Void set_BuyTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_BUYTIMES_OFFSET))(this, a1);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GOODS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::Goods* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GOODS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Goods* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GOODS_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
