#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class Value; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x171331E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_CLONE_OFFSET UNITYSDK_OFFSET(0x17132E40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17132FB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_OFFSET UNITYSDK_OFFSET(0x17132EA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17133060)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17132A90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x17132E90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17132A30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x171333B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17133280)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17132C10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x171330D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17133130)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17133490)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17132CC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x17132C70)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Struct_TypeDefinitionIndex = 6228;

	class Struct : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Struct*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Struct*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_TypeDefinitionIndex)->GetStaticField(0x52D0);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Google::Protobuf::WellKnownTypes::Value*>** StaticGet__map_fields_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Google::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_TypeDefinitionIndex)->GetStaticField(0x52D8);
		}
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::Google::Protobuf::WellKnownTypes::Value*>* fields_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Struct* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Struct*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Struct*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Struct* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::Google::Protobuf::WellKnownTypes::Value*>* get_Fields()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::Google::Protobuf::WellKnownTypes::Value*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_FIELDS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Struct* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Struct* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
