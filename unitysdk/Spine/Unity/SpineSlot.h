#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace System { class String; }

#define SPINE_UNITY_SPINESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E740)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSlot_TypeDefinitionIndex = 34828;

	class SpineSlot : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Boolean containsBoundingBoxes; // 0x28

		::System::Void _ctor(::System::String* startsWith, ::System::String* dataField, ::System::Boolean containsBoundingBoxes, ::System::Boolean includeNone, ::System::Boolean fallbackToTextField)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESLOT__CTOR_OFFSET))(this, startsWith, dataField, containsBoundingBoxes, includeNone, fallbackToTextField);
		}
	};
}
