#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET UNITYSDK_OFFSET(0x170E5CA0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FILE_OFFSET UNITYSDK_OFFSET(0x170E5C90)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x170E5C80)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170E5C70)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorBase_TypeDefinitionIndex = 6323;

	class DescriptorBase : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::FileDescriptor* _File_k__BackingField; // 0x10
		::System::String* _FullName_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void _ctor(::Google::Protobuf::Reflection::FileDescriptor* file, ::System::String* fullName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptor*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE__CTOR_OFFSET))(this, file, fullName, index);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FULLNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptor* get_File()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FILE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* GetNestedDescriptorListForField(::System::Int32 fieldNumber)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORBASE_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET))(this, fieldNumber);
		}
	};
}
