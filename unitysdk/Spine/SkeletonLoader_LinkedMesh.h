#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class MeshAttachment; }
namespace System { class String; }

#define SPINE_SKELETONLOADER_LINKEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x19DFA3A0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonLoader_LinkedMesh_TypeDefinitionIndex = 36457;

	class SkeletonLoader_LinkedMesh : public ::System::Object
	{
	public:
		::Spine::MeshAttachment* mesh; // 0x10
		::System::String* skin; // 0x18
		::System::String* parent; // 0x20
		::System::Int32 slotIndex; // 0x28
		::System::Boolean inheritTimelines; // 0x2C

		::System::Void _ctor(::Spine::MeshAttachment* mesh, ::System::String* skin, ::System::Int32 slotIndex, ::System::String* parent, ::System::Boolean inheritTimelines)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_LINKEDMESH__CTOR_OFFSET))(this, mesh, skin, slotIndex, parent, inheritTimelines);
		}
	};
}
