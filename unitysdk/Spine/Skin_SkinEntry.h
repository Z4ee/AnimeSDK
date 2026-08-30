#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Attachment; }
namespace System { class String; }

#define SPINE_SKIN_SKINENTRY_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x14420)
#define SPINE_SKIN_SKINENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x6020)
#define SPINE_SKIN_SKINENTRY_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x5F00)
#define SPINE_SKIN_SKINENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x3B75510)

namespace Spine
{
	inline static constexpr unsigned int Skin_SkinEntry_TypeDefinitionIndex = 38400;

	struct alignas(8) Skin_SkinEntry
	{
		::System::Int32 slotIndex; // 0x10
		::System::String* name; // 0x18
		::Spine::Attachment* attachment; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::Spine::Attachment* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINENTRY_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINENTRY_GET_NAME_OFFSET))(this);
		}

		::Spine::Attachment* get_Attachment()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINENTRY_GET_ATTACHMENT_OFFSET))(this);
		}
	};
}
