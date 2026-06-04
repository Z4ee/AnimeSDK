#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FileOptions_Types_OptimizeMode.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class ExtensionSet_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E6C650)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x17E64E70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E6B2A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E6B240)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E65E20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x17E6AC00)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6A960)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6AD60)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x17E6AB80)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E6A190)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_GOPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6A890)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x17E6AC80)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6A9D0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6AE20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x17E6ABF0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASGOPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6A950)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x17E6A780)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AA60)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x17E6A700)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x17E6A670)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6A5A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x17E6A800)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AD50)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x17E6A880)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AFC0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AB70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPMETADATANAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6B160)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6B090)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AAE0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASRUBYPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6B230)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASSWIFTPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AEF0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x17E6A710)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6A9E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x17E6A680)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x17E6A5B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6A4E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x17E6A790)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AC90)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x17E6A810)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E6A130)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AF00)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AAF0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPMETADATANAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6B0A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6AFD0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AA70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_RUBYPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6B170)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_SWIFTPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AE30)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E6D4E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E67D20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E6A310)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x17E6AC70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6A9C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6ADD0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x17E6ABE0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_GOPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6A900)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x17E6A770)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AA50)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x17E6A6F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x17E6A620)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6A550)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x17E6A7F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AD00)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x17E6A870)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AF70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AB60)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPMETADATANAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6B110)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17E6B040)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x17E6AAD0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_RUBYPACKAGE_OFFSET UNITYSDK_OFFSET(0x17E6B1E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_SWIFTPREFIX_OFFSET UNITYSDK_OFFSET(0x17E6AEA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E6BA10)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E6BA70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6DB10)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E6A370)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x17E67CD0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions_TypeDefinitionIndex = 5487;

	class FileOptions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PhpMetadataNamespaceDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E280);
		}
		static ::System::String** StaticGet_JavaPackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E288);
		}
		static ::System::String** StaticGet_JavaOuterClassnameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E290);
		}
		static ::System::String** StaticGet_SwiftPrefixDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E298);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2A0);
		}
		static ::System::String** StaticGet_RubyPackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2A8);
		}
		static ::System::String** StaticGet_PhpClassPrefixDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2B0);
		}
		static ::System::String** StaticGet_PhpNamespaceDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2B8);
		}
		static ::System::String** StaticGet_ObjcClassPrefixDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2C8);
		}
		static ::System::String** StaticGet_GoPackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2D0);
		}
		static ::System::String** StaticGet_CsharpNamespaceDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x3E2D8);
		}
		static ::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode* StaticGet_OptimizeForDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB980);
		}
		static ::System::Boolean* StaticGet_JavaGenerateEqualsAndHashDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB984);
		}
		static ::System::Boolean* StaticGet_CcEnableArenasDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB985);
		}
		static ::System::Boolean* StaticGet_PyGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB986);
		}
		static ::System::Boolean* StaticGet_JavaStringCheckUtf8DefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB987);
		}
		static ::System::Boolean* StaticGet_JavaGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB988);
		}
		static ::System::Boolean* StaticGet_CcGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB989);
		}
		static ::System::Boolean* StaticGet_JavaMultipleFilesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB98A);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB98B);
		}
		static ::System::Boolean* StaticGet_PhpGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xB98C);
		}
		::System::String* phpClassPrefix_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* phpNamespace_; // 0x20
		::System::String* javaPackage_; // 0x28
		::System::String* goPackage_; // 0x30
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::FileOptions*>* _extensions; // 0x38
		::System::String* phpMetadataNamespace_; // 0x40
		::System::String* csharpNamespace_; // 0x48
		::System::String* objcClassPrefix_; // 0x50
		::System::String* swiftPrefix_; // 0x58
		::System::String* javaOuterClassname_; // 0x60
		::System::String* rubyPackage_; // 0x68
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x70
		::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode optimizeFor_; // 0x78
		::System::Boolean deprecated_; // 0x7C
		::System::Boolean pyGenericServices_; // 0x7D
		::System::Boolean javaStringCheckUtf8_; // 0x7E
		::System::Boolean ccGenericServices_; // 0x7F
		::System::Boolean javaGenerateEqualsAndHash_; // 0x80
		::System::Int32 _hasBits0; // 0x84
		::System::Boolean javaMultipleFiles_; // 0x88
		::System::Boolean ccEnableArenas_; // 0x89
		::System::Boolean javaGenericServices_; // 0x8A
		::System::Boolean phpGenericServices_; // 0x8B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FileOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::String* get_JavaPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAPACKAGE_OFFSET))(this);
		}

		::System::Void set_JavaPackage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAPACKAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJavaPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAPACKAGE_OFFSET))(this);
		}

		::System::String* get_JavaOuterClassname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAOUTERCLASSNAME_OFFSET))(this);
		}

		::System::Void set_JavaOuterClassname(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAOUTERCLASSNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJavaOuterClassname()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAOUTERCLASSNAME_OFFSET))(this);
		}

		::System::Boolean get_JavaMultipleFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAMULTIPLEFILES_OFFSET))(this);
		}

		::System::Void set_JavaMultipleFiles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAMULTIPLEFILES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJavaMultipleFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAMULTIPLEFILES_OFFSET))(this);
		}

		::System::Boolean get_JavaGenerateEqualsAndHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERATEEQUALSANDHASH_OFFSET))(this);
		}

		::System::Void set_JavaGenerateEqualsAndHash(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERATEEQUALSANDHASH_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJavaGenerateEqualsAndHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERATEEQUALSANDHASH_OFFSET))(this);
		}

		::System::Boolean get_JavaStringCheckUtf8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVASTRINGCHECKUTF8_OFFSET))(this);
		}

		::System::Void set_JavaStringCheckUtf8(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVASTRINGCHECKUTF8_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJavaStringCheckUtf8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVASTRINGCHECKUTF8_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode get_OptimizeFor()
		{
			return ((::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OPTIMIZEFOR_OFFSET))(this);
		}

		::System::Void set_OptimizeFor(::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OPTIMIZEFOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptimizeFor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOPTIMIZEFOR_OFFSET))(this);
		}

		::System::String* get_GoPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_GOPACKAGE_OFFSET))(this);
		}

		::System::Void set_GoPackage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_GOPACKAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasGoPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASGOPACKAGE_OFFSET))(this);
		}

		::System::Boolean get_CcGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_CcGenericServices(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCGENERICSERVICES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCcGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_JavaGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_JavaGenericServices(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERICSERVICES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJavaGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_PyGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PYGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_PyGenericServices(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PYGENERICSERVICES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPyGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPYGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_PhpGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_PhpGenericServices(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPGENERICSERVICES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPhpGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean get_CcEnableArenas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCENABLEARENAS_OFFSET))(this);
		}

		::System::Void set_CcEnableArenas(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCENABLEARENAS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCcEnableArenas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCENABLEARENAS_OFFSET))(this);
		}

		::System::String* get_ObjcClassPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OBJCCLASSPREFIX_OFFSET))(this);
		}

		::System::Void set_ObjcClassPrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OBJCCLASSPREFIX_OFFSET))(this, a1);
		}

		::System::Boolean get_HasObjcClassPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOBJCCLASSPREFIX_OFFSET))(this);
		}

		::System::String* get_CsharpNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CSHARPNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CsharpNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CSHARPNAMESPACE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCsharpNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCSHARPNAMESPACE_OFFSET))(this);
		}

		::System::String* get_SwiftPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_SWIFTPREFIX_OFFSET))(this);
		}

		::System::Void set_SwiftPrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_SWIFTPREFIX_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSwiftPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASSWIFTPREFIX_OFFSET))(this);
		}

		::System::String* get_PhpClassPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPCLASSPREFIX_OFFSET))(this);
		}

		::System::Void set_PhpClassPrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPCLASSPREFIX_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPhpClassPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPCLASSPREFIX_OFFSET))(this);
		}

		::System::String* get_PhpNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPNAMESPACE_OFFSET))(this);
		}

		::System::Void set_PhpNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPNAMESPACE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPhpNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPNAMESPACE_OFFSET))(this);
		}

		::System::String* get_PhpMetadataNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPMETADATANAMESPACE_OFFSET))(this);
		}

		::System::Void set_PhpMetadataNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPMETADATANAMESPACE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPhpMetadataNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPMETADATANAMESPACE_OFFSET))(this);
		}

		::System::String* get_RubyPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_RUBYPACKAGE_OFFSET))(this);
		}

		::System::Void set_RubyPackage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_RUBYPACKAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRubyPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASRUBYPACKAGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FileOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FileOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
