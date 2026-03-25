#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemCost; }
namespace System { class String; }

#define PROTO_EXCHANGESTAMINASCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1827C090)
#define PROTO_EXCHANGESTAMINASCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1827BBF0)
#define PROTO_EXCHANGESTAMINASCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1827BCE0)
#define PROTO_EXCHANGESTAMINASCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1827BCB0)
#define PROTO_EXCHANGESTAMINASCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1827BDC0)
#define PROTO_EXCHANGESTAMINASCRSP_GET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1827BC20)
#define PROTO_EXCHANGESTAMINASCRSP_GET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1827BC80)
#define PROTO_EXCHANGESTAMINASCRSP_GET_LASTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1827BC60)
#define PROTO_EXCHANGESTAMINASCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827BC90)
#define PROTO_EXCHANGESTAMINASCRSP_GET_STAMINAADD_OFFSET UNITYSDK_OFFSET(0x1827BC40)
#define PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1827C440)
#define PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1827C370)
#define PROTO_EXCHANGESTAMINASCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1827BB00)
#define PROTO_EXCHANGESTAMINASCRSP_SET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1827BC30)
#define PROTO_EXCHANGESTAMINASCRSP_SET_LASTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1827BC70)
#define PROTO_EXCHANGESTAMINASCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827BCA0)
#define PROTO_EXCHANGESTAMINASCRSP_SET_STAMINAADD_OFFSET UNITYSDK_OFFSET(0x1827BC50)
#define PROTO_EXCHANGESTAMINASCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1827BED0)
#define PROTO_EXCHANGESTAMINASCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1827BF30)
#define PROTO_EXCHANGESTAMINASCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1827C540)
#define PROTO_EXCHANGESTAMINASCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1827BB50)
#define PROTO_EXCHANGESTAMINASCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1827BB10)

namespace Proto
{
	inline static constexpr unsigned int ExchangeStaminaScRsp_TypeDefinitionIndex = 25967;

	class ExchangeStaminaScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet__repeated_itemCostList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(ExchangeStaminaScRsp_TypeDefinitionIndex)->GetStaticField(0x1A130);
		}
		// static const ::System::Int32 ExchangeTimesFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 StaminaAddFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 LastRecoverTimeFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 ItemCostListFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xF; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* itemCostList_; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 staminaAdd_; // 0x24
		::System::UInt32 exchangeTimes_; // 0x28
		::System::Int64 lastRecoverTime_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ExchangeStaminaScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ExchangeStaminaScRsp*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ExchangeStaminaScRsp* Clone()
		{
			return ((::Proto::ExchangeStaminaScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ExchangeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_EXCHANGETIMES_OFFSET))(this);
		}

		::System::Void set_ExchangeTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_EXCHANGETIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_StaminaAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_STAMINAADD_OFFSET))(this);
		}

		::System::Void set_StaminaAdd(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_STAMINAADD_OFFSET))(this, value);
		}

		::System::Int64 get_LastRecoverTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_LASTRECOVERTIME_OFFSET))(this);
		}

		::System::Void set_LastRecoverTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_LASTRECOVERTIME_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* get_ItemCostList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_ITEMCOSTLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ExchangeStaminaScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ExchangeStaminaScRsp*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ExchangeStaminaScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ExchangeStaminaScRsp*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
