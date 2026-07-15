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
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BDDBF50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CLONE_OFFSET UNITYSDK_OFFSET(0x1BDDBAD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BDDBCB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BDDBB30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BDDBDD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDDB700)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BDDB6A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x1BDDBB20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_ISPATHVALID_OFFSET UNITYSDK_OFFSET(0x1BDDC6E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BDDC150)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BDDBFF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDDB8E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1BDDC680)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BDDC310)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDDBE40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BDDBEA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDDC780)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDDB980)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDB940)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMask_TypeDefinitionIndex = 5428;

	class FieldMask : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::FieldMask*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::FieldMask*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask_TypeDefinitionIndex)->GetStaticField(0x3A0C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_paths_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask_TypeDefinitionIndex)->GetStaticField(0x3A0C8);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* paths_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::FieldMask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::FieldMask*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::FieldMask*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::FieldMask* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::FieldMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* get_Paths()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PATHS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::FieldMask* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::FieldMask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_1_OFFSET))(this, a1);
		}

		static ::System::String* ToJson(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOJSON_OFFSET))(a1, a2);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TODIAGNOSTICSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsPathValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_ISPATHVALID_OFFSET))(a1);
		}
	};
}
