#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_7.h"
#include "unitysdk/System/Object.h"

class Class_1_0306FBB84513F0B2_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_MONOPOLYACTIONRESULT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1934B7C0)
#define PROTO_MONOPOLYACTIONRESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x1934B1D0)
#define PROTO_MONOPOLYACTIONRESULT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1934B4B0)
#define PROTO_MONOPOLYACTIONRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1934B3A0)
#define PROTO_MONOPOLYACTIONRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1934B590)
#define PROTO_MONOPOLYACTIONRESULT_GET_CLICKCELLID_OFFSET UNITYSDK_OFFSET(0x1934B360)
#define PROTO_MONOPOLYACTIONRESULT_GET_CLICKMAPID_OFFSET UNITYSDK_OFFSET(0x1934B340)
#define PROTO_MONOPOLYACTIONRESULT_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1934B2C0)
#define PROTO_MONOPOLYACTIONRESULT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1934B2E0)
#define PROTO_MONOPOLYACTIONRESULT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1934B0B0)
#define PROTO_MONOPOLYACTIONRESULT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1934B320)
#define PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERCELLID_OFFSET UNITYSDK_OFFSET(0x1934B300)
#define PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERMAPID_OFFSET UNITYSDK_OFFSET(0x1934B380)
#define PROTO_MONOPOLYACTIONRESULT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1934BC00)
#define PROTO_MONOPOLYACTIONRESULT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1934BB30)
#define PROTO_MONOPOLYACTIONRESULT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1934B110)
#define PROTO_MONOPOLYACTIONRESULT_SET_CLICKCELLID_OFFSET UNITYSDK_OFFSET(0x1934B370)
#define PROTO_MONOPOLYACTIONRESULT_SET_CLICKMAPID_OFFSET UNITYSDK_OFFSET(0x1934B350)
#define PROTO_MONOPOLYACTIONRESULT_SET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1934B2D0)
#define PROTO_MONOPOLYACTIONRESULT_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1934B2F0)
#define PROTO_MONOPOLYACTIONRESULT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1934B330)
#define PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERCELLID_OFFSET UNITYSDK_OFFSET(0x1934B310)
#define PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERMAPID_OFFSET UNITYSDK_OFFSET(0x1934B390)
#define PROTO_MONOPOLYACTIONRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1934B5F0)
#define PROTO_MONOPOLYACTIONRESULT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1934B650)
#define PROTO_MONOPOLYACTIONRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1934BD30)
#define PROTO_MONOPOLYACTIONRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1934B130)
#define PROTO_MONOPOLYACTIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1934B120)

namespace Proto
{
	inline static constexpr unsigned int MonopolyActionResult_TypeDefinitionIndex = 29267;

	class MonopolyActionResult : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MonopolyActionResult*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MonopolyActionResult*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyActionResult_TypeDefinitionIndex)->GetStaticField(0x62680);
		}
		// static const ::System::Int32 DetailFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 EffectTypeFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 TriggerCellIdFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 SourceTypeFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 ClickMapIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ClickCellIdFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 TriggerMapIdFieldNumber = 0xA; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Class_1_0306FBB84513F0B2_1* detail_; // 0x18
		::System::UInt32 clickMapId_; // 0x20
		::System::UInt32 triggerMapId_; // 0x24
		::System::UInt32 clickCellId_; // 0x28
		::Enum_3_0F1B992870941C13_7 sourceType_; // 0x2C
		::System::UInt32 triggerCellId_; // 0x30
		::System::UInt32 effectType_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MonopolyActionResult* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MonopolyActionResult*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MonopolyActionResult*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MonopolyActionResult* Clone()
		{
			return ((::Proto::MonopolyActionResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CLONE_OFFSET))(this);
		}

		::Class_1_0306FBB84513F0B2_1* get_Detail()
		{
			return ((::Class_1_0306FBB84513F0B2_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_DETAIL_OFFSET))(this);
		}

		::System::Void set_Detail(::Class_1_0306FBB84513F0B2_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0306FBB84513F0B2_1*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_DETAIL_OFFSET))(this, value);
		}

		::System::UInt32 get_EffectType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_EFFECTTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_TriggerCellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERCELLID_OFFSET))(this);
		}

		::System::Void set_TriggerCellId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERCELLID_OFFSET))(this, value);
		}

		::Enum_3_0F1B992870941C13_7 get_SourceType()
		{
			return ((::Enum_3_0F1B992870941C13_7(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_0F1B992870941C13_7 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_7))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_ClickMapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_CLICKMAPID_OFFSET))(this);
		}

		::System::Void set_ClickMapId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_CLICKMAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_ClickCellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_CLICKCELLID_OFFSET))(this);
		}

		::System::Void set_ClickCellId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_CLICKCELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_TriggerMapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERMAPID_OFFSET))(this);
		}

		::System::Void set_TriggerMapId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERMAPID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MonopolyActionResult* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MonopolyActionResult* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
