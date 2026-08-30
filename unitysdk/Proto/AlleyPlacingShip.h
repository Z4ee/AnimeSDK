#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0553C0)
#define PROTO_ALLEYPLACINGSHIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E054EB0)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0550C0)
#define PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E054F30)
#define PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0551E0)
#define PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x1E054F00)
#define PROTO_ALLEYPLACINGSHIP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E054D30)
#define PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET UNITYSDK_OFFSET(0x1E054F10)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E055590)
#define PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0554F0)
#define PROTO_ALLEYPLACINGSHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E054D90)
#define PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET UNITYSDK_OFFSET(0x1E054F20)
#define PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E055250)
#define PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0552B0)
#define PROTO_ALLEYPLACINGSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E055760)
#define PROTO_ALLEYPLACINGSHIP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E054DF0)
#define PROTO_ALLEYPLACINGSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E054DA0)

namespace Proto
{
	inline static constexpr unsigned int AlleyPlacingShip_TypeDefinitionIndex = 25810;

	class AlleyPlacingShip : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::AlleyPlacingShip*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyPlacingShip_TypeDefinitionIndex)->GetStaticField(0x59250);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_4*>** StaticGet__repeated_goodsList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_4*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyPlacingShip_TypeDefinitionIndex)->GetStaticField(0x59258);
		}
		// static const ::System::Int32 GoodsListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ShipIdFieldNumber = 0x9; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_4*>* goodsList_; // 0x18
		::System::UInt32 shipId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP__CTOR_1_OFFSET))(this, a1);
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

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_4*>* get_GoodsList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_GOODSLIST_OFFSET))(this);
		}

		::System::UInt32 get_ShipId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GET_SHIPID_OFFSET))(this);
		}

		::System::Void set_ShipId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_SET_SHIPID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
