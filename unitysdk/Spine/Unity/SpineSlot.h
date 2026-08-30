#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace System { class String; }

#define SPINE_UNITY_SPINESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66BBE0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSlot_TypeDefinitionIndex = 43900;

	class SpineSlot : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Boolean containsBoundingBoxes; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESLOT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
