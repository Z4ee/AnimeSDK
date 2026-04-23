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
namespace Proto { class Shop; }
namespace System { class String; }

#define PROTO_GETSHOPLISTSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1933F490)
#define PROTO_GETSHOPLISTSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1933EFF0)
#define PROTO_GETSHOPLISTSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1933F170)
#define PROTO_GETSHOPLISTSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1933F070)
#define PROTO_GETSHOPLISTSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1933F230)
#define PROTO_GETSHOPLISTSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1933EED0)
#define PROTO_GETSHOPLISTSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933F020)
#define PROTO_GETSHOPLISTSCRSP_GET_SHOPLIST_OFFSET UNITYSDK_OFFSET(0x1933F060)
#define PROTO_GETSHOPLISTSCRSP_GET_SHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1933F040)
#define PROTO_GETSHOPLISTSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1933F6C0)
#define PROTO_GETSHOPLISTSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1933F610)
#define PROTO_GETSHOPLISTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1933EF00)
#define PROTO_GETSHOPLISTSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933F030)
#define PROTO_GETSHOPLISTSCRSP_SET_SHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1933F050)
#define PROTO_GETSHOPLISTSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1933F330)
#define PROTO_GETSHOPLISTSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1933F390)
#define PROTO_GETSHOPLISTSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933F790)
#define PROTO_GETSHOPLISTSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1933EF50)
#define PROTO_GETSHOPLISTSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1933EF10)

namespace Proto
{
	inline static constexpr unsigned int GetShopListScRsp_TypeDefinitionIndex = 32285;

	class GetShopListScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::GetShopListScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetShopListScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetShopListScRsp_TypeDefinitionIndex)->GetStaticField(0x5E980);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::Shop*>** StaticGet__repeated_shopList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::Shop*>**)Il2CppClass::FromTypeDefinitionIndex(GetShopListScRsp_TypeDefinitionIndex)->GetStaticField(0x5E988);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ShopTypeFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 ShopListFieldNumber = 0xF; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Shop*>* shopList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 shopType_; // 0x20
		::System::UInt32 retcode_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetShopListScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetShopListScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetShopListScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetShopListScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetShopListScRsp* Clone()
		{
			return ((::Proto::GetShopListScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_ShopType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_SHOPTYPE_OFFSET))(this);
		}

		::System::Void set_ShopType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_SET_SHOPTYPE_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Shop*>* get_ShopList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Shop*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GET_SHOPLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetShopListScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetShopListScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetShopListScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetShopListScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSHOPLISTSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
