#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace System { template <typename T> class Action_1; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_SERIALIZEOBJECTCOMPOSE_COMPLETE_OFFSET UNITYSDK_OFFSET(0xA5C610)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int WriteLinker_SerializeObjectCompose_TypeDefinitionIndex = 33988;

	struct alignas(8) WriteLinker_SerializeObjectCompose
	{
		::BinaryTracingFramework::Serialize::ISerializableObject* Target; // 0x10
		::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>* OnUsingComplete; // 0x18

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_SERIALIZEOBJECTCOMPOSE_COMPLETE_OFFSET))(this);
		}
	};
}
