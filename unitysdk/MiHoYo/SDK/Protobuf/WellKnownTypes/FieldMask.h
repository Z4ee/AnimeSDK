#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173C2B50)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CLONE_OFFSET UNITYSDK_OFFSET(0x173C2810)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173C2920)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x173C2870)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173C2990)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C24E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x173C2480)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x173C2860)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173C2BE0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C26C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x173C30B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOJSON_OFFSET UNITYSDK_OFFSET(0x173C2CA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173C2A60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_VALIDATEPATH_OFFSET UNITYSDK_OFFSET(0x173C3010)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_WRITETO_OFFSET UNITYSDK_OFFSET(0x173C2AC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C3110)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173C2770)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x173C2720)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMask_TypeDefinitionIndex = 33654;

	class FieldMask : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask_TypeDefinitionIndex)->GetStaticField(0xDF0);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_paths_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask_TypeDefinitionIndex)->GetStaticField(0xDF8);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* paths_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CLONE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* get_Paths()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PATHS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_OFFSET))(this, input);
		}

		static ::System::String* ToJson(::System::Collections::Generic::IList_1<::System::String*>* paths, ::System::Boolean diagnosticOnly)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOJSON_OFFSET))(paths, diagnosticOnly);
		}

		static ::System::Boolean ValidatePath(::System::String* input)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_VALIDATEPATH_OFFSET))(input);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TODIAGNOSTICSTRING_OFFSET))(this);
		}
	};
}
