#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_21.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_FLOORCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19339560)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19338DD0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19339080)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x19339020)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193391F0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_BOOLVAL_OFFSET UNITYSDK_OFFSET(0x19338F30)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_FLOATVAL_OFFSET UNITYSDK_OFFSET(0x19338F50)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19338E60)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19338CE0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_STRVAL_OFFSET UNITYSDK_OFFSET(0x19338F70)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19338F10)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19339950)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19339830)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19338D40)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_BOOLVAL_OFFSET UNITYSDK_OFFSET(0x19338F40)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_FLOATVAL_OFFSET UNITYSDK_OFFSET(0x19338F60)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19338E70)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_STRVAL_OFFSET UNITYSDK_OFFSET(0x19338F80)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x19338F20)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193393B0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19339410)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19339B40)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19338D70)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19338D50)

namespace Proto
{
	inline static constexpr unsigned int FloorCustomValueSnapshot_TypeDefinitionIndex = 24522;

	class FloorCustomValueSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::FloorCustomValueSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::FloorCustomValueSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(FloorCustomValueSnapshot_TypeDefinitionIndex)->GetStaticField(0x63940);
		}
		// static const ::System::Int32 NameFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 TypeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 BoolValFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 FloatValFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 StrValFieldNumber = 0x5; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* strVal_; // 0x18
		::System::String* name_; // 0x20
		::Enum_3_0A3761FE34514D6C_21 type_; // 0x28
		::System::Single floatVal_; // 0x2C
		::System::Boolean boolVal_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FloorCustomValueSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::FloorCustomValueSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::FloorCustomValueSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::FloorCustomValueSnapshot* Clone()
		{
			return ((::Proto::FloorCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_NAME_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_21 get_Type()
		{
			return ((::Enum_3_0A3761FE34514D6C_21(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_0A3761FE34514D6C_21 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_21))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_BoolVal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_BOOLVAL_OFFSET))(this);
		}

		::System::Void set_BoolVal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_BOOLVAL_OFFSET))(this, value);
		}

		::System::Single get_FloatVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_FLOATVAL_OFFSET))(this);
		}

		::System::Void set_FloatVal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_FLOATVAL_OFFSET))(this, value);
		}

		::System::String* get_StrVal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_STRVAL_OFFSET))(this);
		}

		::System::Void set_StrVal(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_STRVAL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::FloorCustomValueSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FloorCustomValueSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
