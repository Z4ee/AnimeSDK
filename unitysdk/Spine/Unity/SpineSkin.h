#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace System { class String; }

#define SPINE_UNITY_SPINESKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E720)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSkin_TypeDefinitionIndex = 34834;

	class SpineSkin : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Boolean defaultAsEmptyString; // 0x28

		::System::Void _ctor(::System::String* startsWith, ::System::String* dataField, ::System::Boolean includeNone, ::System::Boolean fallbackToTextField, ::System::Boolean defaultAsEmptyString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESKIN__CTOR_OFFSET))(this, startsWith, dataField, includeNone, fallbackToTextField, defaultAsEmptyString);
		}
	};
}
