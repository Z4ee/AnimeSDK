#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace System { class String; }

#define SPINE_BOUNDINGBOXATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x147795A0)
#define SPINE_BOUNDINGBOXATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14779560)
#define SPINE_BOUNDINGBOXATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14776EB0)

namespace Spine
{
	inline static constexpr unsigned int BoundingBoxAttachment_TypeDefinitionIndex = 37497;

	class BoundingBoxAttachment : public ::Spine::VertexAttachment
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::BoundingBoxAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoundingBoxAttachment*))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
