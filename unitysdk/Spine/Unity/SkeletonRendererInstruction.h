#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Attachment; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C1685E0)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C191C60)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_GEOMETRYNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1C1802D0)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SETWITHSUBSET_OFFSET UNITYSDK_OFFSET(0x1C18B000)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SET_OFFSET UNITYSDK_OFFSET(0x1C180580)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C170E30)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererInstruction_TypeDefinitionIndex = 40175;

	class SkeletonRendererInstruction : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Attachment*>* attachments; // 0x10
		::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* submeshInstructions; // 0x18
		::System::Int32 rawVertexCount; // 0x20
		::System::Boolean immutableTriangles; // 0x24
		::System::Boolean hasActiveClipping; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_DISPOSE_OFFSET))(this);
		}

		::System::Void SetWithSubset(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions, ::System::Int32 startSubmesh, ::System::Int32 endSubmesh)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SETWITHSUBSET_OFFSET))(this, instructions, startSubmesh, endSubmesh);
		}

		::System::Void Set(::Spine::Unity::SkeletonRendererInstruction* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SET_OFFSET))(this, other);
		}

		static ::System::Boolean GeometryNotEqual(::Spine::Unity::SkeletonRendererInstruction* a, ::Spine::Unity::SkeletonRendererInstruction* b)
		{
			return ((::System::Boolean(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_GEOMETRYNOTEQUAL_OFFSET))(a, b);
		}
	};
}
