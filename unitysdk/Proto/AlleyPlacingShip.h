#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1932B360)
#define PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1932AEE0)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1932B080)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1932AF60)
#define PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1932B130)
#define PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x1932AF50)
#define PROTO_ALLEYPLACINGSHIP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1932AD60)
#define PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET UNITYSDK_OFFSET(0x1932AF30)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1932B510)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1932B470)
#define PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1932ADC0)
#define PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET UNITYSDK_OFFSET(0x1932AF40)
#define PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1932B220)
#define PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1932B280)
#define PROTO_ALLEYPLACINGSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1932B5F0)
#define PROTO_ALLEYPLACINGSHIP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1932AE20)
#define PROTO_ALLEYPLACINGSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1932ADD0)

namespace Proto
{
	inline static constexpr unsigned int AlleyPlacingShip_TypeDefinitionIndex = 24868;

	class AlleyPlacingShip : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyPlacingShip_TypeDefinitionIndex)->GetStaticField(0x629A0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_7*>** StaticGet__repeated_goodsList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_7*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyPlacingShip_TypeDefinitionIndex)->GetStaticField(0x629A8);
		}
		// static const ::System::Int32 ShipIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 GoodsListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_7*>* goodsList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 shipId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AlleyPlacingShip* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* Clone()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ShipId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET))(this);
		}

		::System::Void set_ShipId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_7*>* get_GoodsList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::AlleyPlacingShip* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AlleyPlacingShip* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
