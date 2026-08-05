#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Skeleton; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_SUBMESHINSTRUCTION_GET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x900A00)
#define SPINE_UNITY_SUBMESHINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x900A10)

namespace Spine::Unity
{
	inline static constexpr unsigned int SubmeshInstruction_TypeDefinitionIndex = 40177;

	struct alignas(8) SubmeshInstruction
	{
		::Spine::Skeleton* skeleton; // 0x10
		::System::Int32 startSlot; // 0x18
		::System::Int32 endSlot; // 0x1C
		::UnityEngine::Material* material; // 0x20
		::System::Boolean forceSeparate; // 0x28
		::System::Int32 preActiveClippingSlotSource; // 0x2C
		::System::Int32 rawTriangleCount; // 0x30
		::System::Int32 rawVertexCount; // 0x34
		::System::Int32 rawFirstVertexIndex; // 0x38
		::System::Boolean hasClipping; // 0x3C
		::System::Boolean hasPMAAdditiveSlot; // 0x3D

		::System::Int32 get_SlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SUBMESHINSTRUCTION_GET_SLOTCOUNT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SUBMESHINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
