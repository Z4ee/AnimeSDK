#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileOptions; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class SourceCodeInfo; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA6EBB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA6DB70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA6DE80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA6DE20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA6E100)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1FA6DD20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA6D550)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1FA6DD50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1FA6DD40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FA6DBC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FA6DB30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0x1FA6DC70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FA6D4F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PUBLICDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1FA6DD30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SERVICE_OFFSET UNITYSDK_OFFSET(0x1FA6DD60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SOURCECODEINFO_OFFSET UNITYSDK_OFFSET(0x1FA6DB50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1FA6DD70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA6EEB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA6D6D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FA6DBD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FA6DB40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_PACKAGE_OFFSET UNITYSDK_OFFSET(0x1FA6DC80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SOURCECODEINFO_OFFSET UNITYSDK_OFFSET(0x1FA6DB60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1FA6DD80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA6E870)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA6E8D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA6F530)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA6D930)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA6D730)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorProto_TypeDefinitionIndex = 29101;

	class FileDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__repeated_enumType_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24810);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_weakDependency_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24818);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>** StaticGet__repeated_service_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24820);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_publicDependency_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24828);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24830);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_extension_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24838);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_dependency_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24840);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>** StaticGet__repeated_messageType_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24848);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>* weakDependency_; // 0x10
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>* extension_; // 0x18
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>* enumType_; // 0x20
		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* sourceCodeInfo_; // 0x28
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>* service_; // 0x30
		::System::String* syntax_; // 0x38
		::System::String* package_; // 0x40
		::System::String* name_; // 0x48
		::MiHoYo::SDK::Protobuf::Reflection::FileOptions* options_; // 0x50
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* dependency_; // 0x58
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>* publicDependency_; // 0x60
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>* messageType_; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Package()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PACKAGE_OFFSET))(this);
		}

		::System::Void set_Package(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_PACKAGE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* get_Dependency()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_DEPENDENCY_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>* get_PublicDependency()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_PUBLICDEPENDENCY_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>* get_MessageType()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_MESSAGETYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>* get_EnumType()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_ENUMTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>* get_Service()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SERVICE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::FileOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* get_SourceCodeInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SOURCECODEINFO_OFFSET))(this);
		}

		::System::Void set_SourceCodeInfo(::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SOURCECODEINFO_OFFSET))(this, value);
		}

		::System::String* get_Syntax()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GET_SYNTAX_OFFSET))(this);
		}

		::System::Void set_Syntax(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_SET_SYNTAX_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
