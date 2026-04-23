#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Attachment; }
namespace System { class String; }

#define SPINE_SKIN_SKINENTRY_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x13C30)
#define SPINE_SKIN_SKINENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define SPINE_SKIN_SKINENTRY_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SPINE_SKIN_SKINENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x22B0950)

namespace Spine
{
	inline static constexpr unsigned int Skin_SkinEntry_TypeDefinitionIndex = 36459;

	struct alignas(8) Skin_SkinEntry
	{
		::System::Int32 slotIndex; // 0x10
		::System::String* name; // 0x18
		::Spine::Attachment* attachment; // 0x20

		::System::Void _ctor(::System::Int32 slotIndex, ::System::String* name, ::Spine::Attachment* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINENTRY__CTOR_OFFSET))(this, slotIndex, name, attachment);
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
