#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace System { class String; }

#define SPINE_UNITY_SPINEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E693C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineEvent_TypeDefinitionIndex = 40649;

	class SpineEvent : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Boolean audioOnly; // 0x28

		::System::Void _ctor(::System::String* startsWith, ::System::String* dataField, ::System::Boolean includeNone, ::System::Boolean fallbackToTextField, ::System::Boolean audioOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEEVENT__CTOR_OFFSET))(this, startsWith, dataField, includeNone, fallbackToTextField, audioOnly);
		}
	};
}
