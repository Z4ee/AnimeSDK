#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/ClassTypeMeta.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZABLEOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF05120)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int SerializableObjectInfo_TypeDefinitionIndex = 32432;

	class SerializableObjectInfo : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::BinaryTracingFramework::Serialize::ISerializableObject*>* Creator; // 0x10
		::BinaryTracingFramework::Serialize::ClassTypeMeta Index; // 0x18
		::System::Int32 Version; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZABLEOBJECTINFO__CTOR_OFFSET))(this);
		}
	};
}
