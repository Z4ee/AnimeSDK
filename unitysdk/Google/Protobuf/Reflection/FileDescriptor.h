#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf { class ExtensionRegistry; }
namespace Google::Protobuf::Reflection { class DescriptorBase; }
namespace Google::Protobuf::Reflection { class DescriptorDeclaration; }
namespace Google::Protobuf::Reflection { class DescriptorPool; }
namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class ExtensionCollection; }
namespace Google::Protobuf::Reflection { class FileDescriptorProto; }
namespace Google::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace Google::Protobuf::Reflection { class IDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class ServiceDescriptor; }
namespace System { class String; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_ADDALLEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x17103010)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_BUILDFROM_OFFSET UNITYSDK_OFFSET(0x17101F50)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_COMPUTEFULLNAME_OFFSET UNITYSDK_OFFSET(0x170F21E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_CREATEDECLARATIONMAP_OFFSET UNITYSDK_OFFSET(0x17101180)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x17102090)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_DETERMINEPUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x17100BE0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_FINDDESCRIPTORFORPATH_OFFSET UNITYSDK_OFFSET(0x17101690)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_FROMGENERATEDCODE_OFFSET UNITYSDK_OFFSET(0x170F1B70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETALLDEPENDEDEXTENSIONSFROMMESSAGE_OFFSET UNITYSDK_OFFSET(0x17103490)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETALLDEPENDEDEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x171032C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETALLGENERATEDEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x17103160)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETDESCRIPTORFROMLIST_OFFSET UNITYSDK_OFFSET(0x17101BD0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET UNITYSDK_OFFSET(0x17101B40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x17101EA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_DESCRIPTORPOOL_OFFSET UNITYSDK_OFFSET(0x17101F40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_ENUMTYPES_OFFSET UNITYSDK_OFFSET(0x17101E70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x17101E90)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_MESSAGETYPES_OFFSET UNITYSDK_OFFSET(0x17101E60)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x170E6ED0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0x170E6B40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x17101D70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x17101EB0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x17101E80)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GOOGLE_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FILE_OFFSET UNITYSDK_OFFSET(0x17101F30)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GOOGLE_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x17101EC0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17103600)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17100580)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x171008D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptor_TypeDefinitionIndex = 6340;

	class FileDescriptor : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>* _PublicDependencies_k__BackingField; // 0x10
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MessageDescriptor*>* _MessageTypes_k__BackingField; // 0x18
		::System::Lazy_1<::System::Collections::Generic::Dictionary_2<::Google::Protobuf::Reflection::IDescriptor*, ::Google::Protobuf::Reflection::DescriptorDeclaration*>*>* declarations; // 0x20
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>* _Dependencies_k__BackingField; // 0x28
		::Google::Protobuf::ByteString* _SerializedData_k__BackingField; // 0x30
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::ServiceDescriptor*>* _Services_k__BackingField; // 0x38
		::Google::Protobuf::Reflection::FileDescriptorProto* _Proto_k__BackingField; // 0x40
		::Google::Protobuf::Reflection::DescriptorPool* _DescriptorPool_k__BackingField; // 0x48
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumDescriptor*>* _EnumTypes_k__BackingField; // 0x50
		::Google::Protobuf::Reflection::ExtensionCollection* _Extensions_k__BackingField; // 0x58

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Google::Protobuf::ByteString* descriptorData, ::Google::Protobuf::Reflection::FileDescriptorProto* proto, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Reflection::FileDescriptor*>* dependencies, ::Google::Protobuf::Reflection::DescriptorPool* pool, ::System::Boolean allowUnknownDependencies, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*, ::Google::Protobuf::Reflection::FileDescriptorProto*, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Reflection::FileDescriptor*>*, ::Google::Protobuf::Reflection::DescriptorPool*, ::System::Boolean, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR__CTOR_OFFSET))(this, descriptorData, proto, dependencies, pool, allowUnknownDependencies, generatedCodeInfo);
		}

		::System::Collections::Generic::Dictionary_2<::Google::Protobuf::Reflection::IDescriptor*, ::Google::Protobuf::Reflection::DescriptorDeclaration*>* CreateDeclarationMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Google::Protobuf::Reflection::IDescriptor*, ::Google::Protobuf::Reflection::DescriptorDeclaration*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_CREATEDECLARATIONMAP_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::IDescriptor* FindDescriptorForPath(::System::Collections::Generic::IList_1<::System::Int32>* path)
		{
			return ((::Google::Protobuf::Reflection::IDescriptor*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_FINDDESCRIPTORFORPATH_OFFSET))(this, path);
		}

		::Google::Protobuf::Reflection::DescriptorBase* GetDescriptorFromList(::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* list, ::System::Int32 index)
		{
			return ((::Google::Protobuf::Reflection::DescriptorBase*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETDESCRIPTORFROMLIST_OFFSET))(this, list, index);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* GetNestedDescriptorListForField(::System::Int32 fieldNumber)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET))(this, fieldNumber);
		}

		::System::String* ComputeFullName(::Google::Protobuf::Reflection::MessageDescriptor* parent, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_COMPUTEFULLNAME_OFFSET))(this, parent, name);
		}

		static ::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>* DeterminePublicDependencies(::Google::Protobuf::Reflection::FileDescriptor* this_, ::Google::Protobuf::Reflection::FileDescriptorProto* proto, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Reflection::FileDescriptor*>* dependencies, ::System::Boolean allowUnknownDependencies)
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>*(*)(::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::FileDescriptorProto*, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Reflection::FileDescriptor*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_DETERMINEPUBLICDEPENDENCIES_OFFSET))(this_, proto, dependencies, allowUnknownDependencies);
		}

		::Google::Protobuf::Reflection::FileDescriptorProto* get_Proto()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Package()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PACKAGE_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MessageDescriptor*>* get_MessageTypes()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MessageDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_MESSAGETYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumDescriptor*>* get_EnumTypes()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_ENUMTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::ServiceDescriptor*>* get_Services()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::ServiceDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_SERVICES_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ExtensionCollection* get_Extensions()
		{
			return ((::Google::Protobuf::Reflection::ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_EXTENSIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>* get_Dependencies()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_DEPENDENCIES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>* get_PublicDependencies()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FileDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PUBLICDEPENDENCIES_OFFSET))(this);
		}

		::System::String* Google_Protobuf_Reflection_IDescriptor_get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GOOGLE_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FULLNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptor* Google_Protobuf_Reflection_IDescriptor_get_File()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GOOGLE_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FILE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::DescriptorPool* get_DescriptorPool()
		{
			return ((::Google::Protobuf::Reflection::DescriptorPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_DESCRIPTORPOOL_OFFSET))(this);
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* BuildFrom(::Google::Protobuf::ByteString* descriptorData, ::Google::Protobuf::Reflection::FileDescriptorProto* proto, ::Il2CppArray<::Google::Protobuf::Reflection::FileDescriptor*>* dependencies, ::System::Boolean allowUnknownDependencies, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)(::Google::Protobuf::ByteString*, ::Google::Protobuf::Reflection::FileDescriptorProto*, ::Il2CppArray<::Google::Protobuf::Reflection::FileDescriptor*>*, ::System::Boolean, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_BUILDFROM_OFFSET))(descriptorData, proto, dependencies, allowUnknownDependencies, generatedCodeInfo);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* FromGeneratedCode(::Il2CppArray<::System::Byte>* descriptorData, ::Il2CppArray<::Google::Protobuf::Reflection::FileDescriptor*>* dependencies, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::Google::Protobuf::Reflection::FileDescriptor*>*, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_FROMGENERATEDCODE_OFFSET))(descriptorData, dependencies, generatedCodeInfo);
		}

		static ::System::Void AddAllExtensions(::Il2CppArray<::Google::Protobuf::Reflection::FileDescriptor*>* dependencies, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generatedInfo, ::Google::Protobuf::ExtensionRegistry* registry)
		{
			return ((::System::Void(*)(::Il2CppArray<::Google::Protobuf::Reflection::FileDescriptor*>*, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_ADDALLEXTENSIONS_OFFSET))(dependencies, generatedInfo, registry);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>* GetAllGeneratedExtensions(::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generated)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>*(*)(::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETALLGENERATEDEXTENSIONS_OFFSET))(generated);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>* GetAllDependedExtensions(::Google::Protobuf::Reflection::FileDescriptor* descriptor)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>*(*)(::Google::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETALLDEPENDEDEXTENSIONS_OFFSET))(descriptor);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>* GetAllDependedExtensionsFromMessage(::Google::Protobuf::Reflection::MessageDescriptor* descriptor)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>*(*)(::Google::Protobuf::Reflection::MessageDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GETALLDEPENDEDEXTENSIONSFROMMESSAGE_OFFSET))(descriptor);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR_TOSTRING_OFFSET))(this);
		}
	};
}
