#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18272640)
#define PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET UNITYSDK_OFFSET(0x182721D0)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18272370)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x18272250)
#define PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18272420)
#define PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x18272220)
#define PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET UNITYSDK_OFFSET(0x18272230)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18272810)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18272770)
#define PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182720B0)
#define PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET UNITYSDK_OFFSET(0x18272240)
#define PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18272510)
#define PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x18272570)
#define PROTO_ALLEYPLACINGSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x182728F0)
#define PROTO_ALLEYPLACINGSHIP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18272110)
#define PROTO_ALLEYPLACINGSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x182720C0)

namespace Proto
{
	inline static constexpr unsigned int AlleyPlacingShip_TypeDefinitionIndex = 23372;

	class AlleyPlacingShip : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_4*>** StaticGet__repeated_goodsList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_4*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyPlacingShip_TypeDefinitionIndex)->GetStaticField(0x19250);
		}
		// static const ::System::Int32 GoodsListFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ShipIdFieldNumber = 0x8; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_4*>* goodsList_; // 0x10
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

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* Clone()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_4*>* get_GoodsList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET))(this);
		}

		::System::UInt32 get_ShipId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET))(this);
		}

		::System::Void set_ShipId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET))(this, value);
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
