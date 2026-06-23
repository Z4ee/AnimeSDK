#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorPool; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_BUILDFROM_OFFSET UNITYSDK_OFFSET(0x1E7218E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_COMPUTEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1E7217C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1E721B40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_DETERMINEPUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1E7213C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_FROMGENERATEDCODE_OFFSET UNITYSDK_OFFSET(0x1E722460)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_DESCRIPTORPOOL_OFFSET UNITYSDK_OFFSET(0x1E7218D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_MESSAGETYPES_OFFSET UNITYSDK_OFFSET(0x1E721870)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E721840)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0x1E7217A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1E721860)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1E721890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1E721880)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_MIHOYO_SDK_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FILE_OFFSET UNITYSDK_OFFSET(0x1E7218C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_MIHOYO_SDK_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1E7218A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7226E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E721110)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptor_TypeDefinitionIndex = 28569;

	class FileDescriptor : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* _Proto_k__BackingField; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool* _DescriptorPool_k__BackingField; // 0x18
		::MiHoYo::SDK::Protobuf::ByteString* _SerializedData_k__BackingField; // 0x20
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* _PublicDependencies_k__BackingField; // 0x28
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* _MessageTypes_k__BackingField; // 0x30
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* _Dependencies_k__BackingField; // 0x38
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor*>* _Services_k__BackingField; // 0x40
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor*>* _EnumTypes_k__BackingField; // 0x48

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::ByteString* descriptorData, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* proto, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencies, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool* pool, ::System::Boolean allowUnknownDependencies, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool*, ::System::Boolean, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR__CTOR_OFFSET))(this, descriptorData, proto, dependencies, pool, allowUnknownDependencies, generatedCodeInfo);
		}

		::System::String* ComputeFullName(::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* parent, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_COMPUTEFULLNAME_OFFSET))(this, parent, name);
		}

		static ::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* DeterminePublicDependencies(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* this_, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* proto, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencies, ::System::Boolean allowUnknownDependencies)
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*(*)(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_DETERMINEPUBLICDEPENDENCIES_OFFSET))(this_, proto, dependencies, allowUnknownDependencies);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* get_Proto()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Package()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PACKAGE_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* get_MessageTypes()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_MESSAGETYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor*>* get_Services()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_SERVICES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* get_PublicDependencies()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_PUBLICDEPENDENCIES_OFFSET))(this);
		}

		::System::String* MiHoYo_SDK_Protobuf_Reflection_IDescriptor_get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_MIHOYO_SDK_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FULLNAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* MiHoYo_SDK_Protobuf_Reflection_IDescriptor_get_File()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_MIHOYO_SDK_PROTOBUF_REFLECTION_IDESCRIPTOR_GET_FILE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool* get_DescriptorPool()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_GET_DESCRIPTORPOOL_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* BuildFrom(::MiHoYo::SDK::Protobuf::ByteString* descriptorData, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* proto, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencies, ::System::Boolean allowUnknownDependencies, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)(::MiHoYo::SDK::Protobuf::ByteString*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*, ::System::Boolean, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_BUILDFROM_OFFSET))(descriptorData, proto, dependencies, allowUnknownDependencies, generatedCodeInfo);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* FromGeneratedCode(::Il2CppArray<::System::Byte>* descriptorData, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencies, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_FROMGENERATEDCODE_OFFSET))(descriptorData, dependencies, generatedCodeInfo);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR_TOSTRING_OFFSET))(this);
		}
	};
}
