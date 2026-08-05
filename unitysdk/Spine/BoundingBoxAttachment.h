#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace System { class String; }

#define SPINE_BOUNDINGBOXATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1F4FA410)
#define SPINE_BOUNDINGBOXATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4FA3B0)
#define SPINE_BOUNDINGBOXATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FA350)

namespace Spine
{
	inline static constexpr unsigned int BoundingBoxAttachment_TypeDefinitionIndex = 33493;

	class BoundingBoxAttachment : public ::Spine::VertexAttachment
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::BoundingBoxAttachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoundingBoxAttachment*))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT__CTOR_1_OFFSET))(this, other);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
