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

#define PROTO_FLOORCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0EC4F0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0EBE00)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0EC010)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0EBFB0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0EC180)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_BOOLVAL_OFFSET UNITYSDK_OFFSET(0x1A0EBF10)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_FLOATVAL_OFFSET UNITYSDK_OFFSET(0x1A0EBF30)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A0EBE90)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0EBD10)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_STRVAL_OFFSET UNITYSDK_OFFSET(0x1A0EBF50)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A0EBEF0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0EC840)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0EC7C0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0EBD70)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_BOOLVAL_OFFSET UNITYSDK_OFFSET(0x1A0EBF20)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_FLOATVAL_OFFSET UNITYSDK_OFFSET(0x1A0EBF40)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A0EBEA0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_STRVAL_OFFSET UNITYSDK_OFFSET(0x1A0EBF60)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A0EBF00)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0EC340)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0EC3A0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0EC970)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0EBDA0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EBD80)

namespace Proto
{
	inline static constexpr unsigned int FloorCustomValueSnapshot_TypeDefinitionIndex = 24383;

	class FloorCustomValueSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::FloorCustomValueSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::FloorCustomValueSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(FloorCustomValueSnapshot_TypeDefinitionIndex)->GetStaticField(0x43150);
		}
		// static const ::System::Int32 NameFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 TypeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 BoolValFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 FloatValFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 StrValFieldNumber = 0x5; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* strVal_; // 0x18
		::System::String* name_; // 0x20
		::System::Boolean boolVal_; // 0x28
		::Enum_3_0A3761FE34514D6C_21 type_; // 0x2C
		::System::Single floatVal_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FloorCustomValueSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_NAME_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_21 get_Type()
		{
			return ((::Enum_3_0A3761FE34514D6C_21(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_0A3761FE34514D6C_21 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_21))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_BoolVal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_BOOLVAL_OFFSET))(this);
		}

		::System::Void set_BoolVal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_BOOLVAL_OFFSET))(this, a1);
		}

		::System::Single get_FloatVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_FLOATVAL_OFFSET))(this);
		}

		::System::Void set_FloatVal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_FLOATVAL_OFFSET))(this, a1);
		}

		::System::String* get_StrVal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GET_STRVAL_OFFSET))(this);
		}

		::System::Void set_StrVal(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_SET_STRVAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::FloorCustomValueSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FloorCustomValueSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FloorCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
