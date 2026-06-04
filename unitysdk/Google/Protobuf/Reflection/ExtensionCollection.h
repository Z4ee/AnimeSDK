#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x17E594F0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION_GET_UNORDEREDEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x17E594E0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E593E0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E592E0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionCollection_TypeDefinitionIndex = 5535;

	class ExtensionCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>*>* extensionsByTypeInNumberOrder; // 0x10
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* _UnorderedExtensions_k__BackingField; // 0x18
		::System::Collections::Generic::IDictionary_2<::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>*>* extensionsByTypeInDeclarationOrder; // 0x20

		::System::Void _ctor(::Google::Protobuf::Reflection::FileDescriptor* a1, ::Il2CppArray<::Google::Protobuf::Extension*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptor*, ::Il2CppArray<::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::MessageDescriptor* a1, ::Il2CppArray<::Google::Protobuf::Extension*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MessageDescriptor*, ::Il2CppArray<::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* get_UnorderedExtensions()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION_GET_UNORDEREDEXTENSIONS_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION_CROSSLINK_OFFSET))(this);
		}
	};
}
