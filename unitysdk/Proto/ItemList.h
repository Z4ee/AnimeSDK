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
namespace Proto { class Item; }
namespace System { class String; }

#define PROTO_ITEMLIST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0F8960)
#define PROTO_ITEMLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0E1320)
#define PROTO_ITEMLIST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0F87A0)
#define PROTO_ITEMLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0F86C0)
#define PROTO_ITEMLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0E17B0)
#define PROTO_ITEMLIST_GET_ITEMLIST__OFFSET UNITYSDK_OFFSET(0x1A0F86B0)
#define PROTO_ITEMLIST_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0F85E0)
#define PROTO_ITEMLIST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0F8A00)
#define PROTO_ITEMLIST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0E1DC0)
#define PROTO_ITEMLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0F8610)
#define PROTO_ITEMLIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0F8850)
#define PROTO_ITEMLIST_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0F88B0)
#define PROTO_ITEMLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F8BA0)
#define PROTO_ITEMLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0F8620)
#define PROTO_ITEMLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E1D80)

namespace Proto
{
	inline static constexpr unsigned int ItemList_TypeDefinitionIndex = 26138;

	class ItemList : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::Item*>** StaticGet__repeated_itemList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::Item*>**)Il2CppClass::FromTypeDefinitionIndex(ItemList_TypeDefinitionIndex)->GetStaticField(0x17D50);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::ItemList*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(ItemList_TypeDefinitionIndex)->GetStaticField(0x17D58);
		}
		// static const ::System::Int32 ItemList_FieldNumber = 0x7; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* itemList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::ItemList*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::ItemList*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ItemList* Clone()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* get_ItemList_()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GET_ITEMLIST__OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::ItemList* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
