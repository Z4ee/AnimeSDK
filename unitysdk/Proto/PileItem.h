#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_PILEITEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A11EE90)
#define PROTO_PILEITEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1A11EC20)
#define PROTO_PILEITEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A11ED20)
#define PROTO_PILEITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A11ECB0)
#define PROTO_PILEITEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A11ED80)
#define PROTO_PILEITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A11EC70)
#define PROTO_PILEITEM_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x1A11EC90)
#define PROTO_PILEITEM_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A11EBA0)
#define PROTO_PILEITEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A11EFE0)
#define PROTO_PILEITEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A11EFA0)
#define PROTO_PILEITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A11EBD0)
#define PROTO_PILEITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A11EC80)
#define PROTO_PILEITEM_SET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x1A11ECA0)
#define PROTO_PILEITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A11EDB0)
#define PROTO_PILEITEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A11EE10)
#define PROTO_PILEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A11F160)
#define PROTO_PILEITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A11EBF0)
#define PROTO_PILEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A11EBE0)

namespace Proto
{
	inline static constexpr unsigned int PileItem_TypeDefinitionIndex = 26140;

	class PileItem : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::PileItem*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(PileItem_TypeDefinitionIndex)->GetStaticField(0x4020);
		}
		// static const ::System::Int32 ItemIdFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 ItemNumFieldNumber = 0xB; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 itemNum_; // 0x18
		::System::UInt32 itemId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PILEITEM__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PileItem*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PileItem*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PileItem* Clone()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_ITEMNUM_OFFSET))(this);
		}

		::System::Void set_ItemNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_SET_ITEMNUM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::PileItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
