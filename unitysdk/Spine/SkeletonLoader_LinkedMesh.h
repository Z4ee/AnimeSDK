#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class MeshAttachment; }
namespace System { class String; }

#define SPINE_SKELETONLOADER_LINKEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC76290)

namespace Spine
{
	inline static constexpr unsigned int SkeletonLoader_LinkedMesh_TypeDefinitionIndex = 36757;

	class SkeletonLoader_LinkedMesh : public ::System::Object
	{
	public:
		::System::String* parent; // 0x10
		::Spine::MeshAttachment* mesh; // 0x18
		::System::String* skin; // 0x20
		::System::Boolean inheritTimelines; // 0x28
		::System::Int32 slotIndex; // 0x2C

		::System::Void _ctor(::Spine::MeshAttachment* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_LINKEDMESH__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
