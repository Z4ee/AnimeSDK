#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/ItemCost_ItemOneofCase.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define PROTO_ITEMCOST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9677F0)
#define PROTO_ITEMCOST_CLEARITEM_OFFSET UNITYSDK_OFFSET(0x1D966FE0)
#define PROTO_ITEMCOST_CLONE_OFFSET UNITYSDK_OFFSET(0x1D966FA0)
#define PROTO_ITEMCOST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D967020)
#define PROTO_ITEMCOST_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D966FF0)
#define PROTO_ITEMCOST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9673F0)
#define PROTO_ITEMCOST_GET_EQUIPMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D966E40)
#define PROTO_ITEMCOST_GET_ITEMCASE_OFFSET UNITYSDK_OFFSET(0x1D966FD0)
#define PROTO_ITEMCOST_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D966B70)
#define PROTO_ITEMCOST_GET_PILEITEM_OFFSET UNITYSDK_OFFSET(0x1D966D90)
#define PROTO_ITEMCOST_GET_RELICUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D966EF0)
#define PROTO_ITEMCOST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D967D10)
#define PROTO_ITEMCOST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D967A50)
#define PROTO_ITEMCOST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D966BA0)
#define PROTO_ITEMCOST_SET_EQUIPMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D966EC0)
#define PROTO_ITEMCOST_SET_PILEITEM_OFFSET UNITYSDK_OFFSET(0x1D966E20)
#define PROTO_ITEMCOST_SET_RELICUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D966F70)
#define PROTO_ITEMCOST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D967520)
#define PROTO_ITEMCOST_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D967580)
#define PROTO_ITEMCOST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D967F70)
#define PROTO_ITEMCOST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D966BC0)
#define PROTO_ITEMCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D966BB0)

namespace Proto
{
	inline static constexpr unsigned int ItemCost_TypeDefinitionIndex = 27283;

	class ItemCost : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::ItemCost*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(ItemCost_TypeDefinitionIndex)->GetStaticField(0x11120);
		}
		// static const ::System::Int32 PileItemFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 EquipmentUniqueIdFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 RelicUniqueIdFieldNumber = 0x4; // 0x0
		::System::Object* item_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::ItemCost_ItemOneofCase itemCase_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ItemCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMCOST__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::ItemCost*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::ItemCost*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ItemCost* Clone()
		{
			return ((::Proto::ItemCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_CLONE_OFFSET))(this);
		}

		::Proto::PileItem* get_PileItem()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_PILEITEM_OFFSET))(this);
		}

		::System::Void set_PileItem(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_SET_PILEITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipmentUniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_EQUIPMENTUNIQUEID_OFFSET))(this);
		}

		::System::Void set_EquipmentUniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_SET_EQUIPMENTUNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelicUniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_RELICUNIQUEID_OFFSET))(this);
		}

		::System::Void set_RelicUniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_SET_RELICUNIQUEID_OFFSET))(this, a1);
		}

		::Proto::ItemCost_ItemOneofCase get_ItemCase()
		{
			return ((::Proto::ItemCost_ItemOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_ITEMCASE_OFFSET))(this);
		}

		::System::Void ClearItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_CLEARITEM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::ItemCost* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ItemCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
