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

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B719DE0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CLONE_OFFSET UNITYSDK_OFFSET(0x1B719B20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B719C30)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B719B80)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B719CA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B719790)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B719730)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x1B719B70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B719E70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B7199D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1B71A490)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B71A030)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B719CF0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_VALIDATEPATH_OFFSET UNITYSDK_OFFSET(0x1B71A3F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B719D50)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B71A4F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B719A80)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B719A30)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMask_TypeDefinitionIndex = 35074;

	class FieldMask : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask_TypeDefinitionIndex)->GetStaticField(0xC30);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_paths_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask_TypeDefinitionIndex)->GetStaticField(0xC38);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* paths_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK__CTOR_1_OFFSET))(this, a1);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_MERGEFROM_OFFSET))(this, a1);
		}

		static ::System::String* ToJson(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TOJSON_OFFSET))(a1, a2);
		}

		static ::System::Boolean ValidatePath(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_VALIDATEPATH_OFFSET))(a1);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK_TODIAGNOSTICSTRING_OFFSET))(this);
		}
	};
}
