#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define SPINE_UNITY_SPINEATTRIBUTEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDE250)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAttributeBase_TypeDefinitionIndex = 41472;

	class SpineAttributeBase : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* startsWith; // 0x10
		::System::String* dataField; // 0x18
		::System::Boolean fallbackToTextField; // 0x20
		::System::Boolean includeNone; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTRIBUTEBASE__CTOR_OFFSET))(this);
		}
	};
}
