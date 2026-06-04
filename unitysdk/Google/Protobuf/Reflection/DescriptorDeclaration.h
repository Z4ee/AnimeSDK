#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class IDescriptor; }
namespace Google::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORDECLARATION_FROMPROTO_OFFSET UNITYSDK_OFFSET(0x17E47C40)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORDECLARATION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x17E47A10)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E47A20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorDeclaration_TypeDefinitionIndex = 5526;

	class DescriptorDeclaration : public ::System::Object
	{
	public:
		::System::String* _TrailingComments_k__BackingField; // 0x10
		::System::String* _LeadingComments_k__BackingField; // 0x18
		::Google::Protobuf::Reflection::IDescriptor* _Descriptor_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _LeadingDetachedComments_k__BackingField; // 0x28
		::System::Int32 _EndColumn_k__BackingField; // 0x30
		::System::Int32 _StartLine_k__BackingField; // 0x34
		::System::Int32 _EndLine_k__BackingField; // 0x38
		::System::Int32 _StartColumn_k__BackingField; // 0x3C

		::System::Void _ctor(::Google::Protobuf::Reflection::IDescriptor* a1, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::IDescriptor*, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORDECLARATION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORDECLARATION_GET_STARTLINE_OFFSET))(this);
		}

		static ::Google::Protobuf::Reflection::DescriptorDeclaration* FromProto(::Google::Protobuf::Reflection::IDescriptor* a1, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* a2)
		{
			return ((::Google::Protobuf::Reflection::DescriptorDeclaration*(*)(::Google::Protobuf::Reflection::IDescriptor*, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORDECLARATION_FROMPROTO_OFFSET))(a1, a2);
		}
	};
}
