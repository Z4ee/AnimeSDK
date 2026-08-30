#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class DescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace Google::Protobuf::Reflection { class SourceCodeInfo; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B382320)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1B3802E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B380550)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3804F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B380930)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1B3803F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B37FCB0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1B380420)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x1B380440)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1B380380)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B380270)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASPACKAGE_OFFSET UNITYSDK_OFFSET(0x1B3803E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASSOURCECODEINFO_OFFSET UNITYSDK_OFFSET(0x1B3802D0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASSYNTAX_OFFSET UNITYSDK_OFFSET(0x1B3804E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B380410)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B37D320)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B380450)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0x1B37D390)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B37FC50)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PUBLICDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1B380400)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SERVICE_OFFSET UNITYSDK_OFFSET(0x1B380430)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SOURCECODEINFO_OFFSET UNITYSDK_OFFSET(0x1B380470)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1B360290)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B383990)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B382710)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B37FE90)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B380330)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B380460)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_PACKAGE_OFFSET UNITYSDK_OFFSET(0x1B380390)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SOURCECODEINFO_OFFSET UNITYSDK_OFFSET(0x1B380480)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1B380490)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B381DE0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B381E40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B383EC0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B380060)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B37FEF0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorProto_TypeDefinitionIndex = 5452;

	class FileDescriptorProto : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto*>** StaticGet__repeated_messageType_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F040);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__repeated_enumType_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F048);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_weakDependency_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F050);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>** StaticGet__repeated_service_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F058);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F060);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_extension_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F068);
		}
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F070);
		}
		static ::System::String** StaticGet_SyntaxDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F078);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_publicDependency_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F080);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_dependency_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F088);
		}
		static ::System::String** StaticGet_PackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1F090);
		}
		::Google::Protobuf::Reflection::FileOptions* options_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* enumType_; // 0x18
		::Google::Protobuf::Reflection::SourceCodeInfo* sourceCodeInfo_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* weakDependency_; // 0x28
		::System::String* package_; // 0x30
		::System::String* syntax_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>* service_; // 0x40
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>* messageType_; // 0x48
		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* publicDependency_; // 0x50
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* dependency_; // 0x58
		::System::String* name_; // 0x60
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x68
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* extension_; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FileDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::String* get_Package()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PACKAGE_OFFSET))(this);
		}

		::System::Void set_Package(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_PACKAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASPACKAGE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* get_Dependency()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DEPENDENCY_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* get_PublicDependency()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PUBLICDEPENDENCY_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>* get_MessageType()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_MESSAGETYPE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* get_EnumType()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_ENUMTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>* get_Service()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SERVICE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* get_Extension()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_EXTENSION_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::FileOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo* get_SourceCodeInfo()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SOURCECODEINFO_OFFSET))(this);
		}

		::System::Void set_SourceCodeInfo(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SOURCECODEINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSourceCodeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASSOURCECODEINFO_OFFSET))(this);
		}

		::System::String* get_Syntax()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SYNTAX_OFFSET))(this);
		}

		::System::Void set_Syntax(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SYNTAX_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSyntax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_HASSYNTAX_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FileDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FileDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
