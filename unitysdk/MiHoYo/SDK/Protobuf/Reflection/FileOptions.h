#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FileOptions_Types_OptimizeMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6FEAA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6FDBA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6FE0D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6FE070)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6FE2B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x1F6FDEF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x1F6FDE70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F6FDFC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1F6FDED0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6FD810)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_GOPACKAGE_OFFSET UNITYSDK_OFFSET(0x1F6FDDC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x1F6FDD70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x1F6FDE90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x1F6FDD50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1F6FDCA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x1F6FDBF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x1F6FDD90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x1F6FDF10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x1F6FDDB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F6FD7B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x1F6FDEB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6FEE00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6FD990)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x1F6FDF00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x1F6FDE80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F6FDFD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1F6FDEE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_GOPACKAGE_OFFSET UNITYSDK_OFFSET(0x1F6FDDD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x1F6FDD80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x1F6FDEA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x1F6FDD60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1F6FDCB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x1F6FDC00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x1F6FDDA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x1F6FDF20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x1F6FDEC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6FE690)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6FE6F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6FF3A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6FDA80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FD9F0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions_TypeDefinitionIndex = 29125;

	class FileOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileOptions*>**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x24A50);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x24A58);
		}
		::System::String* csharpNamespace_; // 0x10
		::System::String* javaOuterClassname_; // 0x18
		::System::String* goPackage_; // 0x20
		::System::String* objcClassPrefix_; // 0x28
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x30
		::System::String* javaPackage_; // 0x38
		::System::Boolean ccEnableArenas_; // 0x40
		::System::Boolean deprecated_; // 0x41
		::System::Boolean javaStringCheckUtf8_; // 0x42
		::System::Boolean javaMultipleFiles_; // 0x43
		::System::Boolean ccGenericServices_; // 0x44
		::System::Boolean javaGenerateEqualsAndHash_; // 0x45
		::System::Boolean javaGenericServices_; // 0x46
		::System::Boolean pyGenericServices_; // 0x47
		::MiHoYo::SDK::Protobuf::Reflection::FileOptions_Types_OptimizeMode optimizeFor_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::FileOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::String* get_JavaPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAPACKAGE_OFFSET))(this);
		}

		::System::Void set_JavaPackage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAPACKAGE_OFFSET))(this, value);
		}

		::System::String* get_JavaOuterClassname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAOUTERCLASSNAME_OFFSET))(this);
		}

		::System::Void set_JavaOuterClassname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAOUTERCLASSNAME_OFFSET))(this, value);
		}

		::System::Boolean get_JavaMultipleFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAMULTIPLEFILES_OFFSET))(this);
		}

		::System::Void set_JavaMultipleFiles(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAMULTIPLEFILES_OFFSET))(this, value);
		}

		::System::Boolean get_JavaGenerateEqualsAndHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERATEEQUALSANDHASH_OFFSET))(this);
		}

		::System::Void set_JavaGenerateEqualsAndHash(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERATEEQUALSANDHASH_OFFSET))(this, value);
		}

		::System::Boolean get_JavaStringCheckUtf8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVASTRINGCHECKUTF8_OFFSET))(this);
		}

		::System::Void set_JavaStringCheckUtf8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVASTRINGCHECKUTF8_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileOptions_Types_OptimizeMode get_OptimizeFor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileOptions_Types_OptimizeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OPTIMIZEFOR_OFFSET))(this);
		}

		::System::String* get_GoPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_GOPACKAGE_OFFSET))(this);
		}

		::System::Void set_GoPackage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_GOPACKAGE_OFFSET))(this, value);
		}

		::System::Boolean get_CcGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_CcGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_JavaGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_JavaGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_PyGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PYGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_PyGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PYGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_CcEnableArenas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCENABLEARENAS_OFFSET))(this);
		}

		::System::Void set_CcEnableArenas(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCENABLEARENAS_OFFSET))(this, value);
		}

		::System::String* get_ObjcClassPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OBJCCLASSPREFIX_OFFSET))(this);
		}

		::System::Void set_ObjcClassPrefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OBJCCLASSPREFIX_OFFSET))(this, value);
		}

		::System::String* get_CsharpNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CSHARPNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CsharpNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CSHARPNAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::FileOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_OFFSET))(this, input);
		}
	};
}
