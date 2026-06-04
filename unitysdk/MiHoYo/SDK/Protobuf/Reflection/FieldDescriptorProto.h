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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181B4620)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x181B3A70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181B3E60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x181B3E00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181B3F80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x181B3200)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181B36E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x181B3C10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x181B2D60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x181B2D80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x181B2CA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x181B2DB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x181B2D30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x181B3A00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x181A9880)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x181B31F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x181B2CB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181B4BE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_ONCONSTRUCTION_OFFSET UNITYSDK_OFFSET(0x181B3910)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181B3860)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x181B3CC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x181B3C20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x181B3D60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x181B3AC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x181B3B60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x181B3920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x181B3A60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x181B3B70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181B4360)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x181B43C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x181B5140)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181B3930)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x181B38C0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto_TypeDefinitionIndex = 33962;

	class FieldDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4D0E0);
		}
		::System::String* name_; // 0x10
		::System::String* defaultValue_; // 0x18
		::System::String* jsonName_; // 0x20
		::System::String* typeName_; // 0x28
		::System::String* extendee_; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* options_; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type type_; // 0x40
		::System::Int32 oneofIndex_; // 0x44
		::System::Int32 number_; // 0x48
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Label label_; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, a1);
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

		::System::Void set_TypeName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET))(this, a1);
		}

		::System::String* get_Extendee()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET))(this);
		}

		::System::Void set_Extendee(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET))(this, a1);
		}

		::System::String* get_DefaultValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_OneofIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET))(this);
		}

		::System::Void set_OneofIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET))(this, a1);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET))(this);
		}

		::System::Void set_JsonName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}
	};
}
