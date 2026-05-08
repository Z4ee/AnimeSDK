#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldDescriptorProto_Types_Label.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldDescriptorProto_Types_Type.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldOptions; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C376FE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3764C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C376930)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3768D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C376A50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C376760)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C376120)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x1C3766B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1C376820)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1C3765E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C376510)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1C3765C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1C376810)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C3764A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C3760C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1C376600)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C3765F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3775A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_ONCONSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1C376380)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3762A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C376770)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x1C3766C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1C376830)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C376520)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1C3765D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1C376390)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C3764B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1C376610)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C376D20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C376D80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C377AA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3763A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C376300)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto_TypeDefinitionIndex = 26012;

	class FieldDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F630);
		}
		::System::String* name_; // 0x10
		::System::String* defaultValue_; // 0x18
		::System::String* extendee_; // 0x20
		::System::String* jsonName_; // 0x28
		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* options_; // 0x30
		::System::String* typeName_; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type type_; // 0x40
		::System::Int32 number_; // 0x44
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Label label_; // 0x48
		::System::Int32 oneofIndex_; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Void OnConstruction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_ONCONSTRUCTION_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Label get_Label()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Label(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type get_Type()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void set_TypeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET))(this, value);
		}

		::System::String* get_Extendee()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET))(this);
		}

		::System::Void set_Extendee(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET))(this, value);
		}

		::System::String* get_DefaultValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_OneofIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET))(this);
		}

		::System::Void set_OneofIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET))(this, value);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET))(this);
		}

		::System::Void set_JsonName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
