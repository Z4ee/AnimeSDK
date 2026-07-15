#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SPINE_UNITY_SPINEATTACHMENT_HIERARCHY__CTOR_OFFSET UNITYSDK_OFFSET(0x3939E30)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAttachment_Hierarchy_TypeDefinitionIndex = 42297;

	struct alignas(8) SpineAttachment_Hierarchy
	{
		::System::String* skin; // 0x10
		::System::String* slot; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_HIERARCHY__CTOR_OFFSET))(this, a1);
		}
	};
}
