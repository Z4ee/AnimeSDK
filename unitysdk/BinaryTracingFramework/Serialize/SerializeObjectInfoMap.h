#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/ClassTypeMeta.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace BinaryTracingFramework::Serialize { class SerializableObjectInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP_GETSERIALIZABLEOBJECTINFO_1_OFFSET UNITYSDK_OFFSET(0x1BF05260)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP_GETSERIALIZABLEOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1BF05130)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF05390)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF05380)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int SerializeObjectInfoMap_TypeDefinitionIndex = 32434;

	class SerializeObjectInfoMap : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::BinaryTracingFramework::Serialize::ClassTypeMeta, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*>** StaticGet_TypeMeta2Info()
		{
			return (::System::Collections::Generic::Dictionary_2<::BinaryTracingFramework::Serialize::ClassTypeMeta, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SerializeObjectInfoMap_TypeDefinitionIndex)->GetStaticField(0x25C70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*>** StaticGet_Type2Info()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Guid, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SerializeObjectInfoMap_TypeDefinitionIndex)->GetStaticField(0x25C78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP__CCTOR_OFFSET))();
		}

		static ::System::Boolean GetSerializableObjectInfo(::System::Guid guid, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*& info)
		{
			return ((::System::Boolean(*)(::System::Guid, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP_GETSERIALIZABLEOBJECTINFO_OFFSET))(guid, info);
		}

		static ::System::Boolean GetSerializableObjectInfo_1(::BinaryTracingFramework::Serialize::ClassTypeMeta type, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*& info)
		{
			return ((::System::Boolean(*)(::BinaryTracingFramework::Serialize::ClassTypeMeta, ::BinaryTracingFramework::Serialize::SerializableObjectInfo*&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTINFOMAP_GETSERIALIZABLEOBJECTINFO_1_OFFSET))(type, info);
		}
	};
}
