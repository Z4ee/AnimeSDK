#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace Spine { class SlotData; }
namespace System { class String; }

#define SPINE_CLIPPINGATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1EC73780)
#define SPINE_CLIPPINGATTACHMENT_GET_ENDSLOT_OFFSET UNITYSDK_OFFSET(0x1EC73710)
#define SPINE_CLIPPINGATTACHMENT_SET_ENDSLOT_OFFSET UNITYSDK_OFFSET(0x1EC73720)
#define SPINE_CLIPPINGATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC73730)
#define SPINE_CLIPPINGATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC71170)

namespace Spine
{
	inline static constexpr unsigned int ClippingAttachment_TypeDefinitionIndex = 39654;

	class ClippingAttachment : public ::Spine::VertexAttachment
	{
	public:
		::Spine::SlotData* endSlot; // 0x38

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::ClippingAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ClippingAttachment*))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		::Spine::SlotData* get_EndSlot()
		{
			return ((::Spine::SlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_GET_ENDSLOT_OFFSET))(this);
		}

		::System::Void set_EndSlot(::Spine::SlotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SlotData*))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_SET_ENDSLOT_OFFSET))(this, a1);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
